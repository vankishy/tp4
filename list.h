//
// Created by reinhardsitumeang on 06/10/2023.
//

#ifndef TP4_LIST_H
#define TP4_LIST_H
#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
using namespace std;

typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

address allocate(infotype x);
void createList(List &L);
void insertFirst(List &L, address P);
void printInfo(List L);


#endif //TP4_LIST_H
