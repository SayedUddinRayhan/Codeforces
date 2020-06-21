#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if((a+b>c&&b+c>a&&a+c>b)||(a+b>d&&b+d>a&&a+d>b)||(b+c>d&&c+d>b&&b+d>c)||(a+c>d&&a+d>c&&c+d>a))
    {
        cout<<"TRIANGLE"<<endl;
    }
    else if((a+b==c||b+c==a||a+c==b)|| (a+b==d||b+d==a||a+d==b)||(b+c==d||c+d==b||b+d==c)||(a+c==d||a+d==c||c+d==a))
    {
        cout<<"SEGMENT"<<endl;
    }
    else
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}
