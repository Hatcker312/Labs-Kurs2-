#include "Auto.h"
#include <iostream>
#include <algorithm> // для сортування
#include <cstdlib> // для випадкових значень
using namespace std;

// Конструктор за замовчуванням
Auto::Auto() : brand("Unknown"), model("Unknown"), year(0), price_per_day(0.0), insured(false), isAvailable(true), damageLevel(0), rentDuration(0) {}

// 3. Перевантажений конструктор
Auto::Auto(string brand, string model, int year, double price_per_day, bool insured)
    : brand(brand), model(model), year(year), price_per_day(price_per_day), insured(insured), isAvailable(true), damageLevel(0), rentDuration(0) {}

// 3. Метод для встановлення ціни за день оренди
void Auto::setPricePerDay(double price) {
    price_per_day = price;
}

// 3. Метод для отримання ціни за день оренди
double Auto::getPricePerDay() const {
    return price_per_day;
}

// Метод для встановлення тривалості оренди
void Auto::setRentDuration(int duration) {
    rentDuration = duration;
}

// Метод для отримання тривалості оренди
int Auto::getRentDuration() const {
    return rentDuration;
}

// 3. Метод для відображення інформації про автомобіль
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

// 3. Метод для зведеного відображення інформації про автомобіль
void Auto::displaySummary() const {
    cout << "Car: " << brand << " " << model << " | Year: " << year << " | Price per day: $" << price_per_day
        << " | Available: " << (isAvailable ? "Yes" : "No") << endl;
}

// 4. Метод для запису інформації у файл
void Auto::saveToFile(ofstream& out) {
    out << brand << endl << model << endl << year << endl << price_per_day << endl << insured << endl;
}

// 4. Метод для завантаження інформації з файлу
void Auto::loadFromFile(ifstream& in) {
    in >> brand >> model >> year >> price_per_day >> insured;
}

// 9. Метод для виділення динамічної пам'яті та сортування значень тривалості оренди
void Auto::allocateAndSortRentDurations(int n) {
    // 9. Виділення пам'яті під масив
    int* durations = new int[n];
    cout << "Random durations: ";

    // Заповнення випадковими значеннями
    for (int i = 0; i < n; ++i) {
        durations[i] = rand() % 30 + 1; // випадкові значення від 1 до 30
        cout << durations[i] << " ";
    }

    cout << "\nSorted durations: ";
    // Сортування масиву
    sort(durations, durations + n);
    for (int i = 0; i < n; ++i) {
        cout << durations[i] << " ";
    }
    cout << endl;

    // 9. Звільнення динамічної пам'яті
    delete[] durations;
}
