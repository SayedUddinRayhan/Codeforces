#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;

    string s;
    while(t--)
    {
        cin>>s;

        reverse(s.begin(),s.end());
        for(int i=0;i<1;i++)
        {
            if(s[i]=='o')cout<<"FILIPINO\n";

            else if(s[i]=='u')cout<<"JAPANESE\n";

            else cout<<"KOREAN\n";
        }
    }
}
