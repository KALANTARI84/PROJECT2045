#include <iostream>

using namespace std;

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[], int& mergedSize) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArray[k] = arr1[i];
            i++;
        } else {
            mergedArray[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        mergedArray[k] = arr1[i];
        i++;
        k++;
    }

    while (j < size2) {
        mergedArray[k] = arr2[j];
        j++;
        k++;
    }

    mergedSize = k;}

int recursiveSum(int arr[], int size, int index = 0) {
    if (index >= size) {
        return 0;
    }
    return arr[index] + recursiveSum(arr, size, index + 1);
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedSize = size1 + size2;
    int mergedArray[mergedSize];

    mergeSortedArrays(arr1, size1, arr2, size2, mergedArray, mergedSize);

    cout << "Merged Array: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    int sum = recursiveSum(mergedArray, mergedSize);
    cout << "Sum of Merged Array: " << sum << endl;

    return 0;
}
