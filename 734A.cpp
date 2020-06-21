#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<char>v;
    int n,a(0),d(0);
    cin>>n;
    char ch;

    while(n--)
    {
        cin>>ch;
        v.push_back(ch);
    }

    for(int i=0;i<v.size();i++)
    {
        if(v[i]=='A')a++;

        if(v[i]=='D')d++;
    }
    if(a>d)cout<<"Anton\n";
    else if(d>a)cout<<"Danik\n";
    else cout<<"Friendship\n";

}
