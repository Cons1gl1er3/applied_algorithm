#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(5); pq.push(1); pq.push(100); pq.push(30);
    while(!pq.empty()){
        int e = pq.top(); pq.pop();
        cout << "pq pop " << e << endl;
    }

    priority_queue<pii, vector<pii>, greater<pii> > PQ;
    PQ.push(make_pair(4,-40)); 
    PQ.push(make_pair(1,-10));
    PQ.push(make_pair(9,-900));
    while(!PQ.empty()){
        pii e = PQ.top(); PQ.pop();
    cout << "PQ pop (" << e.first << "," << e.second << ")" << endl;
    }
}