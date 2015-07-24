/*
 * newdir.c - Create a directory
 */
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <syslog.h>

int main(int argc, char *argv[])
{

     if(mkdir(argv[1], 0755)) {
	  perror("mkdir");
	  syslog(LOG_ERR, "%s\n", "Error al crear directorio");

	  exit(EXIT_FAILURE);
     }
     
     exit(EXIT_SUCCESS);
}
