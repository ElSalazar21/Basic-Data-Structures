#include <iostream>
#include <stdlib.h>
using namespace std;


struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node node;

node *head = NULL;

void push(int value)
{
    node *number;
    node *temp;

    if(head == NULL)
    {
        number = (node*)malloc(sizeof(node));
        number->data = value;
        number->next = NULL;
        head = number;
    }
    else
    {
        temp = (node*)malloc(sizeof(node));
        temp->data = value;
        temp->next = head;
        head = temp;
    }

}

int pop()
{
    if(head != NULL)
    {
        int num = head->data;
        head = head->next;
        return num;
    }
    else
    {
        cout<<"List is empty"<<endl;
        return 0;
    }

}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);

    cout<<pop()<<endl;
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    cout<<pop()<<endl;


    return 0;
}



