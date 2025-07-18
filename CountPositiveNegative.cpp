#include <iostream>
//Constant for array size
const int SIZE{10};
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
//Function to count the positive numbers in the array
int countPositive(int arr[], int size)
{
    int count{0}; //Initialize counter to zero
    for(int i = 0; i < size; i++)
    {
        //Increment if the number is positive
        if(arr[i] > 0)
        {

            count++;
        }
    }
    //Return the total count
    return count;
}
//Function to count negative numbers in the array
int countNegative(int arr[], int size)
{
    int count{0}; //Initialize counter to zero
    for(int i = 0; i < size; i++)
    {
        //Increment if the number is negative
        if(arr[i] < 0)
        {
            count++;
        }
    }
    //Return the total count
    return count;
}
int main()
{
    //Declare array to store 10 numbers
    int numbers [SIZE];
    //Get number from the user
    getInput(numbers, SIZE);
    //Count and display positive and negative numbers and show result
    std::cout << "Positive numbers: " << countPositive(numbers, SIZE) << '\n';
    std::cout << "Negative numbers: " << countNegative(numbers, SIZE) << '\n';

    return 0;
}
