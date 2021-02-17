#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main ()
{
  char objectName[500], circle[50] = "circle";
   //float x, y, r;
  int strlength = 0;
  printf ("Enter the name of the object in WKT format: ");
  scanf("%s", objectName);
  strlength = strlen(objectName);
  
  if (strcmp(objectName, circle) == 0)
	printf("kk"); 
  else printf("oshibka!!!!@!"); 
  return 0;
}
