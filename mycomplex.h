#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_

#include <iostream>
using namespace std;

/**
 * @class Complex
 * @brief Класс для представления и работы с комплексными числами.
 *
 * Этот класс предоставляет функционал для выполнения арифметических операций
 * над комплексными числами, включая сложение, вычитание, умножение, деление и другие.
 * Также имеются методы для установки значений и вычисления модуля комплексного числа.
 */
class Complex {
    double Re; ///< Вещественная часть комплексного числа
    double Im; ///< Мнимая часть комплексного числа

public:
    /**
     * @brief Конструктор, инициализирующий комплексное число.
     *
     * @param aRe Вещественная часть комплексного числа (по умолчанию 0)
     * @param aIm Мнимая часть комплексного числа (по умолчанию 0)
     */
    Complex(double aRe = 0, double aIm = 0);

    /**
     * @brief Конструктор копирования.
     *
     * @param aRval Комплексное число, которое необходимо скопировать
     */
    Complex(const Complex& aRval);

    /**
     * @brief Деструктор.
     * Сбрасывает вещественную и мнимую части на 0.
     */
    ~Complex();

    /**
     * @brief Устанавливает новые значения для вещественной и мнимой частей.
     *
     * @param aRe Вещественная часть
     * @param aIm Мнимая часть (по умолчанию 0)
     */
    void Set(double aRe, double aIm = 0);

    /**
     * @brief Оператор приведения к типу double.
     * Возвращает модуль комплексного числа.
     *
     * @return Модуль комплексного числа.
     */
    operator double();

    /**
     * @brief Вычисляет модуль комплексного числа.
     *
     * @return Модуль комплексного числа.
     */
    double abs();

    /**
     * @brief Оператор ввода комплексного числа.
     *
     * @param stream Поток ввода
     * @param a Комплексное число
     * @return Поток ввода
     */
    friend istream& operator>>(istream& stream, Complex& a);

    /**
     * @brief Оператор вывода комплексного числа.
     *
     * @param stream Поток вывода
     * @param a Комплексное число
     * @return Поток вывода
     */
    friend ostream& operator<<(ostream& stream, Complex& a);

    /**
     * @brief Оператор сложения двух комплексных чисел.
     *
     * @param aRval Комплексное число, которое нужно добавить
     * @return Результат сложения
     */
    Complex operator+(const Complex& aRval);

    /**
     * @brief Оператор вычитания двух комплексных чисел.
     *
     * @param aRval Комплексное число, которое нужно вычесть
     * @return Результат вычитания
     */
    Complex operator-(const Complex& aRval);

    /**
     * @brief Оператор сложения комплексного числа и числа типа double.
     *
     * @param aRval Число типа double
     * @return Результат сложения
     */
    Complex operator+(const double& aRval);

    /**
     * @brief Оператор сложения числа типа double и комплексного числа.
     *
     * @param aLval Число типа double
     * @param aRval Комплексное число
     * @return Результат сложения
     */
    friend Complex operator+(const double& aLval, const Complex& aRval);

    /**
     * @brief Оператор вычитания числа типа double из комплексного числа.
     *
     * @param aRval Число типа double
     * @return Результат вычитания
     */
    Complex operator-(const double& aRval);

    /**
     * @brief Оператор вычитания числа типа double из комплексного числа (обратный порядок).
     *
     * @param aLval Число типа double
     * @param aRval Комплексное число
     * @return Результат вычитания
     */
    friend Complex operator-(const double& aLval, const Complex& aRval);

    /**
     * @brief Оператор умножения двух комплексных чисел.
     *
     * @param aRval Комплексное число, с которым нужно умножить
     * @return Результат умножения
     */
    Complex operator*(const Complex& aRval);

    /**
     * @brief Оператор умножения комплексного числа на число типа double.
     *
     * @param aRval Число типа double
     * @return Результат умножения
     */
    Complex operator*(const double& aRval);

    /**
     * @brief Оператор умножения числа типа double на комплексное число.
     *
     * @param aLval Число типа double
     * @param aRval Комплексное число
     * @return Результат умножения
     */
    friend Complex operator*(const double& aLval, const Complex& aRval);

    /**
     * @brief Оператор деления комплексного числа на число типа double.
     *
     * @param aRval Число типа double
     * @return Результат деления
     */
    Complex operator/(const double& aRval);

    /**
     * @brief Оператор присваивания для сложения двух комплексных чисел.
     *
     * @param aRval Комплексное число, которое нужно добавить
     * @return Ссылка на текущее комплексное число
     */
    Complex& operator+=(const Complex& aRval);

    /**
     * @brief Оператор присваивания для вычитания двух комплексных чисел.
     *
     * @param aRval Комплексное число, которое нужно вычесть
     * @return Ссылка на текущее комплексное число
     */
    Complex& operator-=(const Complex& aRval);

    /**
     * @brief Оператор присваивания для умножения двух комплексных чисел.
     *
     * @param aRval Комплексное число, с которым нужно умножить
     * @return Ссылка на текущее комплексное число
     */
    Complex& operator*=(const Complex& aRval);

    /**
     * @brief Оператор присваивания для сложения комплексного числа и числа типа double.
     *
     * @param aRval Число типа double
     * @return Ссылка на текущее комплексное число
     */
    Complex& operator+=(const double& aRval);

    /**
     * @brief Оператор присваивания для вычитания числа типа double из комплексного числа.
     *
     * @param aRval Число типа double
     * @return Ссылка на текущее комплексное число
     */
    Complex& operator-=(const double& aRval);

    /**
     * @brief Оператор присваивания для умножения комплексного числа на число типа double.
     *
     * @param aRval Число типа double
     * @return Ссылка на текущее комплексное число
     */
    Complex& operator*=(const double& aRval);

    /**
     * @brief Оператор присваивания для деления комплексного числа на число типа double.
     *
     * @param aRval Число типа double
     * @return Ссылка на текущее комплексное число
     */
    Complex& operator/=(const double& aRval);

    /**
     * @brief Оператор присваивания для копирования одного комплексного числа в другое.
     *
     * @param aRval Комплексное число, которое нужно скопировать
     * @return Ссылка на текущее комплексное число
     */
    Complex& operator=(const Complex& aRval);

    /**
     * @brief Оператор присваивания для копирования числа типа double в комплексное число.
     *
     * @param aRval Число типа double
     * @return Ссылка на текущее комплексное число
     */
    Complex& operator=(const double& aRval);
};

#endif