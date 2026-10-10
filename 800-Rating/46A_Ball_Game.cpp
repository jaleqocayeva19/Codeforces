#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int current = 1;

    for (int i = 1; i < n; i++) {
        current = (current + i - 1) % n + 1;
        cout << current << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}