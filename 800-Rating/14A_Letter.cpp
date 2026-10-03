#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Sürətli giriş/çıxış üçün
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    int min_row = n, max_row = -1;
    int min_col = m, max_col = -1;

    // Bütün rənglənmiş '*' xanalarının sərhədlərini tapırıq
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '*') {
                min_row = min(min_row, i);
                max_row = max(max_row, i);
                min_col = min(min_col, j);
                max_col = max(max_col, j);
            }
        }
    }

    // Tapan sərhədlər daxilində düzbucaqlını çap edirik
    for (int i = min_row; i <= max_row; i++) {
        for (int j = min_col; j <= max_col; j++) {
            cout << grid[i][j];
        }
        cout << "\n";
    }

    return 0;
}