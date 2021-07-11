/*

Pascal's Triangle---
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

*/

#include<iostream>
using namespace std;

int fact(int n)
{
    int product =1;
    for(int i=1;i<=n;i++)
    product=product*i;
    return product;
}

int nCr(int n,int r)
{
    int result=fact(n)/(fact(n-r)*fact(r));
    return result;
}


int main()
{

    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<nCr(i,j)<<" ";
            
        }
        cout<<"\n";
    }
  
    

    return 0;
}