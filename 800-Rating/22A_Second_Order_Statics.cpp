#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int second_stat = -1;
    bool found = false;

    for (int i = 1; i < n; ++i) {
        if (a[i] > a[0]) {
            second_stat = a[i];
            found = true;
            break;
        }
    }

    if (found) {
        cout << second_stat << "\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}