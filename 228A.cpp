#include<bits/stdc++.h>
using namespace std;
__int64 s1,s2,s3,s4;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int c(0),c1(0),c2(0);
    cin>>s1>>s2>>s3>>s4;

    if(s1==s2||s1==s3||s1==s4)c++;
    if(s2==s3||s2==s4)c1++;
    if(s3==s4)c2++;

    cout<<c+c1+c2<<"\n";
}
