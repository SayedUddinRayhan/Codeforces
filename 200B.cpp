#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cout.precision(12);
    cout<<fixed;

    int n;
    double sum(0);
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
        sum+=v[i];
    }

    cout<<sum/n;
}
