/*
 *NAME:ALDRINE WARREN
 *REG NO:PA106/G/28818/25
 *DESCRIPTION:PROGRAM TO
 */

#include<stdio.h>//scanf() ,printf()

//main function

int main() {
    // declaration and prompting the user to enter the hours worked and the wages earned
    float hours_worked,wages,gross_pay,tax,net_pay;
    printf("Enter hours worked : ");
    scanf("%f",&hours_worked);
    printf("Enter wages : ");
    scanf("%f",&wages);


//if statement usage


    if(hours_worked>40) {
        gross_pay=(40*wages)+((hours_worked-40)*1.5*wages);
    }else {
        gross_pay=hours_worked*wages;
    }

    if (gross_pay>600) {
        tax=(600*0.15)+((gross_pay-600)*0.20);
    }else {
        tax=gross_pay*0.15;
    }

    net_pay=gross_pay-tax;

//Displaying the results

    printf("Your pay is : %.2f\n",gross_pay);
    printf("Your net pay is : %.2f\n",tax);
    printf("Your net pay is : %.2f\n",net_pay);
    return 0;
}


