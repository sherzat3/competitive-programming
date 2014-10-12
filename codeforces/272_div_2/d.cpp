#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

int a[10100][5], mx = -1;

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n, k, w = 1;

    cin >> n >> k;

    queue <int> q;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 4; ++j){
            if(!j){
                if(!q.empty()){
                    a[i][j] = q.front();
                    mx = max(mx, a[i][j]);
                    q.pop();
                }
                else{
                    a[i][j] = k * w;
                    mx = max(mx, a[i][j]);
                    w++;
                }
            }
            else{
                if(!q.empty()){
                    bool bad = 0;
                    for(int e = 0; e < j; ++e){
                        if(gcd(a[i][e], q.front()) != k){
                            bad = 1;
                            break;
                        }
                    }

                    if(!bad){
                        a[i][j] = q.front();
                        mx = max(mx, q.front());
                        q.pop();
                        continue;
                    }
                }
                bool found = 0;
                while(!found){
                    bool bad = 0;
                    for(int e = 0; e < j; ++e){
                        if(gcd(a[i][e], k * w) != k){
                            bad = 1;
                            q.push(k * w);
                            w++;
                            //cout << "i: " << i << " e: " << e << " j: " << j << " " << a[i][e] << endl;
                            break;
                        }
                    }
                    if(!bad){
                        a[i][j] = k * w;
                        mx = max(mx, a[i][j]);
                        w++;
                        found = 1;
                    }
                }
                // cout << "i: " << i << " j: " << j << " " << a[i][j] << endl;
            }
        }
    }

    printf("%d\n", mx);

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 4; ++j){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

