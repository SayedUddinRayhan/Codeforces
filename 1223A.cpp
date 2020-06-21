#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;
        if(n%2==1)cout<<"1\n";

        else if(n==2)cout<<"2\n";

        else cout<<"0\n";
    }
}
