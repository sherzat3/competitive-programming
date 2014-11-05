#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a[30], odds;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    string s;

    cin >> s;

    for(int i = 0; i < s.size(); ++i){
        a[int(s[i] - 'a')]++;
    }

    for(int i = 0; i < 26; ++i)
        if(a[i]&1)
            odds++;

    if(odds <= 1) cout << "YES";
    else cout << "NO";

    return 0;
}