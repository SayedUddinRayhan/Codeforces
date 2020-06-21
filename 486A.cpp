#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n,sum(0),sum1(0);
    cin>>n;

    if(n%2==0)n/=2;

    else n=(-n-1)/2;

    cout<<n<<"\n";
}
