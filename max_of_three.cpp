#include <iostream>
int main()
{
int a,b,c;
std::cout << "A = ";
std::cin >> a;
std::cout << "B = ";
std::cin >> b;
std::cout << "C = ";
std::cin >> c;

int largest = a;
if (b > largest){
    largest = b;
} else if (c > largest){
    largest = c;
}
std::cout << "Largest :" << largest;

return 0;
}