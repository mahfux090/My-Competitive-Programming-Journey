#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,x;
    cin>>a>>b>>c;
    map<int,int>m;
    for(int i=0;i<a+b+c;i++){
        cin>>x;
        m[x]++;
    }
    vector<int>v;
    for(auto i:m){
        if(i.second>=2)v.push_back(i.first);
    }
    cout<<v.size()<<'\n';
    for(auto i:v)cout<<i<<'\n';
}
//Solved By Mahfuz Uddin
