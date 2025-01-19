#include <fcntl.h>
#include <errno.h>
#include <sys/ioctl.h> 
#include <linux/cdrom.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  // not the greatest way but idrc this is a joke application
  int sr0 = open("/dev/sr0",O_NONBLOCK);
  if (sr0 < 0) // me when no /dev/sr0 :broken_hart:
  {
  chk:
    printf("uh oh! [%d] [%s]\n",errno,strerror(errno));
    exit(1);
  } 
  printf("Initializing cupholder...\n");
  int s = ioctl(sr0, CDROMEJECT);
  if (s < 0) // me when it not worky :broken_heart:
    goto chk;

  printf("Cupholder initialized! Enjoy holding your cups! :D\n");

  return 0;
}

