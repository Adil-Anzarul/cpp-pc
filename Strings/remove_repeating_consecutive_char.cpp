#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
/*
int main()
{
    string s="asaaaaaassssdssssssss";
   int n=s.size();
   
   char ans[100];
   ans[0]=s[0];
   int cnt=1;

   for(int i=1;i<n;i++)
   {
       if(s[i] != s[i-1])
        {
        ans[cnt]=s[i];
        cnt++;
        }
   }
    cout<<ans<<endl;
    
    return 0;
}
*/

using namespace std;

int main()
{
    string s = "asaaaaaassssdssssssss";
    int n = s.size();

    string ans = "";
    ans.push_back(s[0]);
    int cnt = 1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            ans.push_back(s[i]);
            cnt++;
        }
    }
    cout << ans << endl;

    return 0;
}