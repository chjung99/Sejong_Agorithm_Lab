#include <bits/stdc++.h>
#include <iostream>

using namespace std;

long long arr[10001];
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int n,k;
    long long lo,hi,mid;
    long long ans;
    
    cin>>k>>n;
    
    for(int i=0;i<k;i++){
        cin>>arr[i];
        if(i==0)hi=arr[i];
        else {
            if(hi<=arr[i])hi=arr[i];
        }
    }
    lo=1;
    hi++;
    while(lo +1 < hi){
        
        mid=(lo+hi)/2;
        
        int cnt=0;
        for(int i=0;i<k;i++)cnt+=arr[i]/mid;
        if(cnt>=n){
            lo=mid;
        }
        else hi=mid;
    }
    cout<<lo;
    return 0;
}
