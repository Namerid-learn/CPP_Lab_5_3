#include "lab.h"

#include <iostream>

using namespace std;

void function() {

    int numb;

    while (!(cin >> numb) || numb < 0 || cin.fail()) {
        cout << "Ошибка ввода" << endl;
        return;
    }

    if (numb == 0) {
        return;
    }

    if (numb % 2 != 0) {
        cout << numb << endl;
    }

    function();
}