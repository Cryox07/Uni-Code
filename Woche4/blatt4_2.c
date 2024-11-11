#include <stdbool.h>
#include <stdio.h>

int main() {

  int x = 1, y = 2;
  bool z = true;

  printf("y++*5+x wird zu (((y++)*5)+x) und ergibt 11, x = 1 und y = 3\n\n");
 y++*5+x;
  printf("x*5%++y wird zu ((x*5)%(++y)) und ergbibt 1, x = 1 und y = 4\n\n");
  x*5%++y;
  printf("x++-y-- wird zu ((x++)-(y--)) und ergiebt -3, x = 2 und y = 3\n\n");
  x++-y--;
  printf("x*5<y||z&&x>y wird zu (((x*5)<y)||(z&&(x>y))) wird zu false/0, x = 2 und y = 3\n\n");
  x*5<y||z&&x>y;
 // printf("%d\n",  (x*5<y||z&&x>y));
  
  printf("x=y=y+1 wird zu (x=(y=(y+1))) und ergibt 4, x = 4 und y = 4 \n\n");
  //printf("%d %d %d\n", x=y=y+1,x, y );
  //x=y=y+1;


  return 0;
}
