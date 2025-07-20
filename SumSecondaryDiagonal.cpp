#include <iostream>

//Function to get input from user
void getInput(int arr[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout << "Enter element [" << i << "][" << j << "]: ";
            std::cin >> arr[i][j];
        }
    }
}
//Function to calculate the sum of the secondary diagonal
int sumSecondaryDiagonal(int arr[3][3])
{
    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
        sum += arr[i][2 - i];
    }
    return sum;
}
int main()
{
    int matrix[3][3];

    //Get matrix input from user
    getInput(matrix);

    //Show the result
    std::cout << "Sum of the secondary diagonal: " << sumSecondaryDiagonal(matrix) << '\n';

    return 0;
}