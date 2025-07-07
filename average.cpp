#include <iostream>
int main()
{
    int num1, num2, num3, ave;

    std::cout << "Enter num1= " << "\n";
    std::cin >> num1;
    std::cout << "Enter num2= " << "\n";
    std::cin >> num2;
    std::cout << "Enter num3= " << "\n";
    std::cin >> num3;

    ave = (num1 + num2 + num3) / 3.0;
    std::cout << "Average = " << ave << "\n";
    return 0;
}
