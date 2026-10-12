#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main() {
    // Sətrlərdə boşluqları oxumaq üçün getline istifadə edirik
    string s;
    if (!getline(cin, s)) return 0;

    // Sətrin sonundan başlayaraq ilk hərfi tapırıq
    for (int i = s.length() - 1; i >= 0; --i) {
        if (isalpha(s[i])) {
            if (isVowel(s[i])) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
            break;
        }
    }

    return 0;
}