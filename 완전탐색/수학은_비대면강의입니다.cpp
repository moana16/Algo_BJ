#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    for(int x=-999; x<=999; x++) {
        for(int y=-999; y<=999; y++) {
            if(c == a*x + b*y && f == d*x + y*e) {
                cout<<x<<" "<<y;
                return 0;
            }
        }
    }
}