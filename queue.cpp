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

void enqueue(int value)
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
        number->next = (node*)malloc(sizeof(node));
        number = number->next;
        number->next = NULL;
        number->data = value;
    }

}

int dequeue()
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
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;

    return 0;
}


