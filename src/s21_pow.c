#include "s21_math.h"
// возведение числа в степень через формулы эпсилент, логарифма
long double s21_pow(double x, double y) {
  long double rez;
  rez = s21_exp(y * s21_log(x));
  return rez;
}