#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string, int> M;
    M["abc"] = 1; M["def"] = 2; M["xyzt"] = 10;
    string k = "abc";
    cout << "value of key " << k << " = " << M[k] << endl;
    for(map<string,int>::iterator p = M.begin(); p != M.end(); p++)
    cout << p->first << " is mapped to value " << p->second << endl;
    string k1 = "1234";
    cout << "value of " << k1 << " = " << M[k1] << endl;
}