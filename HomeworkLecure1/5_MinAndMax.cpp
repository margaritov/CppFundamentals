#include <iostream>
using namespace std;

int main() {
int n;
int minValue, maxValue;
cin >> n;
for (int i = 0; i < n; i++) {
    int currentNum;
    cin >> currentNum;
    if (i == 0) {
        minValue = currentNum;
        maxValue = currentNum;
    } else {
        if (currentNum > maxValue) { maxValue = currentNum; }
        if (currentNum < minValue) { minValue = currentNum; }
    }
}
cout << minValue << " " << maxValue;
}
