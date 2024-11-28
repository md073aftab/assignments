#include<stdio.h>
int main(){
int a,b,sum,subtraction,division,multiplication;
char operation;



printf("enter the operation(+,-,*,/)\n");
scanf("%c",&operation);
printf("enter the value of \na\nb");
scanf("%d%d",&a,&b);
switch (operation)
{
case '+':
    sum=a+b;
    printf("the sum=%d",sum);
    break;

case '-':
    subtraction=a-b;
    printf("substaction=%d",subtraction);
    break;

case '*':
    multiplication=a*b;
    printf("multiplication=%d",multiplication);
    break;

case '/':
    division=a/b;
    printf("division=%d",division);

}


return 0;

}