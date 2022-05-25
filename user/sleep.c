#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  if(argc <= 1){
    fprintf(2, "usage: sleep [time]\n");
    exit(1);
  }

  int time = atoi(argv[1]);
  printf("nothing happens in the next %d ticks\n", time);
  sleep(time);
  exit(0);
}