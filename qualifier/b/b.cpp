#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <cstring>
#include <cmath>

using namespace std;

int d1[100], d2[100];

int main(){

//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	
	string s[10];

	for(int i = 0; i < 8; ++i){
		cin >> s[i];
		for(int j = 0; j < s[i].size(); ++j){
			if(s[i][j] == '*'){
				d1[i - j + 10]++;
				d2[i + j + 10]++;
			}
		}
	}

	for(int i = 0; i < 100; ++i){
		if(d1[i] > 1 || d2[i] > 1){
			cout << "invalid";
			return 0;
		}
	}

	cout << "valid";

	return 0;
}