#include "Pair.h"

void Pair::Init(double price, int quantity)
{
    if (price >= 0 && quantity >= 0) {
        first = price;
        second = quantity;
    }
    else {
        cout << "Помилка: Неправильні значення ціни або кількості товару." << endl;
    }
}

void Pair::Read()
{
    cout << "Введіть ціну товару: ";
    cin >> first;
    cout << "Введіть кількість одиниць товару: ";
    cin >> second;
}

void Pair::Display()
{
    cout << "Ціна товару: " << first << endl;
    cout << "Кількість одиниць товару: " << second << endl;
}

double Pair::cost()
{
    return first * second;
}
