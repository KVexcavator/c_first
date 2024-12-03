#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  char *delivery = "";
  int thick = 0;//false
  int count = 0;
  char ch;

  while((ch = getopt(argc, argv, "d:t")) !=EOF)
    switch (ch) {
    case 'd':
      delivery = optarg;
      break;
    case 't':
      thick = 1; // true
      break;
    default:
      fprintf(stderr, "Unknown params: '%s'\n", optarg);
      return 1;
    }

    argc -= optind;
    argv += optind;

    if(thick)
      puts("Thick crust");

    if(delivery[0])
      printf("Will be delivered %s.\n", delivery);

    puts("Ingredients:");

    for(count = 0; count < argc; count++)
      puts(argv[count]);
    return  0;
}
// gcc order_pizza.c -o order_pizza
// ./order_pizza Anchovies Pineapple
// ./order_pizza -d now Anchovies Pineapple
// ./order_pizza -d now -t Anchovies Pineapple
// ./order_pizza -d
// ./order_pizza -td now
