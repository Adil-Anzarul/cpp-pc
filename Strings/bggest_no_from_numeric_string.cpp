#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s="241157996314885475458963217489897545";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
    
    return 0;
}