#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 
int main( int argc, char *argv[] )
{
  struct stat estructura1;
  struct stat estructura2;

  if( argc != 3 )
  {
    fprintf( stderr, "Uso: %s <fichero1> <fichero2>\n", argv[0] );
    return 1;
  }
  
  if( lstat( argv[1], &estructura1 ) < 0 )
  {
    perror( "lstat" );
    return 1;
  }

  if( lstat( argv[2], &estructura2 ) < 0 )
  {
    perror( "lstat" );
    return 1;
  }

  printf( "Fichero: %s\n", argv[1] );
  printf( "i-nodo: %ld\n", (long)estructura1.st_ino );
  printf( "Fichero: %s\n", argv[2] );
  printf( "i-nodo: %ld\n", (long)estructura2.st_ino );
 
  return 0;
}
