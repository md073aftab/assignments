#include<stdio.h>
int main(){
char ch;
printf("\nenter any character\n");
scanf("%c",&ch);

if(ch>=97&&ch<=126){

    printf("this is smallcase letter");
}
else if(ch>=65&&ch<=126){

    printf("this is uppercase letter");
}
else{
    printf("entered invalid character");
}



}