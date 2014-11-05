#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a[30], b[30];

int main() {
    
    int n;

    cin >> n;

    for(int i = 0; i < n; ++i){
        string s;

        cin >> s;

        for(int j = 0; j < s.size(); ++j){
            if(!i) a[int(s[j] - 'a')] = 1;
            else{
                b[int(s[j] - 'a')] = 1;
            }
        }

        for(int j = 0; j < 26; ++j){
            if(i && a[j] && !b[j]) a[j] = 0;
            b[j] = 0;
        }
    }

    int r = 0;

    for(int i = 0; i < 26; ++i)
        r += a[i];

    cout << r;

    return 0;
}