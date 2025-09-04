#include<bits/stdc++.h>
using namespace std;

int calc(string s){
    int n = s.size();
    int time = 2; 
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]) time+=1;
        else time+=2;
    }
    return time;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string best="";
        int best_time=-1;
        for(int pos=0;pos<=s.size();pos++){
            for(char c='a';c<='z';c++){
                string temp = s.substr(0,pos) + c + s.substr(pos);
                int cur = calc(temp);
                if(cur > best_time){
                    best_time = cur;
                    best = temp;
                }
            }
        }
        cout<<best<<"\n";
    }
}
