#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& vec, int target) {
    int left = 0;
    int right = vec.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (vec[mid] == target) {
            return mid;
        } else if (vec[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    std::vector<int> vec = {11, 22, 33, 44, 55, 66, 77};  
    int target = 22;
    int result = binarySearch(vec, target);
    if (result != -1) {
        std::cout << "Target found at index: " << result << std::endl;
    } else {
        std::cout << "Target not found in the vector." << std::endl;
    }
}
 
