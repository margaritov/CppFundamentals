#include <iostream>
#include <math.h>
using namespace std;

int main() {
double a, b, c, x;
double D;
cin >> a >> b >> c;
//a = 2; b = 5; c = -3;
D = b * b - (4 * a * c);
if (D < 0) {
    cout << "no roots";
}
else if (D ==0 ) {
    x = -b /( 2 * a);
    cout << x;
}
else {
    x =  (-b - sqrt( b * b - ( 4 * a * c) )) / (2 * a);
    double x2 = (-b + sqrt( b * b - ( 4 * a * c) ) ) / (2 * a);
    cout << x << " "<< x2;
}
return (0);
}
