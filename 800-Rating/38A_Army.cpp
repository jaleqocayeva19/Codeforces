#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int d[100];

    for (int i = 1; i < n; i++) {
        cin >> d[i];
    }

    int a, b;
    cin >> a >> b;

    int years = 0;

    for (int i = a; i < b; i++) {
        years += d[i];
    }

    cout << years << endl;

    return 0;
}