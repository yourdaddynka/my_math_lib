#include "s21_math.h"
// вычесляем остаток от деления
long double s21_fmod(double x, double y) {
  long double res = x;
  int f = 0;
  if (res < 0) {
    f = 1;
    res = s21_fabs(res);
  }

  if (res != y) {
    while (s21_fabs(res) >= s21_fabs(y)) res = s21_fabs(res) - s21_fabs(y);
  } else
    res = 0.0;

  return (f) ? -res : res;
}