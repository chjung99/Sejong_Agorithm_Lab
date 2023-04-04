#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int main()
{
 
    cin.tie(0);
    ios::sync_with_stdio(0);
 
    int n,m,tmp;
    set<int> s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        s.insert(tmp);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>tmp;
        auto it=s.find(tmp);
        if(it!=s.end()){
            cout<<1<<"\n";
        }
        else{
            cout<<0<<"\n";
        }
    }
    return 0;
}
