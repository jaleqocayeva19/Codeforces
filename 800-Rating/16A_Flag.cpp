#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Giriş-çıxış əməliyyatlarını sürətləndirmək üçün
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<string> flag(n);
    for (int i = 0; i < n; ++i) {
        cin >> flag[i];
    }

    bool isValid = true;

    for (int i = 0; i < n; ++i) {
        // 1. Sətrin daxilində bütün damaların eyni rəngdə olmasını yoxlayırıq
        for (int j = 1; j < m; ++j) {
            if (flag[i][j] != flag[i][0]) {
                isValid = false;
                break;
            }
        }
        
        // 2. Qonşu sətirlərin fərqli rəngdə olmasını yoxlayırıq
        if (i > 0 && flag[i][0] == flag[i - 1][0]) {
            isValid = false;
        }
    }

    if (isValid) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}