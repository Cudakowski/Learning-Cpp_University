#include "List.h"

void init(slist * list)
{
    list->head=nullptr;
}

void push_front(slist *list, char a)
{
    slistEl *new_node= new slistEl;
    new_node->data=a;
    new_node->next=list->head;
    list->head=new_node;
}

void push_back(slist *list, char a)
{
    slistEl *new_node= new slistEl;
    new_node->data=a;
    new_node->next=nullptr;

    if (list->head==nullptr)
    {
        list->head=new_node;
        return;
    }
    

    slistEl *temp=list->head;
    while (temp->next!=nullptr)
    {
        temp=temp->next;
    }

    temp->next=new_node;
}

slistEl * find(slist *list, char a)
{
    slistEl *temp=list->head;
    while (temp!=nullptr)
    {
        if(temp->data==a)
        {
            return temp;
        }
        temp=temp->next;
    }
    return nullptr;

}

void printl(slist *list)
{
    std::cout<<"Moja lista: <";
    slistEl *temp=list->head;
    while (temp!=nullptr)
    {
        std::cout<<temp->data;
        temp=temp->next;
    }
    std::cout<<">\n";
}


void findDelete(slist *list, char a)
{
    slistEl *tempnn;
    
    if(list->head==nullptr)
    {
        std::cout << a << "not found\n";
        return;
    }
    
    
    if (list->head->data==a)
    {
        tempnn=list->head->next;
        delete list->head;
        list->head=tempnn;
        return;
    }
    

    slistEl *temp=list->head;
    
    while (temp->next!=nullptr)
    {
        if(temp->next->data==a)
        {
            tempnn=temp->next->next;
            delete temp->next;
            temp->next=tempnn;
            return;
        }
        temp=temp->next;
    }
    std::cout << a << " not found\n";
    return;
}

void findDeleteEvery(slist *list, char a)
{
    slistEl *tempnn;
    
    if(list->head==nullptr)
    {
        std::cout << "empty list\n";
        return;
    }
    
    
    while(list->head->data==a)
    {
        tempnn=list->head->next;
        delete list->head;
        list->head=tempnn;
    }
    

    slistEl *temp=list->head;
    
    while (temp->next!=nullptr)
    {
        if(temp->next->data==a)
        {
            tempnn=temp->next->next;
            delete temp->next;
            temp->next=tempnn;
        }
        else
        {
            temp=temp->next;
        }
    }
}