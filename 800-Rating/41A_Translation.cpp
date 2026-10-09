#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;

    string s_rev = s;
    reverse(s_rev.begin(), s_rev.end());

    if (t == s_rev) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}