#include <bits/stdc++.h>
#include <iostream>

using namespace std;

struct cmp{
    bool operator()(string a,string b)const{
        if(a.size()==b.size()){
            return a<b;
        }
        else{
            return a.size()<b.size();
        }
    }
};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;
    set<string,cmp> s;
    cin>>n;
    string tmp;
    for(int i=0;i<n;i++){
        cin>>tmp;
        s.insert(tmp);
    }
    
    for(auto &u:s)cout<<u<<'\n';
    return 0;
}
