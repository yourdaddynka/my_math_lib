#include "s21_math.h"
// Вычесляет квалратный корень
long double s21_sqrt(double x) {
  long double l = 0.0, var = x, root;
  root = (l + var) / 2;
  for (int i = 0; i <= 50; i++) {
    long double mult;
    mult = root * root;
    if (mult == x) {
      break;
    } else {
      if (mult > x) {
        var = root;
        root = (l + var) / 2;
      } else {
        l = root;
        root = (l + var) / 2;
      }
    }
  }
  return (x < 0) ? -s21_NAN : root;
}
