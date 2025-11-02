//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main() {
    float cost, selling, profit, loss;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &cost, &selling);

    if (selling > cost) {
        profit = selling - cost;
        printf("Profit = %.2f%%\n", (profit / cost) * 100);
    } 
    else if (cost > selling) {
        loss = cost - selling;
        printf("Loss = %.2f%%\n", (loss / cost) * 100);
    } 
    else {
        printf("No Profit No Loss.\n");
    }

    return 0;
}
