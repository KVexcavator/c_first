#include <stdio.h>

int main()
{
  float latitude;
  float longitude;
  char info[80];
  int started = 0;// false

  puts("data=[");
  while (scanf("%f, %f, %79[^\n]", &latitude, &longitude, info) == 3) {
    if(started)
      printf(",\n");//запятая будет добавлена, только если отобразили предыдущую строку
    else
      started = 1;//присваиваем при старте цикла true
    printf("{ latitude: %f, longitude: %f, info: %s }", latitude, longitude,info);
  }
  puts("\n]");
  return 0;
}

/*
* [^\n]давай все символы пока не закончится строка
* == 3 scanf возаращает количество символов, которые смогла прочесть
* &latitude указатель для типа int
* ./scanf  < gpsdata.csv  перенаправить ввыд
* ./scanf  < gpsdata.csv > output.json перенаправить ввщд и вывод
*/
