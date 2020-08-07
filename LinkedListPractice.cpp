#include <iostream>
#include <cstdlib>

using namespace std;

struct Node
{
    int data;
    struct Node*next;
};

typedef struct Node node;

node*head = NULL;

void insertData( int value )
{
    node*number;
    node*temp;

    if ( head == NULL )
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

int sizeOfLinkList()
{
    node *temp = head;
    int count = 0;
    while(temp!= NULL)
    {
        count = count+1;
        temp = temp->next;
    }
    return count;

}


void reverseLinkLst()
{
    int total = sizeOfLinkList();

    node *temp = head;

    while(total!= 0)
    {
        for(int i = 1; i<total; i++)
        {

            temp = temp->next;
        }

        cout<<temp->data<<endl;

        temp = head;


        total--;

    }


}



int main()
{
    insertData(10);
    insertData(20);
    insertData(30);
    insertData(40);
    insertData(50);

    //reverseLinkLst(head);
    reverseLinkLst();


}
