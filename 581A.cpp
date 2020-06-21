#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int r,b,dif;
    cin>>r>>b;

    int t=min(r,b);
    int t1=max(r,b);

    dif=t1-t;

    cout<<t<<" "<<dif/2<<"\n";
}
