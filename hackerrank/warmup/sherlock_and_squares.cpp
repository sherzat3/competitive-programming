#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    long long t, a, b;

    cin >> t;

    while(t--){
        cin >> a >> b;

        int r = 0;

        for(int i = 1; i <= 100000; ++i){
            if((long long) i * i >= a && (long long)i * i <= b)
                r++;
        }

        cout << r << endl;
    }    

    return 0;
}