#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    float hours , payment , price;
    printf("hours");
    scanf("%f",&hours);
    printf("payment for one salary");
    scanf("%f",&payment);
    price = hours*payment;
    printf("price=%f", price);
return 0;
}
