#include "Card.h"
#include "ArrayTemplate.h"

int main() {
   /* Card Tetiana;// name = "", money = 0,  number =0
    Tetiana.createCard();

    Tetiana.showCard();


    FILE* fp = nullptr;
    //fopen_s(&fp, "bank.txt", "w"); // VS
    fp = fopen( "bank.txt", "w"); // Online, Xcode, Clion
    if (fp!= nullptr) {
        Tetiana.saveToTextFile(fp);
        fclose(fp);
        //system("start bank.txt"); Windows
        cout << "Saved!" << endl;
    }
    //==================================

    FILE* fp = nullptr;
    //fopen_s(&fp, "bank.txt", "r"); // VS
    fp = fopen( "bank.txt", "r"); // Online, Xcode, Clion
    if (fp!= nullptr) {
        Tetiana.loadFromTextFile(fp);
        fclose(fp);
        //system("start bank.txt"); Windows
        cout << "Loaded!" << endl;
    }

    Tetiana.showCard();
    */

    Card* arr = nullptr; //дин масив карток
    int NCards = 0; // розмір масиву = кількість карток в банку

    //додаткові змінні
    int menu = 0;
    char tmp_name[100] = "";
    int tmp_money = 0;
    long tmp_number = 0;






    return 0;
}