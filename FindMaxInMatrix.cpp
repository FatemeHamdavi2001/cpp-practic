#include <iostream>

//// Function to get user input
void getInput(int arr[3][3])
{
    //Loop through rows
    for(int i = 0; i < 3; i++)
    {
        //Loop through columns
        for(int j = 0; j < 3; j++)
        {
            //Read input from user
            std::cout << "Enter element [" << i << "][" << j << "]: ";
            std::cin >> arr[i][j];
        }
    }
}
// Function to find the maximum element in the matrix
int findMaxInMatrix(int arr[3][3])
{
    int maxValue = arr[0][0];
    //Loop through rows
    for(int i = 0; i < 3; i++)
    {
        //Loop through columns
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] > maxValue)
            {
                maxValue = arr[i][j];
            }
        }
    }
    return maxValue;
}
int main()
{
    int arr[3][3];
    //Get input
    getInput(arr);
    //Show result
    std::cout << "Maximum value in the matrix: " <<  findMaxInMatrix(arr) << '\n';
    return 0;
}
