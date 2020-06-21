#include<bits/stdc++.h>
using namespace std;

#define pi acos(-1.0)

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    double n,r;
    cin>>n>>r;

    cout<<fixed<<setprecision(7)<<(r*sin(pi/n))/(1-sin(pi/n))<<"\n";
}
