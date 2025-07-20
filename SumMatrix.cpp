#include <iostream>

//Function to get input from the user and fill the 3x3 matrix
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
//Function to calculate the sum of all elements in the matrix
int sumMatrix(int arr[3][3])
{
    int sum = 0;
    //Loop through rows
    for(int i = 0; i < 3; i++)
    {
        //Loop through columns
        for(int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
    }
     //Return the total sum
    return sum;
}
int main()
{
    int arr[3][3];
    //Call function to fill the matrix
    getInput(arr);

    //Call function to calculate sum and print the result
    std::cout << "Sum of all elements in the matrix: " << sumMatrix(arr) << '\n';

    return 0;
}