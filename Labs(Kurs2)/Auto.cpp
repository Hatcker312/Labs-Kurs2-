#include "Auto.h"
#include <iostream>
#include <algorithm> // ��� ����������
#include <cstdlib> // ��� ���������� �������
using namespace std;

// ����������� �� �������������
Auto::Auto() : brand("Unknown"), model("Unknown"), year(0), price_per_day(0.0), insured(false), isAvailable(true), damageLevel(0), rentDuration(0) {}

// 3. �������������� �����������
Auto::Auto(string brand, string model, int year, double price_per_day, bool insured)
    : brand(brand), model(model), year(year), price_per_day(price_per_day), insured(insured), isAvailable(true), damageLevel(0), rentDuration(0) {}

// 3. ����� ��� ������������ ���� �� ���� ������
void Auto::setPricePerDay(double price) {
    price_per_day = price;
}

// 3. ����� ��� ��������� ���� �� ���� ������
double Auto::getPricePerDay() const {
    return price_per_day;
}

// ����� ��� ������������ ��������� ������
void Auto::setRentDuration(int duration) {
    rentDuration = duration;
}

// ����� ��� ��������� ��������� ������
int Auto::getRentDuration() const {
    return rentDuration;
}

// 3. ����� ��� ����������� ���������� ��� ���������
void Auto::displayAutoInfo() const {
    cout << "===========================" << endl;
    cout << "  Car Information: " << endl;
    cout << "===========================" << endl;
    cout << " Brand:          " << brand << endl;
    cout << " Model:          " << model << endl;
    cout << " Year:           " << year << endl;
    cout << " Price per day:  $" << price_per_day << endl;
    cout << " Insured:        " << (insured ? "Yes" : "No") << endl;
    cout << " Available:      " << (isAvailable ? "Yes" : "No") << endl;
    cout << " Damage Level:   " << damageLevel << endl;
    cout << " Rent Duration:  " << rentDuration << " days" << endl;
    cout << "===========================\n" << endl;
}

// 3. ����� ��� ��������� ����������� ���������� ��� ���������
void Auto::displaySummary() const {
    cout << "Car: " << brand << " " << model << " | Year: " << year << " | Price per day: $" << price_per_day
        << " | Available: " << (isAvailable ? "Yes" : "No") << endl;
}

// 4. ����� ��� ������ ���������� � ����
void Auto::saveToFile(ofstream& out) {
    out << brand << endl << model << endl << year << endl << price_per_day << endl << insured << endl;
}

// 4. ����� ��� ������������ ���������� � �����
void Auto::loadFromFile(ifstream& in) {
    in >> brand >> model >> year >> price_per_day >> insured;
}

// 9. ����� ��� �������� �������� ���'�� �� ���������� ������� ��������� ������
void Auto::allocateAndSortRentDurations(int n) {
    // 9. �������� ���'�� �� �����
    int* durations = new int[n];
    cout << "Random durations: ";

    // ���������� ����������� ����������
    for (int i = 0; i < n; ++i) {
        durations[i] = rand() % 30 + 1; // �������� �������� �� 1 �� 30
        cout << durations[i] << " ";
    }

    cout << "\nSorted durations: ";
    // ���������� ������
    sort(durations, durations + n);
    for (int i = 0; i < n; ++i) {
        cout << durations[i] << " ";
    }
    cout << endl;

    // 9. ��������� �������� ���'��
    delete[] durations;
}
