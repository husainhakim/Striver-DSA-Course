#include <iostream>
using namespace std;
void printpattern3(int n)
{
for(int i = 1; i<=n;i++)
{
    for (int j=0;j<i;j++)
    {
        cout<<j;
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