//
// Created by yonatan on 11/5/18.
//

#include "../include/Restaurant.h"



using namespace Restaurant


Restaurant::Restaurant(Restaurant &&res) {

}

Restaurant::Restaurant(const std::string &configFilePath) {

}

Restaurant::~Restaurant() {

}

Restaurant::Restaurant(const Restaurant &res) {

}

Restaurant::Restaurant() {

}

void Restaurant::start() {

}

int Restaurant::getNumOfTables() const {
    return 0;
}

const std::vector<BaseAction *> &Restaurant::getActionsLog() const {
    return <#initializer#>;
}

Table *Restaurant::getTable(int ind) {
    return nullptr;
}

std::vector<Dish> &Restaurant::getMenu() {
    return <#initializer#>;
}

Restaurant &Restaurant::operator=(const Restaurant &res) {
    return <#initializer#>;
}

Restaurant &Restaurant::operator=(const Restaurant &&res) {
    return <#initializer#>;
}

