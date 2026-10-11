#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int i = 1;

    while (sum < n) {
        sum += i;
        i++;
    }

    if (sum == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}