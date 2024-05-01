// Який тип змінної був правильним для зберігання наступної інформації?
// Для зберігання інформації про ваш вік можна використати беззнаковий цілочисельний тип даних, такий як unsigned int, оскільки вік не може бути від'ємним числом.
// Для площі вашого заднього двору, як числового значення, можна використати тип даних float або int, залежно від потреб та точності.
// Для кількості зірок у галактиці, яка може бути великою числовою величиною, можна використати тип даних unsigned long long, якщо потрібно зберігати дуже велике значення.
// Щодо середнього рівня випадання опадів за січень, який зазвичай має десяткову частину, можна використати тип даних float або double для зберігання значення з плаваючою комою.
// 2. Створіть відповідні імена змінних для збереження цієї інформації.
// Мій Вік
// Площа Заднього Двору
// Зірок У Галактиці
// Середньомісячний Рівень Опадів
// Змінні для збереження інформації
// #include <iostream>
//
// int main() {
//     // Змінні для збереження інформації
//     int myAge = 30; // Мій вік
//     int backyardArea = 1000; // Площа заднього двору (у квадратних метрах)
//     long long starsInGalaxy = 1000000000; // Кількість зірок у галактиці
//     float averageMonthlyPrecipitation = 50.5; // Середньомісячний рівень опадів (у мм)
//
//     // Виведення значень змінних
//     std::cout << "Мій вік: " << myAge << std::endl;
//     std::cout << "Площа заднього двору: " << backyardArea << " кв. м" << std::endl;
//     std::cout << "Кількість зірок у галактиці: " << starsInGalaxy << std::endl;
//     std::cout << "Середньомісячний рівень опадів: " << averageMonthlyPrecipitation << " мм" << std::endl;
//
//     return 0;
// }
// 3.Оголосіть константу для числа рі, що дорівнює 3.14159
// #include <iostream>
//
// const double PI = 3.14159; // Оголошення константи для числа π
//
// int main() {
//     std::cout << "Значення константи PI: " << PI << std::endl;
//
//     return 0;
// }
// 4. Оголосіть змінну типу float та ініціалізуйте її, використовуючи константу рі.
#include <iostream>

const double PI = 3.14159; // Оголошення константи для числа π

int main() {
    float radius = 5.0; // Оголошення та ініціалізація змінної типу float
    float circleArea = PI * radius * radius; // Обчислення площі кола з використанням константи PI та радіуса

    std::cout << "Радіус кола: " << radius << std::endl;
    std::cout << "Площа кола: " << circleArea << std::endl;

    return 0;
}
