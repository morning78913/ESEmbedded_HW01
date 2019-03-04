#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b){return a + b;}
int minus(int a, int b){return a - b;}
int multiply(int a, int b){return a * b;}
int divided(int a, int b){return a / b;}

char operation[] =
{
  '+',
  '-',
  '*',
  '/'
};

int (*Calc[4])(int, int)  =
{
  plus,
  minus,
  multiply,
  divided
};

int main(){
 
 int a, c;
 char b;
 printf("Key a Function \nEx: 5 + 5\n");
 scanf("%i %c %i", &a, &b, &c);

 for(int i=0; i<4; i++)
 {
     if(b == operation[i])  printf("%d %c %d = %d",a ,b, c, (*Calc[i])(a, c));
 }

 //IF ELSE IF
/* if(b == '+')   printf("%d %c %d = %d\n", a, b, c, Calc(a, c, plus));
 else if(b == '-')  printf("%d %c %d = %d\n", a, b, c, Calc(a, c, minus));
 else if(b == '*')  printf("%d %c %d = %d\n", a, b, c, Calc(a, c, multiply));
 else if(b == '/')  printf("%d %c %d = %d\n", a, b, c, Calc(a, c, divided));
*/ 
}


