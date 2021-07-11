#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int d=a[1]-a[0];
    int length=2;
    int mx=2;

    for(int i=2;i<n;i++)
    {
        if(d==a[i]-a[i-1])
        {
            length+=1;
            
        }
        else
        {
            d=a[i]-a[i-1];
            length=2;
            
        }
        mx=max(mx,length);
    }

    cout<<mx<<endl;
    
    return 0;
}
