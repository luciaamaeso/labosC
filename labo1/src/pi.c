#include <stdio.h>
#define PI 3.1415
int main ()
{
char c;
printf("¿Quieres conocer al número PI? (S/N)");
scanf("%c",&c);
if (c=='S' || c=='s') printf("%f\n",PI);
printf("Fin de programa \n");
return 0;
}
