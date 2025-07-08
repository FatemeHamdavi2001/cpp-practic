#include <iostream>
void printEvenNumbersBetween(int a,int b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    std::cout << "Even numbers between " << a << " and " << b << " are : ";
    for (int i = a; i <=b; i++) {
        if (i % 2 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << '\n';
}
int main() {
    int a,b;
    std::cout << "Enter a = ";
    std::cin >> a;
    std::cout << "Enter b = ";
    std::cin >> b;

    printEvenNumbersBetween(a,b);

    return 0;
}