#include <iostream>
//Constant for array size
const int SIZE{10};
//Max expected value in input (0 to 99)
const int MAX_VALUE{100};
//Function to get input from user
void getInput(int arr[], int size)
{
    std::cout << "Enter " << size << " numbers(from 0 to 99):\n";
    for(int i = 0; i < size; i++)
    {
        std::cout << "Number " << i + 1 << ": ";
        std::cin >> arr[i];

        //Optional: input validation
        while(arr[i] < 0 || arr[i] >= MAX_VALUE)
        {
            std::cout << "Please enter a number between 0 and 99: ";
            std::cin >> arr[i];
        }
    }
}
//Function to find the most frequent number in the array
int findMostFrequent(int arr[], int size)
{
    //Initialize all counts to 0
    int freq[MAX_VALUE] = {0};
    //Count frequency of each number
    for(int i = 0; i < size; i++)
    {
        freq[arr[i]]++;
    }
    //Find the number with the highest frequency
    int maxFreq{0};
    int mostFrequent = arr[0];

    for(int i = 0; i < MAX_VALUE; i++)
    {
        if(freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            mostFrequent = i;
        }
    }
    return mostFrequent;
}
int main()
{
    int numbers[SIZE];

    //Get numbers from user
    getInput(numbers, SIZE);

    //Find and display the most frequent number
    std::cout << "The most frequent number is: " << findMostFrequent(numbers, SIZE) << '\n';

    return 0;
}