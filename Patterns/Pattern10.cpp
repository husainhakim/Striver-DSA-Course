#include <iostream>
using namespace std;
void printpattern(int n)
{   //Upper Triangle
    for (int i=1;i<=(n/2)+1;i++)
    {
   
        for (int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=(n/2);i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
   
}
int main()
{
    int n;

    cout<<"Enter the number of rows:"<<endl;
    cin>>n;
    
    printpattern(n);

    
    return 0;
}