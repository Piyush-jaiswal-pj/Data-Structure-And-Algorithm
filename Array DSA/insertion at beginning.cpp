//insertion  at begining ending and at any point

#include <iostream>

using namespace std;

int main()
{
   int value,i,arr[50];
   cout<<"Enter the total value of array";
   cin>>value;
    cout<<"Enter the value for array";
    for(i=0;i<value;i++)
    {
    cin>>arr[i];
    }
    cout<<"for beginning";
    int val;
    cin>>val;
    for(i=value;i>=0;i--)
    {
    arr[i+1]=arr[i];  
    }
    arr[0]=val;
    value++;
    for(i =0;i<value;i++)
    {
    cout<<arr[i];
    }
    
    return 0;
   
}
