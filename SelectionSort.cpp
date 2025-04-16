#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    
    vector<int> numbers(size);
    cout << "Enter the elements: ";
    for(int index = 0; index < size; index++) {
        cin >> numbers[index];
    }
    
    for(int i = 0; i < size - 1; i++) {
        int smallestIndex = i;
        for(int j = i + 1; j < size; j++) {
            if(numbers[j] < numbers[smallestIndex]) {
                smallestIndex = j;
            }
        }
        if (smallestIndex != i) {
            int temp = numbers[i];
            numbers[i] = numbers[smallestIndex];
            numbers[smallestIndex] = temp;
        }
    }
    
    cout << "Sorted elements: ";
    for(int index = 0; index < size; index++) {
        cout << numbers[index] << " ";
    }
    cout << endl;

    return 0;
}