#include <iostream>

int main() {
int a, b;
std::cin >> a >> b;

if (a > b) { //swap values if a > b
    int temp = a;
    a = b;
    b = temp;
    }

std::cout << a << " " << b;
return (0);
}
