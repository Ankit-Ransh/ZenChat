#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void printArray(const vector<int> &v) {
    for(auto it: v) cout << it << " "; 
    cout << endl;
}

void f1(vector<int> &v) { /* Allows to change values */
    v[2] = 11; 
}

void f2(const vector<int> &v) { /* This does not allow to change value */
    // v[2] = 6;
}

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {1, 2, 3, 4, 5};

    f1(v1);
    f2(v2); /* Both are passed by reference so we can change values, if we want to avoid use const */

    printArray(v1), printArray(v2);

    return 0;
}