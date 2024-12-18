#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct rasxod {
    double x;
    string date;
    string category;
    string description;
};

int main() {
    int y;
    setlocale(LC_ALL, "RU");
    vector<rasxod> z;

    while (true) {
        cout << "\nВыберите действие:\n";
        cout << "1. Добавить расход\n";
        cout << "2. Просмотреть все расходы\n";
        cout << "3. Подсчитать общую сумму расходов\n";
        cout << "4. Выход\n";
        cin >> y;
        cin.ignore();

        if (y == 1) {
            rasxod r; 
            cout << "потрачено: " << endl;
            cin >> r.x;
            cin.ignore(); 
            cout << "дата: " << endl;
            getline(cin, r.date);
            cout << "категория: " << endl;
            getline(cin, r.category);
            cout << "описание: " << endl;
            getline(cin, r.description);

            z.push_back(r);
        }
        else if (y == 2) {
            for (const auto& c : z) {
                cout << "Сумма: " << c.x << ", Дата: " << c.date
                    << ", Категория: " << c.category << ", Описание: " << c.description << endl;
            }
        }
        else if (y == 3) {
            double total = 0;
            for (const auto& c : z) {
                total += c.x;
            }
            cout << "Общая сумма расходов: " << total << endl;
        }
        else if (y == 4) {
            break;
        }
        else {
            cout << "Неверный выбор, попробуйте снова." << endl;
        }
    }
    return 0;
}