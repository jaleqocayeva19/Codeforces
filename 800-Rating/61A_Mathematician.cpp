#include <iostream>
#include <string>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    if (cin >> s1 >> s2) {
        for (size_t i = 0; i < s1.length(); i++) {
            if (s1[i] == s2[i]) {
                cout << '0';
            } else {
                cout << '1';
            }
        }
        cout << "\n";
    }

    return 0;
}