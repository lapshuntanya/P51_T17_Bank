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
    int menu = 1;
    char tmp_name[100] = "";
    int tmp_money = 0;
    long tmp_number = 0;

 // ======   1 Створюємо масив із файлу ===============
    loadArray(arr, NCards);


    while (menu != 0) {
        cout << "==================================\n";
        cout << "==================================\n";
        cout << "\t 0. Exit and save\n";
        cout << "\t 1. Show list of clients\n";
        cout << "\t 2. Add a new client\n";
        cout << "\t 3. Sort by money\n";
        cout << "==================================\n";
        cout << "==================================\n";
        cout << ">>>> ";
        cin >> menu;


    }



    return 0;
}