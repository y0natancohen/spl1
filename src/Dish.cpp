//
// Created by yonatan on 11/5/18.
//

#include "../include/Dish.h"

Dish::Dish(int d_id, std::string d_name, int d_price, DishType d_type):
            id(d_id), name(d_name), price(d_price), type(d_type){}

int Dish::getId() const {
    return id;
}

std::string Dish::getName() const {
    return name;
}

int Dish::getPrice() const {
    return price;
}

DishType Dish::getType() const {
    return type;
}

Dish::Dish(const Dish &dish):
            id(dish.getId()),
            name(dish.getName()),
            price(dish.getPrice()),
            type(dish.getType())
            {}

Dish::Dish(const Dish *dish):
        id(dish->getId()),
        name(dish->getName()),
        price(dish->getPrice()),
        type(dish->getType()) {}

