#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s,s1;
    cin>>s>>s1;

    reverse(s.begin(),s.end());

    if(s==s1)cout<<"YES\n";

    else cout<<"NO\n";
}
