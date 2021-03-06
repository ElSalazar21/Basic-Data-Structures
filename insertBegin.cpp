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

void insertData(int value)
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

int main()
{
    insertData(10);
    insertData(20);
    insertData(30);
    insertData(40);

    while(head!= NULL)
    {
        cout<<head->data<<endl;

        head = head->next;
    }
    return 0;
}


