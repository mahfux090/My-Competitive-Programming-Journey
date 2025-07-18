#include <bits/stdc++.h>
using namespace std;
int main()
{
      int n;
      cin>>n;
      int solve=0;
      while(n--)
      {
            int a[3];
            for(int i=0;i<3;i++)
            {
                  cin>>a[i];
            }
            int count=0;
            for(int i=0; i<3;i++)
            {
                  if(a[i]==1)
                  {
                        count++;
                  }
            }
            if(count>=2)
            {
                  solve++;
            }
      }
      cout<<solve;
}
