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
    if(latitude < -90.0 || latitude > 90.0) {
      fprintf(stderr, "Wrong latirude: %f\n", latitude);
      return 2; //код ошибки
    }
    if(longitude < -180.0 || longitude > 180.0){
      fprintf(stderr, "Wrong longitife: %f\n", longitude);
      return 2;
    }
    printf("{ latitude: %f, longitude: %f, info: %s }", latitude, longitude,info);
  }
  puts("\n]");
  return 0;
}
