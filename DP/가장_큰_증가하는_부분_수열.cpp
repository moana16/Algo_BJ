#include <bits/stdc++.h>
using namespace std;

int arr[1001];
long long dp[1001];

int main() {
    int n; cin>>n;
    for(int i=1; i<=n; i++) {
        cin>>arr[i];
        dp[i] = arr[i];

    }
    for(int i=2; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if(arr[i] > arr[j]) {
                dp[i] = max(dp[i],dp[j]+arr[i]);
            } 
        }
    }
    cout<<*max_element(dp+1, dp+n+1);
}