#include <iostream>
using namespace std;
int main()//linear or squential search
{
    int input[10],search,n;
    cout<<"Enter the total number for creating a list";
    cin>>n;
    cout<<"Enter the number for your list";
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    cout<<"Enter the number which u want to search";
    cin>>search;
    for(int i=0;i<n;i++)
    {
        if(input[i]==search)
        {
            cout<<"The number is found at"<<++i;
           break;
        }
     else if(i==n)
        {
          cout<<"The entered number is not found";
          
        }
        
    }
    return 0;
}