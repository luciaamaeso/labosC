#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
 #include <stdio.h> 
#include <stdlib.h>
#define STDOUT 1
#define SIZE 256
 
int main(int argc, char *argv[])
{
        int fd, readbytes;
        char buffer[SIZE];
 if (argc!=2) 
    { 
       printf("Llamada: %s nombre_fichero\n", argv[0]); 
       return -1; 
    }
        if( (fd=open(argv[1], O_RDWR)) == -1 )
        {
                perror("open");
                exit(-1);
        }
 
        while( (readbytes=read(fd, buffer, SIZE)) != 0 )
        {
            write(STDOUT, buffer, readbytes); 
             
        }
 
        close(fd);
 
        return 0;
}
