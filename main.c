#include <stdio.h>

void sayHello() {
  printf("sayHello \n");
}

int main() {
  int x = 2, y = 3 , z = 4;
  int YASIN = 12;

  int MIBOMBO;
  MIBOMBO = 100;

  float hi = 1;
  double hi1 = 2;

  char hi2 = 'A';

  char myText[] = "Hello World!";

  float f1 = 35e3;   // 35 * 10^3 = 35000
  double d1 = 12E4;  // 12 * 10^4 = 120000

  float wi = 35;



  printf("MIBOMBO = %d \n", MIBOMBO + YASIN);
  printf("YASIN BOOM\n");
  printf("X = %d \n",x );
  printf("Y = %d \n",y );
  printf("Z = %d \n",z );

  printf("SUMA = %d ",x + y + z ,",");
  printf("DIVIDE = %d ",x / y / z ,",");
  printf("MUT = %d ",x * y * z ,",");
  printf("MINUS = %d ",x - y - z );

  printf("\n%f\n",hi);
  printf("%if\n",hi1);
  printf("%c\n",hi2);

  printf("%s \n",myText);

  printf("%f\n", f1);
  printf("%lf\n", d1);

  sayHello();

  printf("%.2f \n",wi);

  printf("bytes = %zu \n", sizeof(sayHello));

  printf("bytes = %zu", sizeof(hi));

  printf("bytes = %zu\n", sizeof(hi1));

  printf("bytes = %zu\n", sizeof(hi2));

  return 0;
}