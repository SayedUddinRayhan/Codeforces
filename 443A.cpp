#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    char ch;

    set<char>st;

    while(cin>>ch)
    {
        if(ch>='a'&&ch<='z')
        {
            st.insert(ch);
        }
        if(ch=='}')break;
    }
    cout<<st.size()<<"\n";

}
