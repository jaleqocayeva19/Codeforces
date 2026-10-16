#include <iostream>
#include <string>

using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int countVowels(const string& s) {
    int count = 0;
    for (char c : s) {
        if (isVowel(c)) {
            count++;
        }
    }
    return count;
}

int main() {
    string line1, line2, line3;
    if (!getline(cin, line1)) return 0;
    if (!getline(cin, line2)) return 0;
    if (!getline(cin, line3)) return 0;

    if (countVowels(line1) == 5 && countVowels(line2) == 7 && countVowels(line3) == 5) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}