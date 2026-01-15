#pragma once
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

struct Card {
    char name[100] = "";
    float money = 0;
    long number = 0;

    void createCard() {
        cout << "Input name: ";
        cin.getline(name, 100); //!!!!! enter
        number = rand()* 1000 + rand();
        money = 50;
        cout << "Opened: " << number << endl;
    }

    void showCard() {
        cout << "+++++++++++++++++++++++++++++++++++++\n";
        cout << "| Client: " << name << endl;
        cout << "| Number: " << number << endl;
        cout << "| Money:  " << money << "UAH.\n";
        cout << "+++++++++++++++++++++++++++++++++++++\n\n";
    }

};

