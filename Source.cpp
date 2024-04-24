//#include <iostream>
//
//int main() 
//{
//    setlocale(LC_ALL, "ru");
//    int a;
//    long long result = 1;
//
//    std::cout << "Введите целое число a (1 <= a <= 20): ";
//    std::cin >> a;
//
//    if (a < 1 || a > 20) {
//        std::cout << "Ошибка: введенное число не входит в диапазон от 1 до 20" << std::endl;
//        return 1;
//    }
//
//    for (int i = a; i <= 20; ++i) {
//        result *= i;
//    }
//
//    std::cout << "Произведение всех целых чисел от " << a << " до 20 равно: " << result << std::endl;
//
//    return 0;
//}

#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    int k;

    std::cout << "Введите номер варианта: ";
    std::cin >> k;

    for (int i = 2; i <= 10; i++) {
        std::cout << k << " x " << i << " = " << k * i << std::endl;
    }

    return 0;
}