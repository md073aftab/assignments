//THIS IS PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR.(&&)
#include <stdio.h>
int main() {
    int a,b,c;

    printf("ENTER THE VALUES OF a,b,c\n");
    scanf("%d%d%d", &a,&b,&c);

    if((a>b)&&(a>c)){
        printf("a");
    }
    if((b>a)&&(b>c)){
        printf("b");
    }
    if ((c>a)&&(c>b)){
        printf("c");
    }
    
    return 0;
}
