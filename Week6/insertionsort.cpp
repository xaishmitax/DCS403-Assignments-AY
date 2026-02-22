#include <iostream>  
using namespace std; 

int main() {
    int n;  // Variable to store the number of elements
    cout << "Enter number of elements: "; 
    cin >> n;  

    int arr[n];  
    cout << "Enter elements:\n";  
    for (int i = 0; i < n; i++) {  
        cin >> arr[i];  
    }
    // Insertion Sort
    for (int i = 1; i < n; i++) {  // Start from the second element (index 1)
        int key = arr[i];  // Store current element as key
        int j = i - 1;     // Initialize j as the index of the previous element

        while (j >= 0 && arr[j] > key) {  // Move elements greater than key one position ahead
            arr[j + 1] = arr[j];  // Shift element to the right
            j--;  // Move to the previous element
        }
        arr[j + 1] = key;  // Place key at its correct sorted position
    }

    cout << "Sorted array:\n";  // Output sorted array
    for (int i = 0; i < n; i++) {  // Loop through the array
        cout << arr[i] << " ";  // Print each element
    }

    return 0;  // Indicate successful program termination
}

