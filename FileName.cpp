#include <iostream>
#include <windows.h>
#include <stdexcept> 

class LinearEquation {
private:
    double first;  
    double second; 

public:

    LinearEquation(double a, double b) : first(a), second(b) {}

    
    double root() {
        if (first == 0) {
            throw std::runtime_error("Коефіцієнт A не може дорівнювати нулю (рівняння не має розв'язку).");
        }
        return -second / first;
    }


    void print() {
        std::cout << "Рівняння: y = " << first << " * x + " << second << std::endl;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    try {
        LinearEquation eq(2, -4);
        eq.print();
        std::cout << "Корінь рівняння: x = " << eq.root() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Помилка: " << e.what() << std::endl;
    }

    return 0;
}