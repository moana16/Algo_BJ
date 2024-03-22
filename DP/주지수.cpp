#include<bits/stdc++.h>
using namespace std;

int mat[1026][1026];
int dp[1026][1026];
int N,M,K;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N>>M;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++) {
            cin>>mat[i][j];
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + mat[i][j];
        }
    }


    cin>>K;
    while(K--) {
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        int sum = dp[x2][y2] - dp[x1-1][y2] - dp[x2][y1-1] + dp[x1-1][y1-1];
        cout<<sum<<'\n';
    }

    

}