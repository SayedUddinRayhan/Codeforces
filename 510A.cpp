#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int r,c;
    cin>>r>>c;

    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if(i%2!=0)cout<<"#";
            else
            {

                int q(0);
                q=i/2;
                if(q%2!=0)
                {
                    if(j==c)
                    {
                        cout<<"#";
                    }
                }
                else
                {
                    if(j==1)
                    {
                        cout<<"#";
                    }
                }
                if(j<c)cout<<".";
            }
        }
        cout<<"\n";
    }
}
