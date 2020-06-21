#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m,n,p,c(0),c1(0);
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        cin>>p;
        if(p<=m)c++;
        else c1+=2;
    }
    cout<<c+c1<<"\n";
}
