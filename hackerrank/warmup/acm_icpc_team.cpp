#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n, m, mx = -1, e = 0;
    string s[1000];

    cin >> n >> m;

    for(int i = 0; i < n; ++i){
        cin >> s[i];
    }

    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            int w = 0;
            for(int q = 0; q < m; ++q)
                if(s[i][q] == '1' || s[j][q] == '1')
                    w++;
            if(w == mx)
                 e++;
            else if(w > mx)
                mx = w, e = 1;
        }
    }

    cout << mx << endl << e;

    return 0;
}