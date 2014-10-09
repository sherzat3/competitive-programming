#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <cstring>
#include <cmath>
#include <queue>

using namespace std;

int a[3][3], w, e[600][600], d[600], u[600];

int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    for(int i = 0; i < (1<<9); ++i){
                // for(int j = 0; j < 9; ++j){
                // 	if((1<<j)&i){
                // 		a[j/3][j%3] = 1;
                // 	}
                // }

        for(int j = 0; j < 3; ++j){
            for(int q = 0; q < 3; ++q){
                w = i;

                w ^= (1<<(j*3+q));

                if(q > 0) w ^= (1<<(j*3+q-1));
                if(q < 2) w ^= (1<<(j*3+q+1));
                if(j > 0) w ^= (1<<(j*3+q-3));
                if(j < 2) w ^= (1<<(j*3+q+3));

                e[i][w] = 1;
            }
        }

                // for(int j = 0; j < 3; ++j){
                // 	for(int q = 0; q < 3; ++q){
                // 		cout << a[j][q] << " ";
                // 		a[j][q] = 0;
                // 	}
                // 	cout << endl;
                // }
                // cout << endl;
    }

    // for(int i = 0; i < 512; ++i){
    //     for(int j = 0; j < 512; ++j){
    //         if(!e[i][j]) continue;
    //         cout << i << "," << j << ":" << e[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int t;

    cin >> t;

    while(t--){

    string s[3];
    int des = 0;
    for(int i = 0; i < 3; ++i){
        cin >> s[i];
        for(int j = 0; j < 3; ++j)
            if(s[i][j] == '*')
                des |= (1<<(i*3+j));
    }

    queue <int> q;

    q.push(0);

    for(int i = 0; i < 512; ++i){
        u[i] = 0;
        d[i] = 0;
    }

    u[0] = 1;
    d[0] = 0;

    int res;
    bool gotRes = 0;

    while(!q.empty()){
        int v = q.front();
        q.pop();

        for(int i = 0; i < (1<<9); ++i){
            if(e[v][i] && !u[i]){
                d[i] = d[v] + 1;
                u[i] = 1;
                q.push(i);

                if(i == des){
                    res = d[i];
                    gotRes = 1;
                    break;
                }
            }
    }
        if(gotRes) break;
    }

    cout << res << endl;
}

return 0;
}