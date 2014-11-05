#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a[3010];

int main() {

    int t;

    cin >> t;


    while(t--){
        int n, a, b;

        cin >> n >> a >> b;

        if(a == b){
            cout << (n - 1) * a << endl;
            continue;
        }

        n--;

        if(a > b) swap(a, b);

        for(int i = 0; i <= n; ++i){
            cout << a * (n - i) + b * i << " ";
        }

        cout << endl;
    }

    return 0;
}