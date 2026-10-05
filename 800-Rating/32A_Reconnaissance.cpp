#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    // Giriş-çıxış əməliyyatlarını sürətləndirmək üçün
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long d;
    cin >> n >> d;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 0;

    // Bütün mümkün (i, j) cütlüklərini yoxlayırıq
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Eyni əsgər özü-özü ilə kəşfiyyat qrupu yarada bilməz
            if (i != j) {
                // Boy fərqi d-dən kiçik və ya bərabərdirsə
                if (abs(a[i] - a[j]) <= d) {
                    count++;
                }
            }
        }
    }

    cout << count << "\n";

    return 0;
}