#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n, k, a[100500], mn = 1000000000;

    cin >> n >> k;

    for(int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    sort(a, a + n);

    for(int i = 0; i < n - k + 1; ++i)
        mn = min(mn, a[i + k - 1] - a[i]);

    cout << mn;

    return 0;
}