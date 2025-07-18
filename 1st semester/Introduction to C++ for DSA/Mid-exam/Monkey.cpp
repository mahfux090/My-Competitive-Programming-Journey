#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100001];
    
    while (cin.getline(s,100001))
    {
        char a[100001];
        int len= strlen(s);
        int in=0;
        for (int i = 0; i < len ; i++)
        {
            if (s[i]>='a' && s[i]<='z')
            {
                a[in++]=s[i];
            }
        }
        
        sort(a,a+in);
        for (int i = 0; i < in; i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}