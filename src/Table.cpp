//
// Created by yonatan on 11/5/18.
//

#include "../include/Table.h"
using namespace std;

Table::Table(int t_capacity) {

}

int Table::getCapacity() const {
    return 0;
}

void Table::addCustomer(Customer *customer) {

}

void Table::removeCustomer(int id) {

}

Customer *Table::getCustomer(int id) {
    return nullptr;
}

vector<Customer*> &Table::getCustomers() {
    return customersList;
}

vector<OrderPair> &Table::getOrders() {
    return orderList;
}

void Table::order(const vector<Dish> &menu) {

}

void Table::openTable() {

}

void Table::closeTable() {

}

int Table::getBill() {
    return 0;
}

bool Table::isOpen() {
    return false;
}

