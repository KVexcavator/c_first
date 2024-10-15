// передача строки в функцию
#include <stdio.h>

void fortune_cookie(char msg[]){
  printf("Сообщение гласит: %s\n", msg);
}

int main(){
  char quote[] = "Печенье Вас полнит";
  printf("quote занимает %li байтов\n", sizeof(quote));
  printf("%li\n", sizeof(int));
  printf("%li\n", sizeof("Length"));
  fortune_cookie(quote);
  return 0;
}