#include <iostream>
using namespace std;

int main() {
int a, b;
int result=0;
cin >> a >> b;

if (a == 0) { result = b; }
if (b == 0) { result = a; }
if (a == b) { result = a; }

if (result ==0 ) { // no gcd found - continue calculations
    if (a < b) { //swap values s.a. a > b
        int temp = a;
        a = b;
        b = temp;
    }

    int quotent, detergent, remainder;
    while (true) {
        remainder = a % b;
        if (remainder == 0) {
            result = b; break;
            }
        else {
            a = b;
            b = remainder;
            }
        }
    }

cout << result;
return (0);
}
