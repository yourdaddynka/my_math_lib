#include "s21_math.h"
// работа со значениями углов в радианах, которые могут выходить за пределы
// диапазона от -π до π.
long double awdawd(double x) {
  while (x > s21_PI || x < -s21_PI) {
    x += x > s21_PI ? -2 * s21_PI : 2 * s21_PI;
  }
  return x;
}

// вычеслять син числа x с помощью рядовой формулы, рядами Тэйлора.
long double s21_sin(double x) {
  x = awdawd(x);
  long double y = x, rez = x;
  for (long double i = 1; s21_fabs(rez) > s21_EPS; i++) {
    rez = -rez * x * x / (2 * i * (2 * i + 1));
    y += rez;
  }
  return y;
}