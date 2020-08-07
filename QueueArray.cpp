#include <iostream>
#include <stdlib.h>
using namespace std;
#define MAX 5

int myqueue[MAX];
int frontIND = 0;
int rear = 0;
void enqueue(int value)
{
    if ( rear < MAX)
    {
        myqueue[rear++] = value;
    }
    else
    {
        cout<<"Queue is full!"<<endl;
    }

}


int dequeue()
{
    int data;

    if(frontIND<rear)
    {
        data = myqueue[frontIND];
        frontIND++;
        return data;
    }
    else
    {
        cout<<"Queue is empty!"<<endl;
        return 0;
    }



}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;

    return 0;
}



