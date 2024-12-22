#include <iostream>
using namespace std;
void printpattern1(int rows,int columns)
{
    for(int i =0;i<rows;i++)
    {
        for (int j=0 ;j<columns;j++)
        {
            cout<<"*";

        }
cout<<endl;
    }
}

int main()
{
    int rows,columns;
    cout<<"Enter the number of rows and columns:"<<endl;
    cin>>rows>>columns;

  printpattern1(rows,columns);
  return 0;
}