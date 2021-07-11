#include<iostream>
#include<string>
using namespace std;

int binaryToDecimal(int n)
{
    int ans=0;
    int base=1;
    while(n)
    {
        ans+=(base*(n%10));
        base*=2;
        n/=10;
    }
    return ans;
}

int octalToDecimal(int n)
{
    int ans=0;
    int base=1;
    while(n)
    {
        ans+=(base*(n%10));
        base*=8;
        n/=10;
    }
    return ans;
}

int hexadecimalToDecimal(string n)
{
int ans=0;
int base =1;

for(int i=n.length()-1;i>=0;i--)
{
    if(n[i]>='0'  && n[i]<='9')
    {
        ans=ans+(n[i]-'0')*base;
    }
    else
    {
        ans+=(n[i]-'A'+10)*base;
    }
    base*=16;
}
return ans;
}

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

int decimalToOctal(int n)
{
    int ans=0;
    int base=1;
    while(base<=n)
    {
        base*=8;
    }
    base/=8;
    while(base>0)
    {
        int dig=n/base;
        ans=ans*10+dig;
        n=n-dig*base;
        base/=8;  
    }
    return ans;
}

string decimalToHexadecimal(int n)
{
    string ans="";
    int base=1;
    while(base<=n)
    {
        base*=16;
    }
    base/=16;
    while(base>0)
    {
        int dig=n/base;
        if(dig>=0 &&dig<=9)
        {
        ans=ans+to_string(dig);
        }
        else
        {
            char a='A'+dig-10;
        ans.push_back(a);
        }
        n=n-dig*base;
        base/=16;  
    }
    return ans;
}


int main()
{
    // string n;
    int n;
    cin>>n;
    cout<<decimalToHexadecimal(n);
    return 0;
}