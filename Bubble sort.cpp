#include <iostream>
using namespace std;

// Function to swap two numbers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int elements;
    cout << "How many elements in the array? ";
    cin >> elements;

    int array[elements];
    cout << "Enter elements:\n";
    for (int i = 0; i < elements; i++) {
        cin >> array[i];
    }

    // Bubble Sort
    int n = 0;
    while (n != elements) {
        for (int i = 0; i < elements - n - 1; i++) {
            if (array[i] > array[i + 1]) {
                swap(&array[i], &array[i + 1]);
            }
        }
        n++;
    }

    cout << "\nSorted array is:\n";
    for (int i = 0; i < elements; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
