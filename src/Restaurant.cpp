//
// Created by yonatan on 11/5/18.
//

#include "../include/Restaurant.h"



Restaurant::Restaurant() {

}

Restaurant::Restaurant(const std::string &configFilePath) {

}

Restaurant::~Restaurant() {
    clearTables();
}

Restaurant::Restaurant(const Restaurant& other) {
//    if (this == &other) {
//        return *this;
//    }

    clearTables();

    open = other.isOpen();
    for (auto table : other.getTables()) {
        //TODO: WTFFFFFFF
        int *new_t = new Table(table);
        tables.push_back(*new_t)
    }

    menu = getMenu();
    actionsLog = getActionsLog();


//    return *this;
}

//Restaurant &Restaurant::operator=(const Restaurant &res) {
//    return copy(res);
//}



//Restaurant::Restaurant(Restaurant &&res) {
//
//
//}

//Restaurant &Restaurant::operator=(const Restaurant &&res) {
//    return copy(res);
//}

//Restaurant::Restaurant(const Restaurant &res) {
//    return copy(res);
//}

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

void Restaurant::clearTables() {
    for (auto table : tables) {
        delete table;
        // TODO: null here??
    }

}

std::vector<Table *> Restaurant::getTables() const {
    return tables;
}


