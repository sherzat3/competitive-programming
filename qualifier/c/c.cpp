#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <cstring>
#include <cmath>

using namespace std;

int w[200];

int main(){

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	
	int q, n, a[150];

	cin >> q >> n;

	n += 2;
	a[0] = 0;

	for(int i = 1; i < n - 1; ++i){
		cin >> a[i];
	}

	a[n - 1] = q;

	// for(int i = 0; i < n; ++i)
	// 	cout << a[i] << " ";

	for(int i = 0; i < n - 1; ++i)
		for(int j = i + 1; j < n; ++j){
			w[a[j] - a[i]]++;
		}

	//	cout << q << " " << n;
	for(int i = 0; i < 150; ++i){
		if(w[i] > 0)
			cout << i << " ";
	}

	return 0;
}