#include <iostream>

//Constant for array size
const int SIZE{5};
//Function to get input from user and store in the array
void getInput(int arr[], int size)
{
    std::cout << "Enter " << size << " number:\n";
    for(int i = 0; i < size; i++)
    {
        std::cout << "Number " << i + 1 << ": ";
        std::cin >> arr[i];
    }
}
//Function count to even and odd number
void countEvenOdd(int arr[], int size, int& evenCount, int& oddCount)
{
    evenCount = 0;
    oddCount = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evenCount++;
        } else {
            oddCount++;
        }
    }
}
int main()
{
    int numbers[SIZE];
    int evenCount = 0, oddCount = 0;
    //Get input user
    getInput(numbers, SIZE);
    //Call Function count Even and Odd numbers
    countEvenOdd(numbers, SIZE, evenCount, oddCount);
        // Print the results
    std::cout << "Even numbers count: " << evenCount << '\n';
    std::cout << "Odd numbers count: " << oddCount << '\n';

    return 0;
}