/*

*               *
* *           * *
* * *       * * *
* * * *   * * * *
* * * * * * * * *
* * * * * * * * *
* * * *   * * * *
* * *       * * *
* *           * *
*               *



*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    n=(n%2==0)?n+1:n;
    int mid;
    mid = (n % 2 == 0) ? (n / 2) : (n / 2) + 1;


    for (int i = n / 2 + 1; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= mid - i + 1)
                cout << "* ";
            else if (j >= mid - 1 + i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << "\n";
    }


    for (int i = 1; i <= n / 2 + 1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= mid - i + 1)
                cout << "* ";
            else if (j >= mid - 1 + i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << "\n";
    }

    
    return 0;
}