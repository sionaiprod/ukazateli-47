#include <iostream>
using namespace std;

int main() {

    const int SIZE = 5;
    int arr[SIZE]{4, 55, 78, 44, 32};

    for (int i =0; i<SIZE; i++){
        cout << arr[i] << endl;
    }

    cout << "---------------------" << endl;
    int *pArr = arr;// arr - ссылка на первый элемент массива 

    cout << "arr = " << arr << endl;
    cout << "pArr = " << pArr << endl;
    cout << "*pArr = " << *pArr << endl;

    cout << "---------------------" << endl;
    for (int i =0; i<SIZE; i++){
        cout << pArr[i] << endl;
    }

    cout << "---------------------" << endl; 
    cout << *arr << endl;// первый элемент массива

    cout << "---------------------" << endl;
    cout << *(arr + 1) << endl;// второй элемент массива (+4 байта)

    cout << "---------------------" << endl;
    for (int i =0; i<SIZE; i++){
        cout << *(pArr+i) << endl;
    }

    cout << "---------------------" << endl;
    cout << *(arr + 10) << endl; // рандомная ячейка и её значение 5

    return 0;
}