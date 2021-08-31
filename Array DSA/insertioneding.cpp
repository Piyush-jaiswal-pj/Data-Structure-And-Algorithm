#include <iostream>

using namespace std;

int main()
{
   int value,i,arr[50],val;
   cout<<"Enter the total value of array";
   cin>>value;
    cout<<"Enter the value for array";
    for(i=0;i<value;i++)
    {
    cin>>arr[i];
    }
    cout<<"enter value for ending";
    cin>>val;
    arr[value]=val;
    value++;
    for(i =0;i<value;i++)
    {
    cout<<arr[i];
    }
    
    return 0;
}