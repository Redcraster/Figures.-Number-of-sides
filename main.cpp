#include <iostream>

// Базовый класс для фигуры
class Figure {
protected:
    int sides_count;  // Количество сторон
    std::string name; // Название фигуры

    // Защищенный конструктор, доступный только для наследников
    Figure(int sides, const std::string& name) : sides_count(sides), name(name) {}

public:
    // Конструктор по умолчанию
    Figure() : sides_count(0), name("Фигура") {}

    // Метод для получения количества сторон
    int get_sides_count() const {
        return sides_count;
    }

    // Метод для получения названия фигуры
    std::string get_name() const {
        return name;
    }
};

// Класс для треугольника, наследует Figure
class Triangle : public Figure {
public:
    // Конструктор для треугольника
    Triangle() : Figure(3, "Треугольник") {}
};

// Класс для четырёхугольника, наследует Figure
class Quadrangle : public Figure {
public:
    // Конструктор для четырёхугольника
    Quadrangle() : Figure(4, "Четырёхугольник") {}
};

int main() {
    Figure figure;           // Неопределённая фигура
    Triangle triangle;       // Треугольник
    Quadrangle quadrangle;   // Четырёхугольник

    std::cout << figure.get_name() << ": " << figure.get_sides_count() << std::endl;
    std::cout << triangle.get_name() << ": " << triangle.get_sides_count() << std::endl;
    std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << std::endl;

    return 0;
}