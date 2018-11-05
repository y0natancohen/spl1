//
// Created by yonatan on 11/5/18.
//

#include "../include/Restaurant.h"



using namespace Restaurant

Restaurant{

}

Restaurant(const std::string &configFilePath) {

}

Restaurant(const Restaurant &res) {

}

~Restaurant() {

}

Restaurant &operator=(const Restaurant &res) {
    return;
}

Restaurant(Restaurant &&res) {

}

void start() {

}

int getNumOfTables() const {
    return 0;
}

std::vector<Dish> &getMenu() {
    return nullptr;
}

Table *getTable(int ind) {
    return nullptr;
}

const std::vector<BaseAction *> &getActionsLog() const {
    return nullptr;
}

Restaurant &operator=(const Restaurant &&res) {
    return nullptr;
}

