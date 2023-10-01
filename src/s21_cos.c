#include "s21_math.h"
// работа со значениями углов в радианах, которые могут выходить за пределы
// диапазона от -π до π.
long double loer(double x) {
  while (x > s21_PI || x < -s21_PI) {
    x += x > s21_PI ? -2 * s21_PI : 2 * s21_PI;
  }
  return x;
}
// вычелсяем косинус через формулу к синусу
long double s21_cos(double x) {
  x = loer(x);
  return s21_sin((s21_PI / 2.0) - x);
}