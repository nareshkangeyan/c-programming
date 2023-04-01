#include<stdio.h>
struct employee
{
	float basic_salary;
	float HAR;
	float DA;
	float PF;
	float net_salary;
};
int main ()
{   
    struct employee salary;
	printf("enter the amount : ");
	scanf("%f",& salary.basic_salary);
	salary.HAR=(salary.basic_salary/100)*10;
	salary.DA =(salary.basic_salary/100)*5;
	salary.PF =(salary.basic_salary/100)*12;
	salary.net_salary = (salary.basic_salary + salary.HAR + salary.DA )-salary.PF;
	printf("the net salary of employee : %.2f\n",salary.net_salary);
	return 0;
}
