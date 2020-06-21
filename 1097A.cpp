#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin>>s;

    string s1,s2,s3,s4,s5;
    cin>>s1>>s2>>s3>>s4>>s5;

    int flag(0);

    for(int i=0;i<2;i++)
    {
        if(s[i]==s1[i]||s[i]==s2[i]||s[i]==s3[i]||s[i]==s4[i]||s[i]==s5[i])flag=1;
    }

    if(flag==1)cout<<"YES\n";

    else cout<<"NO\n";
}
