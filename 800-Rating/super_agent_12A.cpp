#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Sürətli giriş-çıxış üçün
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> s(3);
    for (int i = 0; i < 3; i++) {
        cin >> s[i];
    }

    bool isSymmetric = true;

    // 3x3 matrisin hər bir elementini yoxlayırıq
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Əgər simmetrik nöqtələr bir-birinə bərabər deyilsə
            if (s[i][j] != s[2 - i][2 - j]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    if (isSymmetric) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}