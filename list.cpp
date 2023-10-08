//
// Created by reinhardsitumeang on 06/10/2023.
//
#include <iostream>
#include "list.h"
using namespace std;

address allocate(infotype x) {
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;

    return p;
}

void createList(List &L) {
    first(L) = NULL;
}

void insertFirst(List &L, address P) {
    next(P) = first(L);
    first(L) = P;
}

void printInfo(List L) {
    address p = first(L);
    while (p != NULL) {
        cout << info(p) << ", ";
        p = next(p);
    }
    cout << endl;
}