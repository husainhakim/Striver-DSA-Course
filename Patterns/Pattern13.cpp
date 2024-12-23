#include <iostream>
using namespace std;
void printpattern(int n)
{
   int number=1;
    for (int i=0;i<n;i++)
    {
    for(int j=0;j<i;j++)
    {
        cout<<number;
        number++;
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