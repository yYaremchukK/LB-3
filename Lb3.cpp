#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// 1. Функції sum з перевантаженням
int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

string sum(const string &a, const string &b) {
    return a + b;
}

// 2. Функції min (за значенням та за посиланням)
int minByValue(int a, int b) {
    return (a < b) ? a : b;
}

int minByReference(const int &a, const int &b) {
    return (a < b) ? a : b;
}

// 3. Перевантажені функції area
double area(double side) { // Квадрат
    return side * side;
}

double area(double length, double width) { // Прямокутник
    return length * width;
}

double areaCircle(double radius) { // Коло
    return M_PI * radius * radius;
}

double areaTriangle(double base, double height) { // Трикутник
    return 0.5 * base * height;
}

// 4. Функції swap
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// 5. Рекурсивна функція факторіалу
int factorial(int n, int &result) {
    if (n == 0 || n == 1) {
        result = 1;
        return result;
    }
    result = n * factorial(n - 1, result);
    return result;
}

// 6. Функція для малювання квадрата із зірочок
void drawSquare(int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

// 7. Функція, яка викликає всі інші функції
void callAllFunctions() {
    // Завдання 1
    cout << "1. Перевантаження функції sum:" << endl;
    cout << "Цілі числа: " << sum(3, 5) << endl;
    cout << "Числа з плаваючою точкою: " << sum(3.5, 4.2) << endl;
    cout << "Рядки: " << sum(string("Hello, "), string("world!")) << endl;

    // Завдання 2
    cout << "\n2. Функції min:" << endl;
    int x = 10, y = 20;
    cout << "Мінімальне значення (за значенням): " << minByValue(x, y) << endl;
    cout << "Мінімальне значення (за посиланням): " << minByReference(x, y) << endl;

    // Завдання 3
    cout << "\n3. Перевантаження функції area:" << endl;
    cout << "Площа квадрата зі стороною 4: " << area(4.0) << endl;
    cout << "Площа прямокутника 4x5: " << area(4.0, 5.0) << endl;
    cout << "Площа кола з радіусом 3: " << areaCircle(3.0) << endl;
    cout << "Площа трикутника з основою 4 і висотою 5: " << areaTriangle(4.0, 5.0) << endl;

    // Завдання 4
    cout << "\n4. Функції swap:" << endl;
    int a = 1, b = 2;
    cout << "До обміну: a = " << a << ", b = " << b << endl;
    swapByValue(a, b); // Не впливає на оригінали
    cout << "Після swapByValue (немає ефекту): a = " << a << ", b = " << b << endl;
    swapByReference(a, b);
    cout << "Після swapByReference: a = " << a << ", b = " << b << endl;

    // Завдання 5
    cout << "\n5. Рекурсивна функція факторіалу:" << endl;
    int num = 5, fact = 0;
    factorial(num, fact);
    cout << "Факторіал " << num << " = " << fact << endl;

    // Завдання 6
    cout << "\n6. Малювання квадрата із зірочок:" << endl;
    drawSquare(5);
}

int main() {
    callAllFunctions();
    return 0;
}
