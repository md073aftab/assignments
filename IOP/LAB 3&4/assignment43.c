// THIS IS WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES 
// REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW.
// If sales<=Rs. 500, commission is 5%
// If sales> but <=2000, commission is Rs. 35 plus 10% above Rs. 500
// If sales>2000 but <=5000, commission is Rs. 185 plus 12% above Rs. 2000
// If sales>5000, commission is 12.5%

#include <stdio.h>
int main()
 {
    int sales,comision;

    printf("ENTER SALES\n");
    scanf("%d",&sales);

    if(sales<=500)
    {
        comision= (sales/100)*5 ;
        printf ("comission: %d",comision);
    }
    else if (sales<=2000 && sales>500)
    {
        comision = 35 + ((sales-500)*10)/100 ;
        printf ("comission: %d",comision);
    }
    else if (sales>2000 && sales<=5000)
    {
        comision = 185 + ((sales-2000)*12/100) ;
        printf ("comission: %d",comision);
    }
    else if (sales>5000)
    {
        comision= (sales/100)*12.5  ; 
        printf ("comission: %d",comision);    
    } 
    return 0;
}
