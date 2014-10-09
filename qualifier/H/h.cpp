#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <cstring>
#include <cmath>

using namespace std;

int n, k, a[1010][1010], u[1010], mx, nn, p[1010];

void dfs(int v, int d, int s){

	if(d - 1 > nn - k || v == n - 1){
		if(d - 1 == nn - k){
			mx = max(mx, s);
		}
		return;
	}else{
		for(int i = 0; i < n; ++i){
			if(!u[i] && a[v][i] > 0){
				u[i] = 1;
				p[d] = i;
				dfs(i, d + 1, s + (a[v][i] == 200 ? 0 : a[v][i]));
				u[i] = 0;
			}
		}
	}
}

int main(){

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	while(true){

		scanf("%d %d", &n, &k);

		if(!n && !k)
			break;

		nn = n * 2;

		//2n for start node, 2n+1 for finish node

		for(int i = 0; i < n; ++i){
			int v1, v2;

			scanf("%d %d", &v1, &v2);

			if(v1 == 0) v1 = 200;
			if(v2 == 0) v2 = 200;

			if(!i){
				a[n * 2][i * 2] = v1;
				a[n * 2][i * 2 + 1] = v2;

				a[i * 2][i * 2 + 1] = v2;
				a[i * 2 + 1][i * 2] = v1;
			}else{
				a[(i - 1) * 2][i * 2] = v1;
				a[(i - 1) * 2 + 1][i * 2 + 1] = v2;

				a[i * 2][i * 2 + 1] = v2;
				a[i * 2 + 1][i * 2] = v1;
			}
		}

		a[n * 2 - 2][n * 2 + 1] = a[n * 2 - 1][n * 2 + 1] = 1;

		n = n * 2 + 2;

		mx = -1, u[n - 2] = 1;

		dfs(n - 2, 0, 0);

		printf("%d\n", mx - 1);

		for(int i = 0; i < n; ++i){
			for(int j = 0; j < n; ++j)
				a[i][j] = 0;
			u[i] = 0;
		}
	}

	return 0;
}