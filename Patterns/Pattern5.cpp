#include <iostream>
using namespace std;
void printpattern3(int n)
{
for(int i = 0; i<n;i++)
{
    for(int j=n-i;j>0;j--)
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
printpattern3(n);
    
 return 0;
}