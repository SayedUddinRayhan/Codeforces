#include<bits/stdc++.h.>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b,c=0;
    cin>>a>>b;

    while(a<=b)
    {
        a=a*3;
        b=b*2;
        c++;
    }

    cout<<c<<"\n";
}
