#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

const int mod = 1000000007;

long long Pow (long long a, int b){
    if(b == 0) return 1LL;

    else if(b % 2 == 0){
        long long A = (long long)(a * a) % mod;
        return Pow(A, b / 2);
    }

    else{
        long long res = (Pow(a, b - 1) * a) % mod;
        return res;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int t;
    
    cin >> t;
    
    while(t--){
        long long n;
            
        cin >> n;
        
        long long q = (Pow(2, n + 1) + 2) % mod;
        
        cout << q << endl;
    }
    
    return 0;
}

