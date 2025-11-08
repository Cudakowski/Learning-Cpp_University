#ifndef LIST_H
#define LIST_H

#include <iostream>

struct slistEl {
    char data;
    slistEl *next;
};

struct slist {
    slistEl *head;
};

void init(slist * list);
void push_front(slist * list, char letter);
void push_back(slist * list, char letter);
slistEl* find(slist * list, char letter);
void printl(slist * list);
void clear(slist * list);

#endif