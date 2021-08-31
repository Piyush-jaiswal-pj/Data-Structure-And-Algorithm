#include <iostream>
using namespace std;
int main()
{
    int value, arr[60], i, pos;
    cout << "enter the value";
    cin >> value;
   
    for (i = 1; i <= value; i++)
    {
        cin >> arr[i];
    }
   
    cin >> pos;
        for (i = pos; i < value; i++)
        {
            arr[i]=arr[i + 1] ;
        }
        
        value = value - 1;

        for (i = 1; i <= value; i++)
    {
        cout << arr[i];
    }
}
    
