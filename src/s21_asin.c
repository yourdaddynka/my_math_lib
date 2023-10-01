#include "s21_math.h"
// высчитываем значение арксинуса через ряды тейлора

long double s21_asin(double x) {
  long double sum = x, slog = x;
  int n = 1;
  if (s21_fabs(s21_fabs(x) - 1) < s21_EPS)
    sum = s21_PI / 2. * x;
  else if (x < -1 || x > 1)
    sum = 0 / 0.0;
  else
    while (s21_fabs((double)slog) > s21_EPS) {
      slog *= (x * x * (2. * n - 1) * (2. * n - 1)) / (2. * (2. * n + 1) * n);
      sum += slog;
      n++;
    }
  return sum;
}
// Для расчета арксинуса используется формула Тейлора:
// Для вычисления суммы ряда используется переменная
// sum. Для вычисления слагаемых используется переменная
// slog, которая является текущим слагаемым ряда.