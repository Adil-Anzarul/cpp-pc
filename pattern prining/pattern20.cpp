/*

*              *
* *          * *
*   *      *   *
*     *  *     *
*     *  *     *
*   *      *   *
* *          * *
*              *



*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for(int i=0;i<=n;i++)
    {
        int space =2*n-2*i;
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            cout<<"*";
            else cout<<" ";
        }
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
    
        for(int i=n;i>=1;i--)
    {
        int space =2*n-2*i;
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            cout<<"*";
            else cout<<" ";
        }
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}