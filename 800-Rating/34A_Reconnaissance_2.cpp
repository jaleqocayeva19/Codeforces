#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    // Giriş-çıxış əməliyyatlarını sürətləndirmək üçün
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min_diff = abs(a[0] - a[n - 1]);
    int index1 = n; // 1-ci əsaslı indeks (1-dən n-ə qədər)
    int index2 = 1;

    // Bütün qonşu cütlükləri yoxlayırıq
    for (int i = 0; i < n - 1; i++) {
        int diff = abs(a[i] - a[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            index1 = i + 1;
            index2 = i + 2;
        }
    }

    // Dairəvi hal: sonuncu əsgər (n-ci) ilə birinci əsgər (1-ci)
    int last_diff = abs(a[n - 1] - a[0]);
    if (last_diff < min_diff) {
        min_diff = last_diff;
        index1 = n;
        index2 = 1;
    }

    cout << index1 << " " << index2 << "\n";

    return 0;
}