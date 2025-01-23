#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    int dp0[50], dp1[50];

    dp0[0] = 1;
    dp1[0] = 0;
    dp0[1] = 0;
    dp1[1] = 1;
    dp0[2] = 1;
    dp1[2] = 1;

    for(int i=3; i<=40; i++) {
        dp0[i] = dp0[i-1] + dp0[i-2];
        dp1[i] = dp1[i-1] + dp1[i-2];
    }

    while(t--) {
        int n; cin>>n;
        cout<<dp0[n]<<" "<<dp1[n]<<'\n';

    }
}