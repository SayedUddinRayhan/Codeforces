#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,p;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>p;
        arr[p]=i;
    }

    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
