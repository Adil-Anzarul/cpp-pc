/* 
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5

*/


#include<iostream>
using namespace std;

int main()
{

int n;
cin>>n;

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n-i;j++)
    {
        cout<<"  ";
    }
    int k=i;
    for(int j=1;j<=i;j++)
    {
        cout<<k<<" ";
        k--;
    }
    k=2;
    for(int j=1;j<i;j++)
    {
        cout<<k<<" ";
        k++;
    }
    cout<<"\n";
}
    return 0;
}