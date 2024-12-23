#include <iostream>
using namespace std;
void printpattern(int n)
{
    for (int i=0;i<n;i++)
{
    //Space
    for(int j=0;j< n-i-1;j++)
    {
        cout<<" ";
    }
    //Star
    for(int j=0;j<2*i+1;j++)
    {
        cout<<"*";
    }
     for(int j=0;j< n-i-1;j++)
    {
        cout<<" ";
    }
    //Space
    cout<<endl;
}

for (int i=0;i<n;i++)
{
    //Space
    for (int j=0;j<i;j++)
    {
        cout<<" ";
    }

//Stars
for(int j=0;j<2*(n-i)-1;j++)
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