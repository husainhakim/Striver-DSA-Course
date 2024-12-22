#include <iostream>
using namespace std;
void printpattern3(int n)
{
for(int i = 0; i<n;i++)
{
    for(int j=0;j<n-i;j++)
    {
        cout<<j+1;
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