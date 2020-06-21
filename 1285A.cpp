#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,pos(0),neg(0);
    cin>>n;

    string s;
    cin>>s;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='R')pos++;

        else neg++;
    }
    cout<<pos-(-neg)+1<<"\n";

}
