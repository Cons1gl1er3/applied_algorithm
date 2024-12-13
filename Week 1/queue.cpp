#include <bits/stdc++.h>
using namespace std;
int main() {
    queue<int> Q;
    for(int e = 1; e <= 5; e++){
        Q.push(e); cout << "Queue push " << e << endl;
    }
    while(!Q.empty()){
        int e = Q.front(); Q.pop(); cout << "Queue POP " << e << endl;
    }
}