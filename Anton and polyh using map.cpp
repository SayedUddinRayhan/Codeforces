#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>m;

    m["Icosahedron"]=20;
    m["Dodecahedron"]=12;
    m["Octahedron"]=8;
    m["Cube"]=6;
    m["Tetrahedron"]=4;

    int n,sum=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        sum+=m[s];
    }
    cout<<sum<<"\n";
}
