#include <iostream>
#include <stdlib.h>

void fillRandom(int arr[], const int size, const char* const comment);
void print(const int arr[], const int size, const char* const comment);
void reverse(int arr[], const int size);


int main() {   
    const int size = 20;
    int arr[size];
    fillRandom(arr, size, "Исходный массив:");
    reverse(arr, size);
    print(arr, size, "Перевернутый массив:");

    return 0;
}

void fillRandom(int arr[], const int size, const char* const comment) {
    std::cout << comment << ' ';
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % size;
        std::cout << arr[i] << ' ';
        
    }
    std::cout << std::endl;
}

void print(const int arr[], const int size, const char* const comment)
{
    std::cout << comment << ' ';
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

void reverse(int arr[], const int size)
{   
    int temp;
    for (int i = 0; i < size/2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
