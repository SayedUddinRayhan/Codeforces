#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string m,n;
    cin>>m>>n;

    for(int i=0;i<m.length();i++)
    {
        if(m[i]==n[i])cout<<"0";
        else cout<<"1";
    }
    cout<<"\n";
}
