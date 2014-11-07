#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n, m, a, b, k;
    long long r = 0;

    cin >> n >> m;

    for(int i = 0; i < m; ++i){
        scanf("%d %d %d", &a, &b, &k);

        r += (long long)(b - a + 1) * k;
    }

    double fr = (double) r / n;

    cout << int(fr * 100) / 100;

    return 0;
}