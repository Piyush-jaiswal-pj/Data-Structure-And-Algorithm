#include <iostream>
using namespace std;
int main()
{
    int value,arr[60],i,element,pos;
    cout<<"enter the value";
    cin>>value;
    for ( i = 1; i <=value; i++)
    {
        cin>>arr[i];
    } 
    cout<<"enter position of deletion";
    cin>>pos;
   
    for(i=pos;i<value-1;i++)
    {
        arr[i]=arr[i+i];
    }
   value=value-1;
     for ( i = 1; i <=value; i++)
    {
        cout<<arr[i];
    }
}