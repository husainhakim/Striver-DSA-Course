#include <iostream>
using namespace std;
void printpattern(int n)
{
    for (int i=n;i>0;i--)
    {
        char character='A';
    for(int j=0;j<i;j++)
    {
        cout<<character;
        character++;
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