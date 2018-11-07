//
// Created by yonatan on 11/5/18.
//

#include "../include/Table.h"
using namespace std;

Table::Table(int t_capacity):
        capacity(t_capacity) {
    open = true;
}

Table::Table(const Table& other){
    capacity = other.getCapacity();
    open = other.isOpen();

    // need to think if this is bad
    for (auto int_dish : other.orderList){
        orderList.push_back(int_dish);
    }
    for (auto customer : other.customersList){
        customersList.push_back(customer);
    }
    //

// problem - this is giving edit privleges
//    for (auto customer : other.getCustomers()){
//        customersList.push_back(customer);
//        // IMPORTANT: here we copy only addresses,
//        // because of the different types of customer
//    }
//
//    for (auto orderPair: other.getOrders()){
//        orderList.push_back(OrderPair(orderPair))
//    }
}

int Table::getCapacity() const {
    return capacity;
}

void Table::addCustomer(Customer *customer) {

}

void Table::removeCustomer(int id) {

}

Customer *Table::getCustomer(int id) {
    // TODO: change this to actually find by id
    return customersList[id];
}
// problem - this is giving edit privleges
//vector<Customer*> &Table::getCustomers() {
//    return customersList;
//}

// problem - this is giving edit privleges
//vector<OrderPair> &Table::getOrders() {
//    return orderList;
//}

void Table::order(const vector<Dish> &menu) {

}

void Table::openTable() {

}

void Table::closeTable() {

}

int Table::getBill() {
    return 0;
}

bool Table::isOpen() const {
    return open;
}

//void Table::copy( const Table &other) {
//    capacity = other.getCapacity();
//    open = other.isOpen();
//
//    // need to think if this is bad
//    customersList = other.customersList;
//    orderList= other.orderList;
//    //
//
//// problem - this is giving edit privleges
////    for (auto customer : other.getCustomers()){
////        customersList.push_back(customer);
////        // IMPORTANT: here we copy only addresses,
////        // because of the different types of customer
////    }
////
////    for (auto orderPair: other.getOrders()){
////        orderList.push_back(OrderPair(orderPair))
////    }
//}

