#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // swap arr[i] and arr[minIndex]
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int no_el;
    cout << "How many elements in your array? ";
    cin >> no_el;

    int arr[100];   // maximum size, you can adjust
    cout << "Enter " << no_el << " elements: ";
    for (int i = 0; i < no_el; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, no_el);

    cout << "Sorted Array: ";
    for (int i = 0; i < no_el; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
