#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n, m;

    cin >> n >> m;

    // if(m < (n / 2 + n % 2) || m > n){
    //     cout << "-1";
    //     return 0;
    // }

    for(int i = (n / 2 + n % 2); i <= n; ++i){
        if(i % m == 0){
            cout << i;
            return 0;
        }
    }

    cout << "-1";

    return 0;
}

