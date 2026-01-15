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

    void saveToTextFile(FILE* fp) {
        fprintf(fp, "\n%s\n%f %l", name, money, number);
        /*
         Tetiana Perederii
         50 12345678
         */
    }

    void loadFromTextFile(FILE* fp) {
       // fscanf_s(fp, "\n"); // VS
        fscanf(fp, "\n"); // Online Xcode, Clion
        fgets(name, 100, fp);
        //fscanf_s(fp, "%f %l", &money, &number); //VS
        fscanf(fp, "%f %l", &money, &number); // Online Xcode, Clion
    }

};

