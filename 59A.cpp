#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;

    cin>>s;

    int up=count_if(s.begin(),s.end(),[](char ch){return isupper(ch);});
    int lw=count_if(s.begin(),s.end(),[](char ch1){return islower(ch1);});

    if(lw>=up)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<"\n";
    }

    if(up>lw)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s<<"\n";
    }
}
