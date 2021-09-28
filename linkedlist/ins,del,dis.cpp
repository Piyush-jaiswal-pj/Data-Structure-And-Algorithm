#include <iostream>
using namespace std;
int insbeg();
int main ()
{
    int choice;
    cout<<"Enter Your Choice";
    cout<<"Press 1 for insertion";
    cin>>choice;
    switch(choice)
    {
        case 1: 
        insbeg();
        break;
    }
}
int insbeg()
{
    int value;
    struct node{
        int data;
        struct node*next;
        
    }

}
