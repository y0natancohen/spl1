//
// Created by yonatan on 11/5/18.
//

#include "../include/Restaurant.h"



Restaurant::Restaurant() {

}

Restaurant::Restaurant(const std::string &configFilePath) {

}

Restaurant::~Restaurant() {
    clear();
}

Restaurant &Restaurant::operator=(const Restaurant &res) {
    return copy(res);
}

Restaurant &Restaurant::copy(const Restaurant &res) {
    if (this == &res) {
        return *this;
    }

    clear()

    open = res.isOpen();
    for (int i = 0; i < ; ++i) {
        tables.push_back(*res.getTables()[i].copy() )
    }

    menu = getMenu();
    actionsLog = getActionsLog();


    return *this;
}

Restaurant::Restaurant(Restaurant &&res) {


}

Restaurant &Restaurant::operator=(const Restaurant &&res) {
    return copy(res);
}

Restaurant::Restaurant(const Restaurant &res) {
    return copy(res);
}

void Restaurant::start() {

}

int Restaurant::getNumOfTables() const {
    return tables.size();
}

Table *Restaurant::getTable(int ind) {
    return nullptr;
}

const std::vector<BaseAction *> &Restaurant::getActionsLog() const {
    return actionsLog;
}

std::vector<Dish> &Restaurant::getMenu() {
    return menu;
}

bool Restaurant::isOpen() const {
    return open;
}

void Restaurant::clear() {

    delete actionsLog;
    delete menu;
    delete tables;
    delete open;

}

std::vector<Table *> Restaurant::getTables() {
    return tables;
}


