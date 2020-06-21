#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m,c,ms(0),cs(0);
    cin>>n;

    while(n--)
    {
        cin>>m>>c;

        if(m>c)ms++;

        if(c>m)cs++;
    }

    if(ms>cs)cout<<"Mishka\n";

    else if(cs>ms)cout<<"Chris\n";

    else cout<<"Friendship is magic!^^\n";
}
