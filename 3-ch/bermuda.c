#include <stdio.h>

int main()
{
  float latitude;
  float longitude;
  char info[80];
  while (scanf("%f, %f, %79[^\n]", &latitude, &longitude, info) == 3) {
    if((latitude > 26) && (latitude < 54))
      if((longitude > -76) && (longitude < -64))
        printf("%f, %f, %s\n", latitude, longitude, info);
  }
  return 0;
}

// (./bermuda | ./csv2json ) < spooky.csv > output.json
// https://github.com/freebz/Head-First-C/blob/master/ch03/spooky.csv
