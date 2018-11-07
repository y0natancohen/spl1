#ifndef RESTAURANT_H_
#define RESTAURANT_H_

#include <vector>
#include <string>
#include "Dish.h"
#include "Table.h"
#include "Action.h"


class Restaurant{		
public:
	Restaurant();

    Restaurant(const std::string &configFilePath);
//    Restaurant(const Restaurant &other);
    virtual ~Restaurant();
//    Restaurant& operator=(const Restaurant& res);
//    Restaurant (Restaurant&& res);
//    Restaurant& operator=(const Restaurant&& res);

    void clearTables();
//    Restaurant* copy();
    void start();
    int getNumOfTables() const;
    Table* getTable(int ind);
    std::vector<Table*> getTables() const;
	const std::vector<BaseAction*>& getActionsLog() const; // Return a reference to the history of actions
    std::vector<Dish>& getMenu();
    bool isOpen() const;



private:
    bool open;
    std::vector<Table*> tables;
    std::vector<Dish> menu;
    std::vector<BaseAction*> actionsLog;

//    Restaurant &copy(const Restaurant &res);
};



#endif