#include <bits/stdc++.h>
using namespace std;

int arr[1001];
int dp[1001];


int main() {
    int n; cin>>n;
    for(int i=1; i<=n; i++) {
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++) {
        dp[i] = 1;
        for(int j = i-1; j >= 1; j--) {
            if(arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
        
    }
    cout<<*max_element(dp+1, dp+n+1);

}