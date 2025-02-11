#include <iostream>
#include <cmath>
#include "mycomplex.h"
using namespace std;

/**
 * @brief Конструктор комплексного числа с заданными значениями действительной и мнимой части.
 * @param aRe Значение действительной части.
 * @param aIm Значение мнимой части.
 */
Complex::Complex(double aRe, double aIm) {
    Re = aRe;
    Im = aIm;
}

/**
 * @brief Конструктор копирования для комплексного числа.
 * @param aRval Ссылка на комплексное число для копирования.
 */
Complex::Complex(const Complex& aRval) {
    Re = aRval.Re;
    Im = aRval.Im;
}

/**
 * @brief Деструктор для освобождения ресурсов (в данном случае только обнуление полей).
 */
Complex::~Complex() {
    Re = 0.0;
    Im = 0.0;
}

/**
 * @brief Устанавливает значения действительной и мнимой части для комплексного числа.
 * @param aRe Значение действительной части.
 * @param aIm Значение мнимой части.
 */
void Complex::Set(double aRe, double aIm) {
    Re = aRe;
    Im = aIm;
}

/**
 * @brief Преобразует комплексное число в его модуль.
 * @return Модуль комплексного числа.
 */
Complex::operator double() {
    return abs();
}

/**
 * @brief Вычисляет модуль комплексного числа.
 * @return Модуль комплексного числа.
 */
double Complex::abs() {
    return sqrt(Re * Re + Im * Im);
}

/**
 * @brief Оператор сложения двух комплексных чисел.
 * @param aRval Ссылка на второе комплексное число.
 * @return Результат сложения двух комплексных чисел.
 */
Complex Complex::operator+(const Complex& aRval) {
    Complex Result;
    Result.Re = Re + aRval.Re;
    Result.Im = Im + aRval.Im;
    return Result;
}

/**
 * @brief Оператор вычитания двух комплексных чисел.
 * @param aRval Ссылка на второе комплексное число.
 * @return Результат вычитания двух комплексных чисел.
 */
Complex Complex::operator-(const Complex& aRval) {
    Complex Result;
    Result.Re = Re - aRval.Re;
    Result.Im = Im - aRval.Im;
    return Result;
}

/**
 * @brief Оператор сложения комплексного числа и действительного числа.
 * @param aRval Действительное число.
 * @return Результат сложения комплексного числа и действительного числа.
 */
Complex Complex::operator+(const double& aRval) {
    Complex result;
    result.Re = Re + aRval;
    result.Im = Im;
    return result;
}

/**
 * @brief Оператор вычитания действительного числа из комплексного числа.
 * @param aRval Действительное число.
 * @return Результат вычитания действительного числа из комплексного числа.
 */
Complex Complex::operator-(const double& aRval) {
    Complex Result(*this);
    Result.Re = Re - aRval;
    return Result;
}

/**
 * @brief Оператор умножения двух комплексных чисел.
 * @param aRval Ссылка на второе комплексное число.
 * @return Результат умножения двух комплексных чисел.
 */
Complex Complex::operator*(const Complex& aRval) {
    Complex Result;
    Result.Re = Re * aRval.Re - Im * aRval.Im;
    Result.Im = Re * aRval.Im + Im * aRval.Re;
    return Result;
}

/**
 * @brief Оператор умножения комплексного числа на действительное.
 * @param aRval Действительное число.
 * @return Результат умножения комплексного числа на действительное число.
 */
Complex Complex::operator*(const double& aRval) {
    Complex Result;
    Result.Re = Re * aRval;
    Result.Im = Im * aRval;
    return Result;
}

/**
 * @brief Оператор деления комплексного числа на действительное.
 * @param aRval Действительное число.
 * @return Результат деления комплексного числа на действительное число.
 */
Complex Complex::operator/(const double& aRval) {
    Complex Result;
    Result.Re = Re / aRval;
    Result.Im = Im / aRval;
    return Result;
}

/**
 * @brief Оператор добавления двух комплексных чисел с изменением первого числа.
 * @param aRval Ссылка на второе комплексное число.
 * @return Ссылка на текущее комплексное число после добавления.
 */
Complex& Complex::operator+=(const Complex& aRval) {
    Re += aRval.Re;
    Im += aRval.Im;
    return *this;
}

/**
 * @brief Оператор вычитания двух комплексных чисел с изменением первого числа.
 * @param aRval Ссылка на второе комплексное число.
 * @return Ссылка на текущее комплексное число после вычитания.
 */
Complex& Complex::operator-=(const Complex& aRval) {
    Re -= aRval.Re;
    Im -= aRval.Im;
    return *this;
}

/**
 * @brief Оператор умножения двух комплексных чисел с изменением первого числа.
 * @param aRval Ссылка на второе комплексное число.
 * @return Ссылка на текущее комплексное число после умножения.
 */
Complex& Complex::operator*=(const Complex& aRval) {
    double tmpRe = Re;
    Re = Re * aRval.Re - Im * aRval.Im;
    Im = Im * aRval.Re + tmpRe * aRval.Im;
    return *this;
}

/**
 * @brief Оператор добавления действительного числа к комплексному числу с изменением первого числа.
 * @param aRval Действительное число.
 * @return Ссылка на текущее комплексное число после добавления.
 */
Complex& Complex::operator+=(const double& aRval) {
    Re += aRval;
    return *this;
}

/**
 * @brief Оператор вычитания действительного числа из комплексного числа с изменением первого числа.
 * @param aRval Действительное число.
 * @return Ссылка на текущее комплексное число после вычитания.
 */
Complex& Complex::operator-=(const double& aRval) {
    Re -= aRval;
    return *this;
}

/**
 * @brief Оператор умножения комплексного числа на действительное с изменением первого числа.
 * @param aRval Действительное число.
 * @return Ссылка на текущее комплексное число после умножения.
 */
Complex& Complex::operator*=(const double& aRval) {
    Re *= aRval;
    Im *= aRval;
    return *this;
}

/**
 * @brief Оператор деления комплексного числа на действительное с изменением первого числа.
 * @param aRval Действительное число.
 * @return Ссылка на текущее комплексное число после деления.
 */
Complex& Complex::operator/=(const double& aRval) {
    Re /= aRval;
    Im /= aRval;
    return *this;
}

/**
 * @brief Оператор присваивания для копирования значений комплексного числа.
 * @param aRval Ссылка на комплексное число для копирования.
 * @return Ссылка на текущее комплексное число после присваивания.
 */
Complex& Complex::operator=(const Complex& aRval) {
    Re = aRval.Re;
    Im = aRval.Im;
    return *this;
}

/**
 * @brief Оператор присваивания для установки значения комплексного числа.
 * @param aRval Действительное число, которое присваивается как действительная часть.
 * @return Ссылка на текущее комплексное число после присваивания.
 */
Complex& Complex::operator=(const double& aRval) {
    Re = aRval;
    Im = 0.0;
    return *this;
}

/**
 * @brief Оператор ввода для комплексного числа.
 * @param stream Поток ввода.
 * @param a Ссылка на комплексное число.
 * @return Поток ввода.
 */
istream& operator>>(istream& stream, Complex& a) {
    char tmp[256];
    stream >> a.Re >> a.Im >> tmp;
    return stream;
}

/**
 * @brief Оператор вывода для комплексного числа.
 * @param stream Поток вывода.
 * @param a Ссылка на комплексное число.
 * @return Поток вывода.
 */
ostream& operator<<(ostream& stream, Complex& a) {
    stream << a.Re;
    if (!(a.Im < 0)) stream << '+';
    stream << a.Im << 'i';
    return stream;
}

/**
 * @brief Оператор сложения для комплексного числа и действительного числа.
 * @param aLval Действительное число.
 * @param aRval Ссылка на комплексное число.
 * @return Результат сложения.
 */
Complex operator+(const double& aLval, const Complex& aRval) {
    Complex Result;
    Result.Re = aLval + aRval.Re;
    Result.Im = aRval.Im;
    return Result;
}

/**
 * @brief Оператор вычитания для действительного числа и комплексного числа.
 * @param aLval Действительное число.
 * @param aRval Ссылка на комплексное число.
 * @return Результат вычитания.
 */
Complex operator-(const double& aLval, const Complex& aRval) {
    Complex Result;
    Result.Re = aLval - aRval.Re;
    Result.Im = -aRval.Im;
    return Result;
}

/**
 * @brief Оператор умножения для действительного числа и комплексного числа.
 * @param aLval Действительное число.
 * @param aRval Ссылка на комплексное число.
 * @return Результат умножения.
 */
Complex operator*(const double& aLval, const Complex& aRval) {
    Complex r;
    r.Re = aLval * aRval.Re;
    r.Im = aLval * aRval.Im;
    return r;
}