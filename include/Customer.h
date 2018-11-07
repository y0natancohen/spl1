#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <vector>
#include <string>
#include "Dish.h"

class Customer{
public:
    Customer(std::string c_name, int c_id);
    Customer(const Customer& customer);
    virtual std::vector<int> order(const std::vector<Dish> &menu)=0;
    virtual std::string toString() const = 0;
    std::string getName() const;
    int getId() const;

    int getCorrectId(
            const std::vector<Dish> &menu,
            const DishType type,
            int location,
            bool sortById,
            bool noType);


        private:
    const std::string name;
    const int id;
};


class VegetarianCustomer : public Customer {
public:
	VegetarianCustomer(std::string name, int id);
//    VegetarianCustomer(const VegetarianCustomer& vegetarianCustomer);

    std::vector<int> order(const std::vector<Dish> &menu);
    std::string toString() const;
private:
};


class CheapCustomer : public Customer {
public:
	CheapCustomer(std::string name, int id);
//    CheapCustomer(const CheapCustomer& cheapCustomer);
    std::vector<int> order(const std::vector<Dish> &menu);
    std::string toString() const;

private:
};


class SpicyCustomer : public Customer {
public:
	SpicyCustomer(std::string name, int id);
//    SpicyCustomer(const SpicyCustomer& spicyCustomer);
    std::vector<int> order(const std::vector<Dish> &menu);
    std::string toString() const;
    bool hasOrdered();
    void setOrdered(bool newState);
private:
    bool ordered;
};


class AlchoholicCustomer : public Customer {
public:
	AlchoholicCustomer(std::string name, int id);
//    AlchoholicCustomer(const AlchoholicCustomer& alchoholicCustomer);
    std::vector<int> order(const std::vector<Dish> &menu);
    std::string toString() const;
    int getDrinksHad();
    void increaseDrinksHad();
private:
    int drinksHad;
};


#endif