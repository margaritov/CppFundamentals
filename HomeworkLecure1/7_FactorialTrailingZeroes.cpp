#include <iostream>
using namespace std;

int main() {
int n;
int trailingZeroesCount = 0;
cin >> n;
for (int i = 1; i <= n; i++) {
    if (i % 5 == 0) { trailingZeroesCount++; }
    }

cout << trailingZeroesCount;
return (0);
}
