//
// Created by yonatan on 11/5/18.
//

#include "../include/Restaurant.h"



Restaurant::Restaurant::Restaurant(Restaurant &&res) {

}

Restaurant::Restaurant::Restaurant(const std::string &configFilePath) {

}

Restaurant::Restaurant::~Restaurant() {

}

Restaurant::Restaurant::Restaurant(const Restaurant &res) {

}

Restaurant::Restaurant::Restaurant() {

}


Restaurant::Restaurant &Restaurant::operator=(const Restaurant &res) {
    return *this;
}

Restaurant::Restaurant &Restaurant::operator=(const Restaurant &&res) {
    return *this;
}

void Restaurant::start() {

}

int Restaurant::getNumOfTables() const {
    return tables.size();
}

const std::vector<BaseAction *> &Restaurant::getActionsLog() const {
    return actionsLog;
}

Table *Restaurant::getTable(int ind) {
    return tables[ind];
}

std::vector<Dish> &Restaurant::getMenu() {
    return menu;
}


