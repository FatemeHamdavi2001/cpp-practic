#include <iostream>

//Function to get input from user for a 3x3 matrix
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
//Function to check if the matrix is diagonal
bool isDiagonalMatrix(int arr[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        { 
            //If outside the main diagonal and not zero
            if(i != j && arr[i][j] != 0)
            {
                //It's not diagonal
                return false;
            }
        }
    }
    //All non-diagonal elements are zero
    return true;
}
int main()
{
    int matrix[3][3];
    //Get input from user
    getInput(matrix);

    //Check and show result
    if(isDiagonalMatrix(matrix))
    {
        std::cout << "The matrix is diagonal.\n";
    }
    else
    {
        std::cout << "The matrix is NOT diagonal.\n";
    }

    return 0;
}