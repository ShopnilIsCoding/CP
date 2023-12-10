#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;

    long long avg_fruits = 0, fruit;
    for (int i = 0; i < n; i++) {
        cin >> fruit;
        avg_fruits += fruit;
        if (avg_fruits > x) {
            break;
        }
    }

    long long min_trees = ceil((double)x / avg_fruits * n);
    if (min_trees > n) {
        cout << "Shombhob na" << endl;
        return 0;
    }

    cout << min_trees << endl;
    return 0;
}
