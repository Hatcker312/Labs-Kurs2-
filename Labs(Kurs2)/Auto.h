#ifndef AUTO_H
#define AUTO_H

#include <string>
#include <fstream>
using namespace std;

class Auto {
public:
    // 1. ������������ (������� �������� �����)
    Auto();  // ����������� �� �������������
    Auto(string brand, string model, int year, double price_per_day, bool insured);  // �������������� �����������

    // 3. ������ (������� �������� �����)
    void setPricePerDay(double price);  // ����� ��� ������������ ���� �� ���� ������
    double getPricePerDay() const;  // ����� ��� ��������� ���� �� ���� ������

    void setRentDuration(int duration);  // ����� ��� ������������ ��������� ������
    int getRentDuration() const;  // ����� ��� ��������� ��������� ������

    void displayAutoInfo() const;  // ����� ��� ����������� ���������� ��� ���������
    void displaySummary() const;   // ����� ��� ��������� ����������� ���������� ��� ���������

    // 4. ������ ��� ������ � ���� �� ������� � �����
    void saveToFile(ofstream& out);  // ����� ���������� ��� ���� � ����
    void loadFromFile(ifstream& in);  // ������������ ���������� ��� ���� � �����

    // 9. ���������� ����� ��� �������� ��������� �������� �������� ���'��
    void allocateAndSortRentDurations(int n);  // ����� ��� �������� �� ���������� �������� ���'��

private:
    // 2. ������� �������� ����� (5 ����)
    string brand;  // ����� ���������
    string model;  // ������ ���������
    int year;  // г� ������� ���������
    double price_per_day;  // ֳ�� ������ �� ����
    bool insured;  // �� ������������� ���������

    // �������� ����
    string license_plate;  // �������� ���� ���������
    bool isAvailable;  // ���������� ���������
    int damageLevel;  // г���� ����������� ���������
    int rentDuration;  // ��������� ������
};

#endif // AUTO_H
