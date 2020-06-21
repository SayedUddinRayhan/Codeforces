#include<bits./stdc++.h>
using namespace std;

long LONG_MAX n,k;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        vector<__INT64_MAX__>v(n+k);

        for(__INT64_MAX__ j=1;j<v.size();j++)
        {
            if(j%n!=0)
            {
                v[j]=j;
            }
        }

        sort(v.begin(),v.end());
        remove(v.begin(),v.end(),0);
        cout<<v.at(k-1)<<"\n";
    }

}

