// Algorithm for Finding the Minimum Value in C++

#include <iostream>

using namespace std;

int main()
{
    // Declare and initialize an integer array
    int array[] = {1, -2, 3, -4, 5, -6, 7, -8, 9, -10};

    // Calculate the total number of elements in the array
    int size = sizeof(array) / sizeof(array[0]);

    // Assume the first element is the minimum value initially
    int min = array[0];

    // Iterate through the array to check every element
    for (int i = 0; i < size; i++)
    {
        // Compare the current element with the minimum value
        if (min > array[i])
        {
            // Update min if the current element is smaller
            min = array[i];
        }
    }

    // Display the smallest element found in the array
    cout << "Minimum: " << min << endl;

    return 0; // Indicate successful program execution
}
