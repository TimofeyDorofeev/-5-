#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;

    int day = 1;              // первый день уже наступил
    double current = X;       // сумма в текущий день

    // Пока не достигли порога Y, переходим к следующему дню
    while (current < Y) {
        current *= 1.10;      // увеличиваем на 10%
        day += 1;                // переходим к следующему дню
    }

    cout << day << endl;
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;

    int day = 1;              // начинаем с 1-го дня
    double current = X;       // в первый день отмыто X тысяч рублей

    // Пока текущая сумма строго меньше Y, переходим к следующему дню
    while (current < Y) {
        current *= 1.10;      // увеличиваем сумму на 10%
        day += 1;                // переходим к следующему дню
    }

    cout << day << endl;      // выводим номер дня, когда current >= Y
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;

    int day = 1;
    double current = X;

    do {
        current *= 1.10;
        day++;
    } while (current < Y);

    cout << day << endl;
    return 0;
}



#include <iostream>
using namespace std;

// Функция, которая считает день рекурсивно
int findDay(double current, double Y, int day) {
    // Если текущая сумма уже >= порога, возвращаем текущий день
    if (current >= Y) {
        return day;
    }
    // Иначе увеличиваем сумму на 10% и день на 1, и вызываем функцию снова
    return findDay(current * 1.10, Y, day + 1);
}

int main() {
    double X, Y;
    cin >> X >> Y;

    // Запускаем рекурсивную функцию с начальными значениями
    int result = findDay(X, Y, 1);

    cout << result << endl;
    return 0;
}





    