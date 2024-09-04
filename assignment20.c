#include<stdio.h>

int main(){
int operation;
int a,b,sum,subtraction,multiplication,division;
printf("enter operator you want to use 1:+(addition)\n2:-(subtraction)\n3:*(multiplication)\n4:/(division)\n");
scanf("%d",&operation);
switch(operation){


    case 1:printf("enter the value of a b\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum is =%d",sum);
    break;
    
   case 2:printf("enter the value of a b\n");
   scanf("%d%d",&a,&b);
   subtraction=a-b;
   printf("subtraction is =%d",subtraction);
   break;

   case 3:printf("enter the value of a b\n");
   scanf("%d%d",&a,&b);
   multiplication=a*b;
   printf("multiplication is=%d",multiplication);
   break;
   
   case 4:printf("enter the value of a b\n");
   scanf("%d%d",&a,&b);
   division=a/b;
   printf("division is =%d",multiplication);


}
}