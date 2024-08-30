#include <iostream>
#include <omp.h>

int main() {
    const int SIZE = 1000000;
    int arr[SIZE];
    long long sum = 0;

    // Initialize the array
    for(int i = 0; i < SIZE; i++) {
        arr[i] = i + 1;
    }

    // Parallel sum calculation
    #pragma omp parallel for reduction(+:sum)
    for(int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }

    std::cout << "Sum of array elements: " << sum << std::endl;
    return 0;
}
