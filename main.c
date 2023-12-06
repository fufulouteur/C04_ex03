#include <stdio.h>
int ft_atoi(char *str);

int main() {
  int str;

  str = ft_atoi(" -1234ab567");
  printf("%d", str);
  return 0;
}
