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
    string s;

    cin >> t;

    while(t--){
        cin >> s;
        int a[150];

        for(int i = 0; i < s.size(); ++i)
            a[i] = int(s[i] - 'a');

        if(!next_permutation(a, a + s.size())){
            cout << "no answer\n";
        }

        else{
            
            for(int i = 0; i < s.size(); ++i)
                cout << char(a[i] + 'a');

            cout << endl;
        }

    }

    return 0;
}