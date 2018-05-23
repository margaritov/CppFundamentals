#include <iostream>

int main() {
bool isPositive = true;
double a, b, c;
std::cin >> a >> b >> c;

if ( ( a < 0 && b > 0 && c > 0) ||
     ( a > 0 && b < 0 && c > 0) ||
     ( a > 0 && b > 0 && c < 0) ||
     ( a < 0 && b < 0 && c < 0) ) {
    isPositive = false;
    }

char resultSign = isPositive ? '+' : '-';
std::cout << resultSign;
return(0);
}
