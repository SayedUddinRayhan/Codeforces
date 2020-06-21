#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,sum=0;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        if(s=="Icosahedron")sum+=20;
        if(s=="Dodecahedron")sum+=12;
        if(s=="Octahedron")sum+=8;
        if(s=="Cube")sum+=6;
        if(s=="Tetrahedron")sum+=4;
    }

    cout<<sum<<"\n";
}
