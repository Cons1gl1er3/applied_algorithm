#include <bits/stdc++.h>
using namespace std;

int main() {
    // operation: assign, concat, replace substring, extract substring, etc.
    string s1 = "hello";
    string s2 = s1 + " world";
    cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
    string ss = s2.substr(2,6); // starting position 2, len 6
    cout << "s2 = " << s2 << ", length = " << s2.length() << endl;
    cout << "s2.substring(2,6) = " << ss << endl;
    s2.replace(6, 5, "abc"); // starting posi 6, number of characters to replace 5, 
                            // and new substring to replace
    cout << "new s2 = " << s2 << endl;
}