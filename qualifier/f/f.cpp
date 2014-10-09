#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <cstring>
#include <cmath>

using namespace std;

int main(){

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	
	int x, y;

	do{
		cin >> x >> y;

		if(!x && !y) break;

		cout << x / y << " " << x - ((x / y) * y) << " / " << y << endl;

	}while(x != 0 && y != 0);

	return 0;
}