#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

int main() {
    const int size = 10;
    std::vector<int> numbers(size);

    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Fill array with random numbers
    for (int i = 0; i < size; ++i) {
        numbers[i] = std::rand() % 100; // random values from 0 to 99
    }

    std::cout << "Unsorted array:\n";
    for (int num : numbers) std::cout << num << " ";
    std::cout << "\n";

    // Bubble sort
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (numbers[j] > numbers[j + 1]) {
                std::swap(numbers[j], numbers[j + 1]);
            }
        }
    }

    std::cout << "Sorted array:\n";
    for (int num : numbers) std::cout << num << " ";
    std::cout << "\n";

    // Sum of elements
    int sum = 0;
    for (int num : numbers) sum += num;
    std::cout << "Sum of elements: " << sum << "\n";

    return 0;
}
