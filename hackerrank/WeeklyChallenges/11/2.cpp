#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

map <long long, bool> m;
vector <int> v;

int len(long long x){
    int r = 0;

    while(x){
        x /= 10;
        r++;
    }

    return r;
}

bool strange(long long x){
    if(x < 10) return true;
    else if(x % len(x) == 0 && strange(x / len(x))){
        return true;
    }
    else return false;
}

void rec(long long x, int d){
    for(int i = 2; i <= 18 - d; ++i){
        if(!m[(long long)x * i] && strange((long long)x * i)){
            //cout << x * i << endl;
            v.push_back(x * i);
            m[x * i] = true;
            rec(x * i, len(x * i));
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    for(int i = 0; i < 10; ++i){
        if(!m[(long long) i]){
            m[(long long) i] = true;
            v.push_back(i);
        }
        rec(i, 1);
    }
    
    int t;

    cin >> t;

    while(t--){
        long long l, r;

        cin >> l >> r;
        int res = 0;

        for(int i = 0; i < v.size(); ++i){
            if(v[i] >= l && v[i] <= r){
                res++;
                // cout << v[i] << " "; 
            }
        }

        cout << res << endl;
    }

    return 0;
}

