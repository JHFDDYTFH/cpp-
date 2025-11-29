#include"stdio.h"
int main()
 { char c1,c2,c3 ;
   c1=getchar();c2=getchar();
   c3=getchar();
   putchar(c1+32);putchar(c2+32);
   putchar(c3+32);putchar('\n');
   putchar(getchar()+32);
   putchar(getchar()+32);
   putchar('\n');
  return 0;
 }

