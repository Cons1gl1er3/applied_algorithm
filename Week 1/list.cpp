#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> L;
    for (int v=1; v<=10; v++) L.push_back(v);
    list<int>::iterator p;
    p =  L.begin();
    advance(p, 2);
    L.insert(p, 2, 6); //insert 2 occurrences of 6 after position p
    for (p=L.begin(); p!=L.end(); p++) cout << *p << " ";
    L.erase(p); // remove the element at position p (3)
    for (p=L.begin(); p!=L.end(); p++) cout << *p << " ";
    cout << endl;
    return 0;
}