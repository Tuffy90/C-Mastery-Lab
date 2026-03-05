#include <stdio.h>
#include <stdlib.h>

int main()
{
    char C[]= "hello";
    char A = 'r';
    int e = 1 ;
    int q = 2;
    float w = 2.4;
    int y = 8;
    
    printf("%s\n",C);
    printf("%s\n", &A);
    
    
    if (e<q){
        printf("ok\n");
        goto END;
    }
    
    printf("no");
    
    if (e>q){
        printf("no ok\n");
    }END:
    
    printf("end!!! float = %.1f\n",w);
    
    for (int i = 0; i < e; i++){
        for (int j = 0; j < q; j++){
            printf("[%d] [%d]",i,j);
        }
    }
    
    do
    {
        y = f(x);
        x--;
    }while(x > 0);
    return 0;
}
