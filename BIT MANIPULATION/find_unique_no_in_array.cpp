#include<iostream>
using namespace std;

/*
XOR
0 0 0
0 1 1
1 0 1
1 1 0

properties of XOR-
n^n=0
0^n=n
*/

int unique(int arr[],int n)
{

    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}

int main()
{
    int arr[]={1,2,3,4,3,2,1};
    cout<<unique(arr,7)<<endl;

    return 0;
}