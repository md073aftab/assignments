#include <stdio.h>
    typedef struct {
    char item_name[20];
    int quantity;
    float price;
    float amount;
}item;
float out(int quantity, float price) {
    return (price*quantity);
}
int main() {
    int n;
    printf("Enter the number of items: ");
    scanf("%d",&n);

    item comm[n];

    for(int i=0; i<n; i++) {
        printf("Enter item  name:");
        scanf("%s",comm[i].item_name);
        printf("Enter quantity: ");
        scanf("%d",&comm[i].quantity);
        printf("Enter price: ");
        scanf("%f",&comm[i].price);
    }
    printf("Net amount per item: \n");
    for(int i=0; i<n; i++) {
        comm[i].amount = out(comm[i].quantity,comm[i].price);
        printf("Item: %s   Amount: %.2f\n",comm[i].item_name,comm[i].amount);
    }
    return 0;
}