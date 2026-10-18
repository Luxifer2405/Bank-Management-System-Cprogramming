#include<stdio.h>

int main(void)
{
	float balance=0,amount;
	char name[50];
	int choice ;

	do
	{
	printf("\n\n\t\t\t=========================\n");
	printf("\n\t\t\t******BANK OF INDIA******\n\n ");
	printf("\t\t\t=========================\n");
	printf("WELCOME TO OUR BANK :) \n\n");
	printf("\t\t\t-------------------------\n");
	printf("\t\t\t 1:Create Account \n");
	printf("\t\t\t 2:Deposit Money \n");
	printf("\t\t\t 3:Withdraw Money \n");
	printf("\t\t\t 4:Check Balance \n");
	printf("\t\t\t 5:Exit \n");
	printf("\t\t\t-------------------------\n");

	printf("Enter Your Choice: ");
	scanf("%d",&choice);

	if(choice==1)
	{
		printf("Enter Account Holder's Name: ");
		scanf(" %49[^\n]",name);

		printf("Enter Initial Balance: ");
		scanf("%f",&balance);
		printf("Mr_%s \n",name);
		printf("Your Account has been Created Successfully!! \n");
		printf("Your Balance is: %.2f \n",balance);
		printf("Thank You!");

	}

	else if(choice==2)
	{
		printf("Enter Amount to Deposit: ");
		scanf("%f",&amount);
		if(amount>0)
		{
			balance += amount;
			printf("Deposited Successfully!! \n");
			printf("Current Balance: %.2f \n",balance);
			printf("Thank You!");
		}
		else
		{
			printf("Invalid Amount!!");
		}

	}

	else if(choice==3)
	{
		printf("Enter Amount to Withdraw \n");
		scanf("%f",&amount);

		if(amount>0 && amount <= balance)
		{

			balance -= amount;
			printf("Withdrawal Successful!! \n");
			printf("Current Balance: %.2f \n",balance);
			printf("Thank You!!");

		}
		else if(amount<=0)
		{
			printf("\nInvalid withdrawal amount!");
		}
		else
		{
			printf(" Ohh oh!! Insufficient Balance, Sorry :( \n");
		}

	}

	else if(choice==4)
	{
		printf("Account Holder's Name: %s \n",name);
		printf("Current Balaance : %.2f \n ",balance);
		printf("Thank You!!! \n ");

	}

	else if(choice==5)
	{

		printf("Thank You for using our Bank, \n Please visit Again :) !!! \n ");

	}

	else
	{

		printf("Invalid choice!!! \n ");

	}
	}
	while(choice!=5);

	return 0;
}