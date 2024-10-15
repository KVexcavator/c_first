#include <stdio.h>

int larger(int a, int b) {
  if (a > b)
    return a;
  return b;
}

int main() {
  int greatest = larger(100, 1000);
  printf("Число %i наиболшее!\n", greatest);
  return 0;
}

/* void может быть возвращаемым значением, return тогда писать не надо*/