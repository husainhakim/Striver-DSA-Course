#include <iostream>
using namespace std;
void printpattern2(int rows)
{
for (int i=1;i<=rows;i++)
{
    for (int j=1;j<=i;j++)
    {
        cout<<j;
    }
    cout<<endl;
}
}
int main()
{
int rows;
cout<<"Enter the number of rows:"<<endl;
cin>>rows;

printpattern2(rows);

 return 0;

}