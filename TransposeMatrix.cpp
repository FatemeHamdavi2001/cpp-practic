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
//Function to calculate transpose of a matrix
void transposeMatrix(int input[3][3], int output[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            output[j][i] = input[i][j];
        }
    }
}
//Function to print a matrix
void printMatrix(int arr[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout << arr[i][j] << '\t';
        }
        std::cout << '\n';
    }
}
int main()
{
    int matrix[3][3];
    int transposed[3][3];

    //Get user input
    getInput(matrix);
    //Calculate transpose
    transposeMatrix(matrix, transposed);

    //Print original matrix
    std::cout << "\nOriginal Matrix:\n";
    printMatrix(matrix);

    //Print transposed matrix
    std::cout << "\nTransposed Matrix:\n";
    printMatrix(transposed);

    return 0;
}