#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool fail(false);

    string s;

    for(int i=0;i<8;i++)
    {
        cin>>s;

        for(int j=1;j<s.length();j++)
        {
            if(s[j]==s[j-1])
            {
                fail=true;
            }
        }
    }

    cout<<(fail? "NO":"YES")<<endl;
}
