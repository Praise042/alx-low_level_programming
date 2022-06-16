#include <stdio.h>

<<<<<<< HEAD
/*
 * Description: add one line to this line of code
 *
 * Return: 0
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
=======
int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
>>>>>>> a0f5142a9dacfb7840469837a70fe5ffcd865edb
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
<<<<<<< HEAD
*p[5] = 98;
  /* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
=======
 p[5] = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}

>>>>>>> a0f5142a9dacfb7840469837a70fe5ffcd865edb
