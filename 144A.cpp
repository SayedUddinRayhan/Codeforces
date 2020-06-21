#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,a,max(0),min(101),locMax(0),locMin(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(max<a)
        {
            max=a;
            locMax=i;
        }

        if(min>=a)
        {
            min=a;
            locMin=i;
        }

    }

    if(locMax>locMin)cout<<locMax-0+(n-1)-(locMin+1)<<"\n";

    else cout<<locMax-0+(n-1)-locMin<<"\n";

}
