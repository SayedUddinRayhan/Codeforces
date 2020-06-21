#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    for(int i=0;i<n-1;i++)
    {
        if(i%2==0)cout<<"I hate that ";

        else cout<<"I love that ";
    }

    if(n%2==0)cout<<"I love it\n";

    else cout<<"I hate it\n";
}
