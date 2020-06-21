#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,p,q,c(0);
    cin>>n;

    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>p>>q;

        v[i]=q-p;
        if(v[i]>=2)c++;
    }

    cout<<c<<"\n";

}
