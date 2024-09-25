#include "Auto.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // 5. ��������� ��'���� � �������� ���'��
    Auto car1("Toyota", "Corolla", 2020, 50.0, true);
    Auto car2("BMW", "X5", 2018, 100.0, false);
    Auto car3("Honda", "Civic", 2019, 45.0, true);
    Auto car4("Ford", "Focus", 2017, 40.0, false);
    Auto car5("Audi", "A4", 2021, 80.0, true);

    // 5. ��������� ��'���� � �������� ���'��
    Auto* car6 = new Auto("Mercedes", "C-Class", 2019, 120.0, true);
    Auto* car7 = new Auto("Tesla", "Model 3", 2022, 150.0, false);
    Auto* car8 = new Auto("Chevrolet", "Cruze", 2016, 35.0, false);
    Auto* car9 = new Auto("Nissan", "Leaf", 2020, 60.0, true);
    Auto* car10 = new Auto("Volkswagen", "Golf", 2018, 55.0, false);

    // 8. ������������ ������ � ��'������
    // ��������� ���������� ��� �������� � �������� ���'��
    car1.displayAutoInfo();
    // ��������� ���������� ��� �������� � �������� ���'�� (����� ��������)
    car6->displayAutoInfo();

    // �������� ���� ���������� ��� ��������
    car2.displaySummary();
    car10->displaySummary();

    // 4. ����� ���������� � ����
    ofstream outFile("cars.txt");
    if (outFile.is_open()) {
        car1.saveToFile(outFile);
        car2.saveToFile(outFile);
        outFile.close();
    }

    // 4. ������� ���������� � �����
    ifstream inFile("cars.txt");
    if (inFile.is_open()) {
        Auto loadedCar;
        loadedCar.loadFromFile(inFile);
        loadedCar.displayAutoInfo();
        inFile.close();
    }

    // 9. ������������ ������ � ��������� ���'���� (�������� ��������� ������)
    car6->allocateAndSortRentDurations(5);

    // 6. ��������� �������� ���'��
    delete car6;
    delete car7;
    delete car8;
    delete car9;
    delete car10;

    return 0;
}
