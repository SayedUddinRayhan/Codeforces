#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,c(0),c1(0);
    cin>>n;

    vector<string>v(n);
    string con;

    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
        con+=v[i];
    }

    for(int i=0;i<con.length();i++)
    {
        if(con[i]==con[i+1])c++;

    }

    cout<<c+1<<"\n";

}
