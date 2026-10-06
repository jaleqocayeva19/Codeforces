#include <iostream>
#include <string>

using namespace std;

int main() {
    // Giriş-çıxış əməliyyatlarını sürətləndirmək üçün
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string result = "";
    int n = s.length();

    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            result += '0';
        } else if (s[i] == '-') {
            // Növbəti simvola baxırıq
            if (i + 1 < n && s[i + 1] == '.') {
                result += '1';
                i++; // Növbəti simvolu da keçirik
            } else if (i + 1 < n && s[i + 1] == '-') {
                result += '2';
                i++; // Növbəti simvolu da keçirik
            }
        }
    }

    cout << result << "\n";

    return 0;
}