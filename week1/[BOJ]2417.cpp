#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    unsigned long long n,lo,hi,mid;
    
    cin>>n;
    
    lo=0;
    hi=(unsigned long long)1<<63;
    hi--;
    while(lo<hi){
        mid=(lo+hi)/2;
        if(mid*mid<n)lo=mid+1;
        else hi=mid;
    }
    cout<<hi;
    return 0;
}
