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
//Function to print sum of each row
void printRowSums(int arr[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        int rowSum = 0;
        for(int j = 0; j < 3; j++)
        {
            rowSum += arr[i][j];
        }
        std::cout << "Sum of row " << i << ": " << rowSum << '\n';
    }
}
int main()
{
    int matrix[3][3];

    //Get from user
    getInput(matrix);

    //Print sum of each row
    printRowSums(matrix);

    return 0;
}