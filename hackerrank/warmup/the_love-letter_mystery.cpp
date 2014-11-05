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
        string s;
        int r = 0;

        cin >> s;

        for(int i = 0; i < s.size() / 2; ++i){
            int dif = int(s[i]) - int(s[s.size() - i - 1]);
            r += (dif > 0 ? dif : -dif);
        }

        cout << r << endl;
    }

    return 0;
}