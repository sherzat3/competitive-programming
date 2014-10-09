#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <cstring>
#include <cmath>

using namespace std;

int main(){

	  freopen("output.txt", "w", stdout);

    int n, x, y, i, j, t = 0, a[1005], sum = 0, index = 0, v;

	cin >> n;

	for(long long q = 1; q < 10000000000LL; q *= 2) {
		a[t] = q - 1;
		t++;
	}

	 // cout << t << endl;

	for(v = 0; v < n; v++) {
		cin >> x >> y;

		if(x > y)	swap(x, y);

		index = 0;

		while(true) {			
			if(x + y >= a[index]) {
				if(a[index] <= x) {
					i = a[index];
				}
				else	i = x;

				j = a[index] - i;

				while(i >= 0 && j <= y) {
			//		cout << i << " " << j << " " << sum << endl;
					sum++;
					i--;
					j++;

				}
			
				index++;
			}
			else break;
		//	cout << "end of while" << endl;
		}
		cout << sum << endl;
		sum = 0;
	}

	return 0;
}