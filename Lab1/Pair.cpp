#include "Pair.h"

void Pair::Init(double price, int quantity)
{
    if (price >= 0 && quantity >= 0) {
        first = price;
        second = quantity;
    }
    else {
        cout << "�������: ���������� �������� ���� ��� ������� ������." << endl;
    }
}

void Pair::Read()
{
    cout << "������ ���� ������: ";
    cin >> first;
    cout << "������ ������� ������� ������: ";
    cin >> second;
}

void Pair::Display()
{
    cout << "ֳ�� ������: " << first << endl;
    cout << "ʳ������ ������� ������: " << second << endl;
}

double Pair::cost()
{
    return first * second;
}
