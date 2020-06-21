#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int>v;
    int n,m;
    cin>>n;
    while(n--)
    {
        cin>>m;
        v.push_back(m);
    }
    int flag=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==1)flag=1;
    }
    if(flag==1)cout<<"HARD\n";

    else cout<<"EASY\n";


}
