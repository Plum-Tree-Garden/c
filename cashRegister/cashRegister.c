/*           
  - Plum Tree Garden
 */

#include <stdio.h>

int main (void) 
{

	// variables
	int loonies, quarters, dimes, nickles, pennies;
	double amountOwing, GST;
	float balanceOwing, remainder1;
	float owing1, owing2, owing3, owing4, owing5;


	// Request user input amount.)
	printf("Please enter the amount to be paid: $");

	// Scan user input amount.
	scanf("%lf", &amountOwing);

	// Inform user GST amount.
	printf("GST: 1.13\n");

	// User amount required after GST.
	       GST = amountOwing * .13 + .005;
	       balanceOwing = amountOwing + GST;
	printf("Balance owing: $%.02f\n", balanceOwing);


	// 1. Display  loonies, quarters, dimes, nickles & pennies as int.
	// 2. Calculate remaining balance owing through each payment..
	// 3. Calculate using; truncation, casting, division & modulus.
	

        	loonies = balanceOwing;         //Loonies Required
	        owing1 = balanceOwing - loonies;//Remaining Loonies Balance

	
	        remainder1 = owing1 * 100;


	        quarters = remainder1 / 25;     //Quarters Required
	        owing2 = (int)remainder1 % 25;  //Remaining Quarters Balance

	        dimes = owing2 /10;             //Dimes Required
	        owing3 = (int)owing2 % 10;      //Remaining Dimes Balance

	        nickles = owing3 / 5;           //Nickles Required
	        owing4 = (int)owing3 % 5;       //Remaining Nickles Balance

	        pennies = owing4 / 1;           //Pennies Required
	        owing5 = (int)owing4 % 1;       //Remaining Pennies Balance


	
	//Display calculation outcome to user.
  printf("Loonies required: %d, balance owing $%.02f\n", loonies, owing1); 
  printf("Quarters required: %d, balance owing $%.02f\n", quarters, (float)owing2/100);         
  printf("Dimes required: %d, balance owing $%.02f\n", dimes, (float)owing3/100);
	printf("Nickels required: %d, balance owing $%.02f\n", nickles, (float)owing4/100);
	printf("Pennies required: %d, balance owing $%.02f\n", pennies, (float)owing5/100);	


	return 0;

}
