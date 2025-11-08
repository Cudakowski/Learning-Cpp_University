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






void clear(slist * list)
{
    slistEl *temp1=list->head;
    slistEl *temp2;
    while (temp1!=nullptr)
    {
        temp2=temp1->next;
        delete temp1;
        temp1=temp2;
    }

    list->head=nullptr;
}

