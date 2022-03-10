//
//  main.cpp
//  Сортировка
//
//  Created by Diana Ovechkina on 03.03.2022.
//

#include <iostream>
using namespace std;

void bubble() {
   
    int N;
    
    cout << "Введите количество элементов: ";
    cin >> N;
    
    int a[N];
    
    for (int i = 0; i < N; i++) {
        cout << i + 1 << ": ";
        cin >> a[i];
    }
    
    cout << "Исходный массив: ";
    for(int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    for(int i = 1; i < N; i++) {
        for(int j = 0; j < N - i; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    
    cout << "Отсортированный массив: ";
    for(int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insert() {
    int N;
    
    cout << "Введите количество элементов: ";
    cin >> N;
    
    int a[N];
    
    for (int i = 0; i < N; i++) {
        cout << i + 1 << ": ";
        cin >> a[i];
    }
    
    cout << "Исходный массив: ";
    for(int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    for(int i = 1; i < N; i++) {
        for(int j = i; j > 0 && a[j - 1] > a[j]; j--) {
                swap(a[j - 1], a[j]);
        }
    }
    
    
    cout << "Отсортированный массив: ";
    for(int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}



int main(int argc, const char * argv[]) {
   
    bubble();
    insert();
    return 0;
}
