#include <stdio.h>

int main() {
  int counter = 1;
  while (counter < 11){
    printf("%i бутылок висело на стене\n", counter);
    counter++;
  }
  return 0;
}

/* do {...} while(...) так же можно пользовать*/
/* break; сразу выйти из цикла */
/* continue; пропустить оставшуюся часть и вернуться в начало*/