//Electric bill program
/*
Author:BrianAnthony Githinji
Reg no:CT101/G/22765/24
Date:10/10/2024
*/
#include <stdio.h>

int main() {
    //Variable declaration
    int customer_ID, units;
    char customer_name[30];
    float total_bill, total_charge, charge_per_unit;
    
    //Inputs
    printf("Enter your name: ");
    scanf("%29s", customer_name);
    
    printf("Enter your customer ID: ");
    scanf("%d", &customer_ID);
    
    printf("Enter the units consumed; ");
    scanf("%d", &units);
    
    //Determining charges
    if (units <=199) {
        charge_per_unit= 1.2;
        total_bill = units* 1.2;
    } else if(units >=200 && units <400) {
        charge_per_unit= 1.5;
        total_bill = units* 1.5;
    } else if(units >=400 &&units <600){
        charge_per_unit= 1.8;
       total_bill = units* 1.8;
    } else {
        charge_per_unit= 2.0;
        total_bill = units* 2.0;
    }
    
    // Check if charge per unit exceeds 400 to apply surcharge
    if (total_bill >400){
        total_charge = total_bill + (total_bill * 0.15);
    }
    
    //Minimum bill
    if (total_bill < 100){
        (total_charge = 100);
    }
        
    // Outputs
    printf("\nCustomer ID:%d \n", customer_ID);
    printf("Name:%s\n", customer_name);
    printf("You have consumed:%d\n", units);
    printf("The charge per unit is:%.2f\n", charge_per_unit);
    printf("Total amount to pay:%.2f", total_charge);
    
    return 0;
}
