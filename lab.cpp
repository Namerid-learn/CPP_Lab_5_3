#include "lab.h"

#include <iostream>

using namespace std;

void function() {

    char c;

    c = cin.get();

    if (c == '0') {
        return;
    }

    while (cin.fail() || (isdigit(c) == false)) {
        cout << "Ошибка ввода" << endl;
        return;
    }

    if ((int)c % 2 != 0) {
        cout << c << endl;
    }

    function();
}