#include <iostream>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // Return the index of the target if found
        }
    }
    return -1;  // Return -1 if the target is not found
}

int main() {
    int arr[] = {12, 34, 55, 6, 87, 99, 102};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 87;

    int result = linearSearch(arr, n, target);

    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found in the array" << std::endl;
    }

    return 0;
}
