#ifndef LIST_H
#define LIST_H

#include <iostream>

struct slistEl
{
    char data;
    slistEl * next;
};

struct slist
{
    slistEl * head;
};


void init(slist *list);

void push_front(slist *, char);

void push_back(slist *, char);

slistEl * find(slist *, char);

void findDeleteEvery(slist *list, char a);

void findDelete(slist *, char);

void printl(slist *);

#endif
