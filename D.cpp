#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_set<int> s;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << endl;
    return 0;
}
