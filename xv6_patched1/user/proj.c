#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int
main(int argc, char *argv[])
{
  printf(1, "getpid has run %d\n", getpid());
  printf(1, "There are %d system calls\n", getid());
  exit();
}
