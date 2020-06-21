#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,flag(0);
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int temp(0);
        temp=(i*(i+1))/2;
        if(temp==n)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)cout<<"YES\n";

    else cout<<"NO\n";
}
