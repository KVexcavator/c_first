/*
Игра отслеживает местоположение игрока.
Широта с севера на юг.  latitude
Долгота с востока на запад.  longitude
Если игрок плывет на юго-восток, значение широты уменьшается, долготы увеличивается.
*/

#include <stdio.h>

void go_south_east(int* lat, int* lon){
  *lat = *lat - 1;
  *lon = *lon + 1;
}

int main() {
  int latitude = 32;
  int longitude = -64;
  go_south_east(&latitude, &longitude);
  printf("Стоп! Теперь наши координаты: [%i, %i]\n", latitude, longitude);
  return 0;
}