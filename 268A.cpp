#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    int a[n],b[n],c(0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])c++;
        }
    }
    cout<<c<<"\n";
}
