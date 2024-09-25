#ifndef AUTO_H
#define AUTO_H

#include <string>
#include <fstream>
using namespace std;

class Auto {
public:
    // 1. Конструктори (загальні елементи класу)
    Auto();  // Конструктор за замовчуванням
    Auto(string brand, string model, int year, double price_per_day, bool insured);  // Перевантажений конструктор

    // 3. Методи (загальні елементи класу)
    void setPricePerDay(double price);  // Метод для встановлення ціни за день оренди
    double getPricePerDay() const;  // Метод для отримання ціни за день оренди

    void setRentDuration(int duration);  // Метод для встановлення тривалості оренди
    int getRentDuration() const;  // Метод для отримання тривалості оренди

    void displayAutoInfo() const;  // Метод для відображення інформації про автомобіль
    void displaySummary() const;   // Метод для зведеного відображення інформації про автомобіль

    // 4. Методи для запису у файл та читання з файлу
    void saveToFile(ofstream& out);  // Запис інформації про авто у файл
    void loadFromFile(ifstream& in);  // Завантаження інформації про авто з файлу

    // 9. Додатковий метод для виділення випадкової величини динамічної пам'яті
    void allocateAndSortRentDurations(int n);  // Метод для виділення та сортування динамічної пам'яті

private:
    // 2. Приватні елементи класу (5 полів)
    string brand;  // Марка автомобіля
    string model;  // Модель автомобіля
    int year;  // Рік випуску автомобіля
    double price_per_day;  // Ціна оренди за день
    bool insured;  // Чи застрахований автомобіль

    // Додаткові поля
    string license_plate;  // Номерний знак автомобіля
    bool isAvailable;  // Доступність автомобіля
    int damageLevel;  // Рівень пошкодження автомобіля
    int rentDuration;  // Тривалість оренди
};

#endif // AUTO_H
