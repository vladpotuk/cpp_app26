#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include <math.h>

int main() {
    system("chcp 1251");
    system("cls");
    const int months = 12;
    std::vector<double> prybytok(months, 0.0); 

    for (int i = 0; i < months; i++) {
        std::cout << "������ �������� �� ����� " << (i + 1) << ": ";
        std::cin >> prybytok[i];
    }

    int startMonth, endMonth;
    std::cout << "������ ���������� � ������� ����� ��� ������ (��������� : 3  6 ����� �����): ";
    std::cin >> startMonth >> endMonth;

    if (startMonth < 1 || endMonth > months || startMonth > endMonth) {
        std::cerr << "����������� �������." << std::endl;
        return 1; 
    }
    double maxPrybytok = prybytok[startMonth - 1];
    double minPrybytok = prybytok[startMonth - 1];
    int maxMonth = startMonth;
    int minMonth = startMonth;

    for (int i = startMonth; i <= endMonth; i++) {
        if (prybytok[i - 1] > maxPrybytok) {
            maxPrybytok = prybytok[i - 1];
            maxMonth = i;
        }
        if (prybytok[i - 1] < minPrybytok) {
            minPrybytok = prybytok[i - 1];
            minMonth = i;
        }
    }
    std::cout << "̳���� � ������������ ��������� � �������� �������: " << maxMonth << " (" << maxPrybytok << ")\n";
    std::cout << "̳���� � ��������� ��������� � �������� �������: " << minMonth << " (" << minPrybytok << ")\n";

    return 0;
}
