//  WRITE A PROGRAM IN C FOR THE FOLLOWING.
//   AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS 
//   FOLLOWS.
//   
//  Consumption in unit Rate for Charge
//  0-200 Re 0.50 per unit
//  210-400 Rs. 100 plus Re 0.65 per unit excess of 200
//  401-600 Rs. 230 plus Re 0.80 per unit excess of 
//  400
//  Above 600 Rs. 425 plus Rs. 125 per unit excess of 
//  600
//   Print the amount to be paid by the consumer

#include <stdio.h>
int main() {
    int units;
    int amount;

    printf("enter unit\n");
    scanf("%d",&units);

    if (units<=200 && units>=0)
    {
        amount = units/2 ;
    }
    else if (units>200 && units<=400)
    {
        amount = 100 + (units-200)*0.65 ;
    }

    else if (units>400 && units<=600)
    {
        amount = 230 + (units-400)*0.80 ;
    }

     else if (units>600 )
    {
        amount = 425 + (units-600)*1.25 ;
    }

    printf("amount to be paid is : %d",amount);
    
    
    return 0;
}
