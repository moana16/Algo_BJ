#include<bits/stdc++.h>
using namespace std;
int n,m,h;
int ret = 0x7f7f7f;
bool visited[34][34];

bool check() {
    for(int i=1;i<=n; i++) {
        int start = i;
        for(int j=1; j<=h; j++) {
            if(visited[j][start]) start++;
            else if(visited[j][start-1]) start--;

        }
        if(start != i) return false;
    }
    return true;
}

void go(int here, int cnt) {
    if(cnt > 3 || cnt >= ret) return;
    if(check()) {
        ret = min(ret, cnt);
        return;
    }
    for(int i=here; i<=h; i++){
        for(int j=1; j<= n; j++) {
            if(visited[i][j] || visited[i][j-1] || visited[i][j+1]) continue;
            visited[i][j] = true;
            go(i, cnt+1);
            visited[i][j] = false;
        }
    }


}

int main() {
    cin>>n>>m>>h;
    for(int i=0; i<m; i++) {
        int a,b;
        cin>>a>>b;
        visited[a][b] = true;
    }
    go(1,0);
    if(ret == 0x7f7f7f) cout<<-1;
    else cout<<ret;
    
}