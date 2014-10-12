#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    long long a, b, res = 0, mod = 1000000007;

    cin >> a >> b;

    long long A = ((a * (a + 1)) % mod) / 2;
    long long B = ((b * (b - 1)) % mod) / 2;

    res = (A * B) % mod;
    res = (res * b) % mod;

    res = (res + (B * a) % mod) % mod;

    cout << res;

    return 0;
}

