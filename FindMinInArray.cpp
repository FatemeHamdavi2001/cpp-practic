#include <iostream>

//Constant for array size
const int SIZE{6};
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
//Function to find and return the minimum number in the array
int findMin(int arr[], int size)
{
    int min = arr[0]; //start with first element
    for(int i = 1; i < size; i++)
    {
        if(arr[i] < min)
        {
            //update min if current element is bigger
            min = arr[i];
        }
        
    }
    return min;
}
int main()
{
    int numbers [SIZE];
    //Get user input
    getInput(numbers, SIZE);
    //Find the minimum number and display Result
    std::cout << "The minimum number is: " << findMin(numbers, SIZE) << '\n';
    return 0;
}