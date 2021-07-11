/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/


#include<iostream>
using namespace std;

int main()
{

int n;
cin>>n;
int num=1;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        
        cout<<num<<" ";
        num=(num+1)%2;
    }
    cout<<"\n";
}
    return 0;
}


/*

#include<iostream>
using namespace std;

int main()
{

int n;
cin>>n;

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        if((i+j)%2==0)
        cout<<"1 ";
        else
        cout<<"0 ";
    }
    cout<<"\n";
}
    return 0;
}

*/