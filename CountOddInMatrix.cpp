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

//Function to count odd numbers in a 3x3 matrix
int countOdd(int arr[3][3])
{
    int count = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        { 
            //Check if the number is odd
            if(arr[i][j] % 2 != 0)
            {
                count++;
            }
        }
    }
    //Return total number of odd numbers
    return count; 
}

int main()
{
    int matrix[3][3];

    //Get elements from user
    getInput(matrix);

    //Count and display the number of odd elements
    std::cout << "Total odd numbers in the matrix: " << countOdd(matrix) << '\n';

    return 0;
}