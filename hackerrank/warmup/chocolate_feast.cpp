#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int t;

    cin >> t;


    while(t--){
        int n, c, m;

        cin >> n >> c >> m;

        int choc = n / c;
        int wr = n / c;

        while(wr >= m){
            choc++;
            wr -= m;
            wr++;
        }

        cout << choc << endl;
    }

    return 0;
}