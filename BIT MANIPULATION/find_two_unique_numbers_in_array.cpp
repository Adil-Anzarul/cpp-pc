#include<iostream>
using namespace std;

int getBit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}

void unique(int arr[],int n)
{

    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];
    }
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit !=1)
    {
        setbit=xorsum & 1; //to get last bit
        pos++;
        xorsum=xorsum>>1;
    }
    int newxor=0;
    for(int i=0;i<n;i++)
    {
        if(getBit(arr[i],pos-1))
        {
            newxor=newxor^arr[i];
        }
    }

    cout<<newxor<<endl;
    cout<<(newxor^tempxor)<<endl;
}

int main()
{
    int arr[]={1,2,3,5,3,2,1,7};
    unique(arr,8);

    return 0;
}