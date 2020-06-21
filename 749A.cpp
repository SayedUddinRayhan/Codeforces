#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    cout<<n/2<<"\n";

    if(n%2==0)
    {
        n=n/2;
        while(n--)
        {
            cout<<"2 ";
        }
    }
    else
    {
        n=(n/2)-1;
        while(n--)
        {
            cout<<"2 ";
        }
        cout<<"3 ";
    }

    cout<<"\n";
}
