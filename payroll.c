#include<stdio.h>
int main()
{
    int empl_no, hours = 40, overtime_hrs, kra_pin;
    float pay = 1000, overtime, tax, net_income,gross_income, normal_pay;
    char name[100];

    printf("Enter your full names: ");
    scanf(" %[^\n]s", &name); 
    printf("\nPlease insert your employee number: ");
    scanf("%d", &empl_no);
    printf("\nplease enter your Kra Pin... ");
    scanf("%i", &kra_pin);
    printf("\nEnter your working hours... ");
    scanf("%i", &hours);

    

    if (hours<=40)
    {
        gross_income = hours*pay;
        tax = gross_income*0.3;
        net_income = gross_income-tax;
        overtime = 0;
        printf("\nDear %s", name);
        printf("\nFrom Your working hours your salary is as follows:");
        printf("\nOvertime sh.%.2f", overtime);
        printf("\nTax: sh.%.2f",tax);
        printf("\nNet Pay: sh.%.2f", net_income);
        


    }
    else if(hours>40)
    { 
        overtime_hrs=hours - 40;
        overtime = overtime_hrs*1500; 
        normal_pay = 40*1000;
        gross_income = normal_pay + overtime;
       
        tax = gross_income * 0.3;
        net_income = gross_income-tax;

        printf("\nDear %s", name);
        printf("\nFrom Your working hours your salary is as follows:");
        printf("\nOvertime pay:  sh.%.2f", overtime);
        printf("\nTax:  sh.%.2f",tax);
        printf("\nNet Income:  sh.%.2f", net_income);
        
        
    }
    else{
        printf("Enter correct details!!");
    }

return 0;

}