#include <iostream>
#include <vector>

// Binary Search Algorithm
int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0; // O(1)
    int right = arr.size() - 1; // O(1)

    // Continue searching until the left pointer exceeds the right pointer
    while (left <= right) { // O(log n)
        // Calculate the middle index
        int mid = left + (right - left) / 2; // O(1)

        // Check if the middle element is the target
        if (arr[mid] == target) {
            return mid; // Target found, return its index - O(1)
        } else if (arr[mid] < target) {
            left = mid + 1; // Adjust left pointer to search in the right half - O(1)
        } else {
            right = mid - 1; // Adjust right pointer to search in the left half - O(1)
        }
    }

    return -1; // Target not found - O(1)
}





int main() {
    std::vector<int> sortedArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // O(1)
    int target = 7; // O(1)

    // Perform binary search
    int result = binarySearch(sortedArray, target); // O(log n)

    // Display the result
    if (result != -1) {
        std::cout << "Target " << target << " found at index " << result << std::endl; // O(1)
    } else {
        std::cout << "Target " << target << " not found in the array." << std::endl; // O(1)
    }

    return 0; // O(1)
}