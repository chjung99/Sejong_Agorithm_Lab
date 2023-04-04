#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int visited[10001];
int main()
{
    vector<int> v;
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int n,tmp;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>tmp;
        visited[tmp]++;
    }
    
    for(int i=1;i<=10000;i++){
        for(int j=0;j<visited[i];j++){
            cout<<i<<"\n";
        }
    }
    return 0;
}
