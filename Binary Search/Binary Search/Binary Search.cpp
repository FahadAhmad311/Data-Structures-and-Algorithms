#include<iostream>
using namespace std;

int binarySearch(int num[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; 

        if (num[mid] == target) {
            return mid; 
        }
        else if (num[mid] > target) {
            right = mid - 1; 
        }
        else {
            left = mid + 1; 
        }
    }

    return -1; 
}

int main() {
    int num[] = { 1, 2, 4, 5, 7, 9, 12, 45, 67, 87 };
    int size = sizeof(num) / sizeof(int);
    int target = 7;

    int result = binarySearch(num, size, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    return 0;
}
