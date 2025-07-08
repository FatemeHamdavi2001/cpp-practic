#include <iostream>
#include <math.h>
main()
{
    int num1,num2;
    int q;
    std::cout << "nam1 = ";
    std::cin >> num1;
    std::cout << "num2 = ";
    std::cin >> num2;
    if(num1 < num2)
    {
        q = num1;
        num1 = num2;
        num2 = q;
    }
    do
    {
        q = num1 % num2;
        num1 = num2;
        num2 = q;
    }
    while(q != 0);
    std::cout << "gcd = " << num1;
}