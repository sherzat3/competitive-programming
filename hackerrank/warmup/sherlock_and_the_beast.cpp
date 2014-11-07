#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int t, a[25];

int main() {

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    cin >> t;

    a[0] = 1;

    while(t--){
        int n;

        cin >> n;

        int x = n / 15 * 15, ok = 0;

        for(int fv = 0; fv <= 2; ++fv){
            for(int th = 0; th <= 4; ++th){
                if(!ok && fv * 5 + th * 3 == n % 15){
                    for(int i = 0; i < x + (th * 3); ++i) cout << "5";
                    for(int i = 0; i < fv * 5; ++i) cout << "3";
                    cout << endl;
                    ok = 1;
                    break;
                }
            }
        }

        if(!ok) cout << "-1\n";
    }
    return 0;
}