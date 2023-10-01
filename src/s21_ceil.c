#include "s21_math.h"
// округляет аргумент до наименьшего целого числа, которое больше или равно
// данному значению. Если аргумент является целым числом, то функция возвращает
// его без изменений.
long double s21_ceil(double x) {
  return (x == (long long int)x) ? x
         : (x < 0)               ? (long double)(((long long int)x))
         : (x > 0)               ? (long double)((long long int)x) + 1
                                 : 0;
}