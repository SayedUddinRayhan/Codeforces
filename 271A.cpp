#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,a1,a2,a3,a4,b,c,d;
    cin>>n;

    while(1)
    {
        n++;
        a1=n%10;
        b=n/10;
        a2=b%10;
        c=b/10;
        a3=c%10;
        d=c/10;
        a4=d%10;

        if(a1!=a2&&a1!=a3&&a1!=a4&&a2!=a3&&a2!=a4&&a3!=a4)break;
    }
    cout<<n;

}
