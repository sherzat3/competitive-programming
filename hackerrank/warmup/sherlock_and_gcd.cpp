#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a%b);
}
int main() {

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;

    cin >> t;


    while(t--){
        int n, a[110], q = 0;

        cin >> n;

        for(int i = 0; i < n; ++i){
            cin >> a[i];
            q = gcd(a[i], q);
        }

        if(q == 1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}