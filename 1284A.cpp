#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s[100],s1[100];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
    }

    int t,m;
    cin>>t;
    while(t--)
    {
        cin>>m;
        for(int i=1;i<=n;i++)
        {
            if(m%n==i||(m%n)+n==i)cout<<s[i];

        }
    }
}
