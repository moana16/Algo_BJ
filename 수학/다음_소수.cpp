#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(ll n) {
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;

    for(ll i = 5; i * i <= n ; i += 6) {
        if(n % i == 0 || n % (i+2) == 0) return false;
    }
    return true;
}

int main() {
    int t; cin>>t;
    while(t--) {
        ll n; cin>>n;

        while(!isPrime(n)) {n++;}
        
        cout<<n<<'\n';


    }
}