#include<iostream>
using namespace std;

int decimalToBinary(int n)
{
    int ans=0;
    int base=1;
    while(base<=n)
    {
        base*=2;
    }
    base/=2;
    while(base>0)
    {
        int dig=n/base;
        ans=ans*10+dig;
        n=n-dig*base;
        base/=2;  
    }
    return ans;
}


int main()
{
    int n;
    n=1;
    cout<<decimalToBinary(2)<<endl;
    // cout<<2<<"\n";
    while(n<6)
    {
        cout<<decimalToBinary(2<<n)<<endl;
        // cout<<(2<<n)<<"\n";
        n++;
    }

    cout<<"-----------------------------\n";

    int m=1;
    // cout<<64<<"\n";
    cout<<decimalToBinary(64)<<"\n";
    while(m<=5)
    {
        // cout<<(64>>m)<<"\n";
        cout<<decimalToBinary(64>>m)<<"\n";
        m++;
    }
    
    return 0;
}
