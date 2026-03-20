#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

int main( int argc, char *argv[] )
{
  int fd;
  int n;
  char mensaje[128];

  if( argc < 2 )
  {
    n = sprintf( mensaje, "Uso: %s <ruta_fichero>\n", argv[0] );
    write( 2, mensaje, strlen( mensaje ) );
    return 1;
  }

  fd = open( argv[1], O_RDWR );
  if( fd == -1 )
  {
    perror( "open" );
    return 1;
  }

  n = sprintf( mensaje, "El fichero abierto tiene el descriptor %d.\n", fd );
  if( n > 0 )
  {
    if( write( 1, mensaje, strlen( mensaje ) ) == -1 )
    {
      perror( "write" );
      close( fd );
      return 1;
    }
  }

  if( close( fd ) == -1 )
  {
    perror( "close" );
    return 1;
  }

  return 0;
}
