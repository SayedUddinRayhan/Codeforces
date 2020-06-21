#include<bits/stdc++.h>
using namespace std;

int primeCk(int z);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,a,b;
    cin>>n;

    a=4;
    b=n-4;

    for(int i=1;i<=n;i++)
    {
        int x=primeCk(a),y=primeCk(b);

        if(x==1&&y==1)
        {
            cout<<a<<" "<<b<<"\n";
            break;
        }
        a++;
        b--;
    }


}
int primeCk(int p)
{

    for(int i=2;i<p;i++)
    {
        if(p%i==0)
        {
            return 1;
        }
    }
    return 0;
}

