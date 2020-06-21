#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,res(0);

    cin>>n;
    while(n!=0)
    {
       if(n>=100)
       {
           res+=(n/100);
           n=n%100;
       }

       if(n>=20)
       {
           res+=(n/20);
           n=n%20;
       }

       if(n>=10)
       {
           res+=(n/10);
           n=n%10;
       }

       if(n>=5)
       {
           res+=(n/5);
           n=n%5;
       }

       else
       {
           res+=(n/1);
           n=n%1;
       }
    }

    cout<<res<<"\n";
}
