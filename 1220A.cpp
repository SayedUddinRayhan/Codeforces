#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,c(0),c1(0);
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='z')c++;

        if(s[i]=='n')c1++;
    }

    while(c1!=0)
    {
        cout<<"1 ";
        c1--;
    }
    while(c!=0)
    {
        cout<<"0 ";
        c--;
    }

}
