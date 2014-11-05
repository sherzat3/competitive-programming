#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int t;

    cin >> t;

    while(t--){
        int n;

        cin >> n;

        long long r = (long long)(n / 2) * (n - n / 2);

        cout << r << endl;
    }

    return 0;
}