#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;


string s1, s2;
int drPos, good, bad;

void rec(int p, int pos){
    if(p == s2.size()){
        if(pos == drPos) good++;
        else bad++;
        return;
    }
    else{
        if(s2[p] == '+') rec(p + 1, pos + 1);
        else if(s2[p] == '-') rec(p + 1, pos - 1);
        else{
            rec(p + 1, pos + 1);
            rec(p + 1, pos - 1);
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    cin >> s1 >> s2;

    for(int i = 0; i < s1.size(); ++i){
        if(s1[i] == '+') drPos++;
        else drPos--;
    }

    rec(0, 0);

    double res = (double) double(good) / double(double(good) + double(bad));

    printf("%.12f", res);

    return 0;
}

