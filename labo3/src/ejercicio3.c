#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>


#define STDOUT 1
#define SIZE 512

int main( int argc, char *argv[] )
{
   	 
    int fd, readbytes;
    char buffer[SIZE];
    fd = open( argv[1], O_RDWR );
    if( fd == -1 )
    {
   	 perror( "open" );
   	 exit( -1 );
    }
    readbytes = read( fd, buffer, SIZE );
    while (readbytes != 0 )
    {
/*   	 write( STDOUT, buffer, SIZE ); */
   	 write( STDOUT, buffer, readbytes );
   	 readbytes = read( fd, buffer, SIZE );
    }

    close( fd );

    return 0;
}
