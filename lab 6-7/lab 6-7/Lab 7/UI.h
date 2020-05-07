#pragma once
#include "Service.h"
#include <string>
using namespace std;


class UI {
private:
    Service service;
    void displayMenu();
    void uiAddPrajitura(string cmd);
    void uiShowAll();
    void uiShowById(string cmd);
    void uiUpdateById(string cmd);
    void uiDeleteById(string cmd);
    void mediaPreturilor();
//    void uiDeleteAtPos(string cmd);
    double getPriceByIng(string ing);

public:
    UI();
    UI(Service& service);
    void runUI();
};
