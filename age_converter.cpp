#include <iostream>
void convertAge(int age) {
    int days = age * 365;
    int hours = days * 24;
    int minutes = hours * 60;
    long int seconds = minutes * 60;

    std::cout << "Age = " << '\t';
    std::cout << days << " days" <<'\t';
    std::cout << hours << " hours" <<'\t';
    std::cout << minutes << " minutes" <<'\t';
    std::cout << seconds << " seconds" <<'\t';
    
}
int main() {
    int age;
    std::cout << "Enter age = ";
    std::cin >> age;

    convertAge(age);
    return 0;
}