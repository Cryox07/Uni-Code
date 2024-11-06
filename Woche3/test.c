#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 7677171;
    printf("%d\n\n", a);


    while (a!=0){
        
  //      printf("%d\n",a);
        
        int b = a % 10;
//    printf("%d\n",b);
        if (b==7){
            printf("%d\n",b);
        }
       a /=10;     
//        printf("%d\n",a);

    }


    return 0;
}
