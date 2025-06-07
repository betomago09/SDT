#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < numbers.length - 1; i++) {
    for (int j = 0; j < numbers.length - i - 1; j++) {
        if (numbers[j] > numbers[j + 1]) {
            int temp = numbers[j];
            numbers[j] = numbers[j + 1];
            numbers[j + 1] = temp;
        }
    }
}
    int arr[5] = {1, 2, 3, 4, 5};
    for(int i : arr) cout << i << " ";
    return 0;
}