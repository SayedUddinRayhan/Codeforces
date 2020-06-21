#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    string s[200],s1[200];

    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
    }

    for(int j=1;j<=m;j++)
    {
        cin>>s1[j];
    }

    int t,d;
    cin>>t;

    while(t--)
    {
        cin>>d;
        for(int i=1;i<=n;i++)
        {
            if((d%n)+n==i||(d%n)==i)cout<<s[i];
        }
        for(int j=1;j<=m;j++)
        {
            if((d%m)+m==j||(d%m)==j)cout<<s1[j]<<"\n";
        }
    }



}
