#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,c(0);
    long long x,y;
    cin>>n>>x;
    char ch;
    long long sum=x;
    for(int i=0;i<n;i++)
    {
        cin>>ch>>y;
        if(ch=='-')
        {
            if(sum>=y)sum-=y;

            else c++;
        }
        if(ch=='+')
        {
            sum+=y;
        }
    }
    cout<<sum<<" "<<c<<"\n";
}
