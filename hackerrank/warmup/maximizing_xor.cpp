#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int l, r, mx = -1;

    cin >> l >> r;

    for(int i = l; i < r; ++i){
        for(int j = i + 1; j <= r; ++j){
            mx = max(mx, i^j);
        }
    }

    cout << mx;
    
    return 0;
}