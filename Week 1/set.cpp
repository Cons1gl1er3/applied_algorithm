#include <bits/stdc++.h>
using namespace std;
int main() {
    set<string> S;
    S.insert("abc"); S.insert("def"); S.insert("xyz");   
    S.insert("abc");
    set<string>::iterator p;
    for(p = S.begin(); p != S.end(); p++) cout << *p << " ";
    cout << endl;

    // Find
    string s1 = "def";
    set<string>::iterator p1 = S.find(s1);
    if(p1 == S.end()) 
        cout << "xau " << s1 << " does not exist" << endl;
    else 
        cout << "xau " << s1 << " exists in S" << endl;

    // Erase
    string s2 = "xyz";
    S.erase(s2);
    set<string>::iterator p2;
    for(p2 = S.begin(); p2 != S.end(); p2++) cout << *p2 << " ";
    cout << endl;
}