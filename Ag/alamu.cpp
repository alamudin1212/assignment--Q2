#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the number of elements in the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Check if there are enough elements
    if (n < 3) {
        cout << "There should be at least 3 elements to find the second and third largest." << endl;
        return 1; // Exit the program
    }

    // Declare the array
    int arr[n];

    // Input the elements of the array
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize the first, second, and third largest
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    // Loop through the array to find the largest, second largest, and third largest
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second; // Update third largest
            second = first; // Update second largest
            first = arr[i]; // Update largest
        } else if (arr[i] > second && arr[i] != first) {
            third = second; // Update third largest
            second = arr[i]; // Update second largest
        } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i]; // Update third largest
        }
    }

    // Output the results
    cout << "The largest element is: " << first << endl;
    cout << "The second largest element is: " << second << endl;
    cout << "The third largest element is: " << third << endl;

    return 0;
}
