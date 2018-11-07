//
// Created by yonatan on 11/5/18.
//
#include <algorithm>
#include "../include/Customer.h"

std::string Customer::getName() const {
    return name;
}

int Customer::getId() const {
    return id;
}


Customer::Customer(std::string c_name, int c_id):
                    name(c_name), id(c_id) {}

int Customer::getCorrectId(
        const std::vector<Dish> &menu,
        const DishType type,
        int location,
        bool sortById,
        bool noType) {

    if (menu.size() > 0){

        std::vector<Dish> dishes;

        for (auto d : menu) {
            Dish new_d = Dish(&d);
            if (noType){
                dishes.push_back(new_d);
            }else{
                if (d.getType() == type){
                    new_d = Dish(d);
                    dishes.push_back(new_d);
                }
            }

        }
        // dishes ready
        if (dishes.size() > 0){

            if (sortById){
                std::sort(dishes.begin(), dishes.end(),
                [ ]( const Dish& l, const Dish& r ){return l.getId() < r.getId(); })

            }else{
                std::sort(dishes.begin(), dishes.end(),
                          [ ]( const Dish& l, const Dish& r ){return l.getPrice() < r.getPrice(); })

            }
            // sorted
            if (location == -1 ){ // last
                return dishes[dishes.size() - 1]
            }else {
                return dishes[location]
            }
        }else{
            return -1
        }

    } else {
        return -1;
    }
}

Customer::Customer(const Customer &customer) {
    name = customer.getName();
    id = customer.getId();
}

int Customer::getId() {
    return id;
}


VegetarianCustomer::VegetarianCustomer(std::string name, int id) : Customer(name, id) {

}

std::vector<int> VegetarianCustomer::order(const std::vector<Dish> &menu) {
    // vegetarian dish with the smallest id in the menu
    // the most expensive beverage (Non-alcoholic).
    int veg = getCorrectId(menu, VEG, 0, true, false);
    int bvg = getCorrectId(menu, BVG, -1, false, false);

    std::vector<int> result;
    if (veg != -1){
        result.push_back(veg);
    }
    if (bvg != -1){
        result.push_back(bvg);
    }
    return result;
}

std::string VegetarianCustomer::toString() const {
    return name;
}

VegetarianCustomer::VegetarianCustomer(const VegetarianCustomer &vegetarianCustomer) {
    name = vegetarianCustomer.getName();
    id = vegetarianCustomer.getId();
}

CheapCustomer::CheapCustomer(std::string name, int id) : Customer(name, id) {
}

std::vector<int> CheapCustomer::order(const std::vector<Dish> &menu) {
    // cheapest dish in the menu
    int dish = getCorrectId(menu, BVG, 0, false, true);

    std::vector<int> result;
    if (dish != -1){
        result.push_back(dish);
    }
    return result;
}

std::string CheapCustomer::toString() const {
    return name;
}

CheapCustomer::CheapCustomer(const CheapCustomer &cheapCustomer) {
    name = cheapCustomer.getName();
    id = cheapCustomer.getId();
}

bool SpicyCustomer::hasOrdered() {
    return ordered;
}

void SpicyCustomer::setOrdered(bool newState) {
    ordered = newState;
}

SpicyCustomer::SpicyCustomer(std::string name, int id) : Customer(name, id) {
    ordered = false;
}

std::vector<int> SpicyCustomer::order(const std::vector<Dish> &menu) {
    int dish;
    if (hasOrdered()) {
        // cheapest non-alcoholic beverage
        dish = getCorrectId(menu, BVG, 0, false, false);
    }else{
        // most expensive spicy dish
        dish = getCorrectId(menu, SPC, -1, false, false);
        setOrdered(true);
    }

    std::vector<int> result;
    if (dish != -1){
        result.push_back(dish);
    }
    return result;

}

std::string SpicyCustomer::toString() const {
    return name;
}

SpicyCustomer::SpicyCustomer(const SpicyCustomer &spicyCustomer) {
    name = spicyCustomer.getName();
    id = spicyCustomer.getId();
    ordered = spicyCustomer.hasOrdered();
}

AlchoholicCustomer::AlchoholicCustomer(std::string name, int id) : Customer(name, id) {
    drinksHad = 0;
}

std::vector<int> AlchoholicCustomer::order(const std::vector<Dish> &menu) {
    // nth cheapest alcoholic
    int dish = getCorrectId(menu, ALC, getDrinksHad(), false, false);
    increaseDrinksHad();

    std::vector<int> result;
    if (dish != -1){
        result.push_back(dish);
    }
    return result;;
}

std::string AlchoholicCustomer::toString() const {
    return name;
}

int AlchoholicCustomer::getDrinksHad() {
    return drinksHad;
}

void AlchoholicCustomer::increaseDrinksHad() {
    ++drinksHad;

}

AlchoholicCustomer::AlchoholicCustomer(const AlchoholicCustomer &alchoholicCustomer) {
    name = alchoholicCustomer.getName();
    id = alchoholicCustomer.getId();
    drinksHad = alchoholicCustomer.getDrinksHad();
}
