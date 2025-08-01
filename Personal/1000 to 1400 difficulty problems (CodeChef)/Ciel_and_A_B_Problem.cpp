#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B; cin>>A>>B;
    int C = A-B;
    string s = to_string(C);
    for(int i=0;i<(int)s.size();i++)
    {
        char original = s[i];
        for(char d='0'; d<='9'; d++)
        {
            if(d != original)
            {
                if(i==0 && d=='0') continue;
                s[i] = d;
                cout<<s<<"\n";
                return 0;
            }
        }
        s[i] = original;
    }
    return 0;
}
