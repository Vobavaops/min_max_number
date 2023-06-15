#include <iostream>

int main() {
    int n;
    std::cout << "Введите количество чисел: ";
    std::cin >> n;
    
    int min, max, num;
    std::cout << "Введите число 1: ";
    std::cin >> num;
    
    min = max = num;  // Первое число считаем и минимальным, и максимальным
    
    for (int i = 2; i <= n; i++) {
        std::cout << "Введите число " << i << ": ";
        std::cin >> num;
        
        if (num < min) {
            min = num;  // Найдено новое минимальное значение
        }
        
        if (num > max) {
            max = num;  // Найдено новое максимальное значение
        }
    }
    
    std::cout << "Минимальное значение: " << min << std::endl;
    std::cout << "Максимальное значение: " << max << std::endl;
    
    return 0;
}
