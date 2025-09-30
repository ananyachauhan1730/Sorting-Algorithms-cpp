#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int A[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Start from the second element (index 1)
    for (int i = 1; i < n; i++) {
        // Set key = A[i] (the element to be inserted)
        int key = A[i];

        // Initialize j = i - 1
        int j = i - 1;

        // Compare key with each element in the sorted portion (A[0..i-1])
        while (j >= 0 && A[j] > key) {
            // Move A[j] one position to the right
            A[j + 1] = A[j];

            // Decrement j by 1
            j = j - 1;
        }

        // Insert key at its correct position
        A[j + 1] = key;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
