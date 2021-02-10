#include <iostream>

using namespace std;

int main ()
{
  string objectName;
  double x, y, r;
  printf ("Enter the name of the object: ")
    scanf ("%s", &objectName);
  if (objectName == 'triangle')
    {
      scanf ("%fl %fl %fl", &x, &y, &r);
    }
  return 0;
}
