#include <iostream>

void my_sort(int *arr, const int size);

int main() {
    setlocale(LC_ALL, "Russian"); //чтобы русский текст в консоли работал

    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Размер должен быть положительным.\n";
        return 1;
    }

    int *arr = new int[size];

    std::cout << "Введите " << size << " элементов массива:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "arr[" << i << "] = ";
        std::cin >> arr[i];
    }

    //вывод исходного массива
    std::cout << "\nИсходный массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    //сортировка
    my_sort(arr, size);

    //вывод отсортированного массива
    std::cout << "Отсортированный массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    delete[] arr;
    return 0;
}

void my_sort(int *arr, const int size) {
    //сортировка пузырьком
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}