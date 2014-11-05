#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;

    cin >> t;

    while(t--){
        int n, fives = -1, threes = -1;

        cin >> n;

        for(int i = n / 3 + 1; i >= 0; --i){
            if((n - (5 * i)) % 3 == 0)
                threes = i, fives = (n - (5 * i)) / 3;
        }

        for(int i = n / 5 + 1; i >= 0; --i){
            if((n - (3 * i)) % 5 == 0)
                fives = i, threes = (n - (3 * i)) / 5;
        }

        if(fives == -1) cout << "-1";
        else{
            for(int i = 0; i < fives * 3; ++i) cout << "5";
            for(int i = 0; i < threes * 5; ++i) cout << "3";
        }

        cout << endl;
    }
    return 0;
}