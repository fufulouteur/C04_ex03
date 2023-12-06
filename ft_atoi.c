#include <stdio.h>

int ft_atoi(char *str) {
  int a;
  int b;

  a = 1;
  b = 0;
  char tab[10];
  char *str2;

  str = tab;
  str2 = tab;

  while ((*str >= 0 && *str <= 9) || (*str == 32)) {
    str++;
  }
  while ((*str == '+' || *str == '-')) {
    if (*str == '-')
      a = a * -1;
    str++;
  }
  while (str >= str2) {
    b = b * 10;
    b = b + *str - 48;
    str++;
  }
  return (b * a);
}
