#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t,a,b,r,r1;

    cin>>t;
    while(t--)
    {
        cin>>a>>b;

        if(a<b)
        {
            r=b-a;
            if(r%2==0)cout<<"2\n";
            else cout<<"1\n";
        }
        else if(a==b)cout<<"0\n";

        else
        {
            r=a-b;
            if(r%2==0)cout<<"1\n";
            else cout<<"2\n";
        }
    }
}
