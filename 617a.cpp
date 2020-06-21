#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    if(n>=5)
    {
        if(n%5==0)cout<<n/5<<"\n";

        else cout<<n/5+1<<"\n";
    }
    else cout<<"1\n";
}
