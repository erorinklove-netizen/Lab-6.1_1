// Lab 6.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Якимів Наталія
// Варіант 7
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

// --- Функції ---
void fillArray(int arr[], int size, int low, int high)
{
    for (int i = 0; i < size; i++)
        arr[i] = low + rand() % (high - low + 1);
}

void printArray(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(5) << arr[i];
    cout << endl;
}

// Перевірка критерію: непарний і кратний 3
bool isOddAndMultipleOf3(int x)
{
    return (x % 2 != 0) && (x % 3 == 0);
}

int countMatching(const int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
        if (isOddAndMultipleOf3(arr[i]))
            count++;
    return count;
}

int sumMatching(const int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        if (isOddAndMultipleOf3(arr[i]))
            sum += arr[i];
    return sum;
}

void replaceMatchingWithZero(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        if (isOddAndMultipleOf3(arr[i]))
            arr[i] = 0;
}

// --- Головна програма ---
int main()
{
    srand(time(NULL));

    const int SIZE = 21;
    int b[SIZE];

    fillArray(b, SIZE, 10, 90);

    cout << "Початковий масив:" << endl;
    printArray(b, SIZE);

    int count = countMatching(b, SIZE);
    int sum = sumMatching(b, SIZE);

    replaceMatchingWithZero(b, SIZE);

    cout << "\nКількість = " << count << endl;
    cout << "Сума = " << sum << endl;

    cout << "\nМодифікований масив:" << endl;
    printArray(b, SIZE);

    return 0;
}

