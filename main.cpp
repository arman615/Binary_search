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
    std::vector<int> vec = {64, 34, 25, 12, 22, 11, 90};  
    int target = 23;
    std::cout << binarySearch(vec, target);
}
 
