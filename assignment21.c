// THIS IS . PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC TASK (USING ARITHMETIC 
// OPERATOR)AND THIS PERFORM USING SWITCH-CASE.(CASE IN CHAR FORM).

#include <stdio.h>
int main() {
    int product,div,sum,diff;
    char z;

    printf("ENTER THE CHARACTER\na= addition.\ns= subtraction\n.d=division\nm=multiplication);

    scanf ("%c", &z);

    switch (z){

    case a:
    printf ("ENTER THE VALUE OF a and b");
    scanf("%d%d",&a,&b);

    sum =a+b;
    printf("sum is %d", sum);
    }

     case s:
    printf ("ENTER THE VALUE OF a and b");
    scanf("%d%d",&a,&b);

    diff =a-b;
    printf("diff is %d", diff);
    }

     case m:
    printf ("ENTER THE VALUE OF a and b");
    scanf("%d%d",&a,&b);

    product =a*b;
    printf("product is %d", product);
    }

     case d:
    printf ("ENTER THE VALUE OF a and b");
    scanf("%d%d",&a,&b);

    div =a/b;
    printf("div is %d", div);
    }
    return 0;
}
