#include <iostream>
int getPerimeter(int len, int wid) {
    int P = (len + wid) * 2;
    return P;
}
int getArea(int len, int wid) {
    int A = len * wid;
    return A;
}
int main() {
    int len,wid;
    std::cout << "len = ";
    std::cin >> len;
    std::cout << "wid = ";
    std::cin >> wid;
    std::cout << "Perimeter = " << getPerimeter(len,wid) << "Area = " << getArea(len,wid) <<"\n";
}