#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n, a[1010];

    cin >> n;

    for(int i = 0; i < n; ++i)
        cin >> a[i];

    for(int i = 0; i < n; ++i){
        int mn = 10000, r = 0;

        for(int j = 0; j < n; ++j){
            if(a[j])
                r++, mn = min(mn, a[j]);
        }

        for(int j = 0; j < n; ++j){
            if(a[j])
                a[j] -= mn;
        }

        if(!r) break;
        cout << r << endl;
    }

    return 0;
}