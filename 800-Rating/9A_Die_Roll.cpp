#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Y, W;
    cin >> Y >> W;

    int max_roll = max(Y, W);
    int numerator = 6 - max_roll + 1;
    int denominator = 6;

    int g = gcd(numerator, denominator);

    numerator /= g;
    denominator /= g;

    cout << numerator << "/" << denominator << "\n";

    return 0;
}