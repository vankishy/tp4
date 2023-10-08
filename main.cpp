#include <iostream>
#include "list.h"
using namespace std;

int main() {
    List Lmain{};
    address Pt;
    int Number;

    createList(Lmain);

    cout << "Masukkan Angka digit pertama : " << endl;
    cin >> Number;

    Pt = allocate(Number);
    insertFirst(Lmain, Pt);
    printInfo(Lmain);

    cout << "Masukkan Angka digit kedua : " << endl;
    cin >> Number;

    Pt = allocate(Number);
    insertFirst(Lmain, Pt);
    printInfo(Lmain);

    cout << "Masukkan Angka digit ketiga : " << endl;
    cin >> Number;

    Pt = allocate(Number);
    insertFirst(Lmain, Pt);
    printInfo(Lmain);

    return 0;
}
