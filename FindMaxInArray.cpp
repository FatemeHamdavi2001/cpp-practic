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
//Function to find and return the maximum number in the array
int findMax(int arr[], int size)
{
    int max = arr[0]; //start with first element
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > max)
        {
            //update max if current element is bigger
            max = arr[i];
        }
        
    }
    return max;
}
int main()
{
    int numbers [SIZE];
    //Get user input
    getInput(numbers, SIZE);
    //Find the maximum number and display Result
    std::cout << "The maximum number is: " << findMax(numbers, SIZE) << '\n';
    return 0;
}