#include <iostream>
//Constant for array size
const int SIZE{7};
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
//Function to find a number in the array
bool isFound(int arr[], int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        //If found, return true immediately
        if(arr[i] == target)
        {
            return true;
        }
    }
    //Only return false if loop completes without match
    return false;
}
int main()
{
    int numbers[SIZE];
     //Get input from the user
    getInput(numbers, SIZE);

    int target;
    std::cout << "Enter the number to search: ";
    std::cin >> target;
    
    //Call the function to search for the number in the array
    if(isFound(numbers, SIZE, target))
    {
        std::cout << target << " is found in the array\n";
    }
    else
    {
        std::cout << target << " is not found in the array\n";
    }
    return 0;
}
