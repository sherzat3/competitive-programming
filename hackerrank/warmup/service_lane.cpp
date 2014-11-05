#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n, t, a[100100];
    
    cin >> n >> t;
    
    for(int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < t; ++i){
        int q, w, mn = 10;
        
        scanf("%d %d", &q, &w);
        
        for(int j = q; j <= w; ++j)
            mn = min(mn, a[j]);
        
        printf("%d\n", mn);
    }
    
    return 0;
}