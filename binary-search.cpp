#include <iostream>

int binarySearch(int array [], int arrayLength, int target) {
    int low = 0;
    int high = arrayLength - 1;

    while (low <= high) {
        int middle = (low + high) / 2;

        if (array[middle] == target) {
            return middle;
        } else if (array[middle] < target) {
            low = middle + 1;
        } else {
            high = middle - 1;
        }
    }

     return 0;
}

int main () { 
    int array [] = { 1, 5, 10, 15, 20, 25, 30, 35, 40, 50 };
    int arrayLength = sizeof(array) / sizeof(array[0]);

    std::cout << binarySearch(array, arrayLength, 25) << std::endl;
}