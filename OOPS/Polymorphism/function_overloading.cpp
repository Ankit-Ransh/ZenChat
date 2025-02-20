#include<bits/stdc++.h>
using namespace std;

int max(int x, int y) {
    return x >= y ? x : y;
}

long max(long x, long y) {
    return x >= y ? x : y;
}

double max(double x, double y) {
    return x >= y ? x : y;
}

int main() {
    cout << max(1, 2) << "\n";
    cout << max(1LL, 2LL) << "\n";
    cout << max(1.2, -2.4) << "\n";
    
    return 0;
}