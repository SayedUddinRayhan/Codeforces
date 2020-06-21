#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t,h,m,res;
    cin>>t;

    while(t--)
    {
        cin>>h>>m;
        cout<<1440-((h*60)+m)<<"\n";
    }
}
