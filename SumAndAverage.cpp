#include <iostream>

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
//Function to return the sum number in the array
int calculateSum(int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
//Function return the average
double calculateAverage(int sum, int size)
{
    return static_cast<double>(sum) / size;
}
int main()
{
    const int SIZE = 5;
    int numbers[SIZE];

    //Get input from user
    getInput(numbers, SIZE);
    //Calculate sum
    int total = calculateSum(numbers, SIZE);
    //Calculate average
    double average = calculateAverage(total, SIZE);

    //Show Result
    std::cout << "Sum = " << total << '\n';
    std::cout << "Average = " << average << '\n';

    return 0;
}