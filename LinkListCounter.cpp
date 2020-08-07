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
        temp = (node*)malloc(sizeof(node));
        temp->data = value;
        temp->next = head;
        head = temp;
    }

}

int main()
{
    insertData(10);
    insertData(20);
    insertData(30);
    insertData(40);
    insertData(50);

    int count = 0;

    while(head!= NULL)
    {
        cout<<head->data<<endl;


        head = head->next;

        count++;
    }

    cout<<count<<endl;







    return 0;
}
