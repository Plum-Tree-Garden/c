/*
 Plum Tree Garden
 */

#include<stdio.h>

int main (void)
{
	int i;
	int user_input;
	int temp1, temp2;
	int check1, check2, check3, check4;

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
        
	// request user input between numbers 3 - 10
	do {
	    check1 = 0;
	    printf("Please enter the number of days, between 3 and 10, inclusive: ");
            scanf("%d", &user_input);
	    printf("\n");
	      
	        // loops new user request if condition is not met
		if (user_input < 3 || user_input > 10) {
		    do {
	                check2 = 1;
			printf("\n");
			printf("Invalid entry, please enter the number of days, between 3 and 10, inclusive: ");
			scanf("%d", &user_input);

			    if (user_input > 2 && user_input < 11) {
				check2 = 0;
			    }
		    }
		    while(check2);
		    printf("\n");
		}
	}
	while (check1); 

	int day[user_input];
	int high[user_input];
	int low[user_input];
	int day_high = 0;
	int day_low = 0;
	int a = -100, b = 100;
	int day_or_exit = 0;
	float sum_of_temperatures = 0;
	float average;

            
	    // while conditions are satisfied collect user data on temperatures
	    for (i = 0; i < user_input; i++) {

		printf("Day %d - High: ", i + 1);
		scanf("%d", &temp1);

		printf("Day %d - Low: ", i + 1);
		scanf("%d", &temp2);

		day[i] = i + 1;
		high[i] = temp1;
		low[i] = temp2;


		if (temp1 > a) {
			a = temp1;
			day_high = i + 1;
		}

		if ( temp2 < b) {
			b = temp2;
			day_low = i + 1;
		}

		
	    }	
        
	// display user input for the amount of days, high and low temperatures
	printf("\n");
	printf("Day  Hi  Low\n");

	        for (i = 0; i < user_input; i++) {

		printf("%d    %d    %d\n", day[i], high[i], low[i]);
		}
                
		printf("\n");
	        printf("The highest temperature was %d, on day %d\n", a, day_high);
	        printf("The lowest temperature was %d, on day %d\n", b, day_low);
	        printf("\n");
        
	// prompt the user to input a new number between 1 and 4 to calculate average
	// or
	// prompt the user to exit program if desired	
	do {
	sum_of_temperatures = 0;
        check3 = 1;

	printf("Enter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
	scanf("%d", &day_or_exit);

	if (day_or_exit < 0) {
		check3 = 0;
	}

	if (day_or_exit > 0 && day_or_exit < 5) {
		check3 = 1;

		for (i = 0; i < day_or_exit; i++) {
			sum_of_temperatures = sum_of_temperatures + high[i] + low[i];
		}
		average = sum_of_temperatures / (day_or_exit * 2);

		printf("\n");
		printf("The average temperature up to day %d is: %.02f\n", day_or_exit, average);
		printf("\n");
	}

	if (day_or_exit == 0 || day_or_exit > 4) {
		do {
			check4 = 1;
			printf("\n");
			printf("Invalid entry, please enter a number between 1 and 4, inclusive: ");
			scanf("%d", &day_or_exit);

			if (day_or_exit > 0 && day_or_exit < 5) {
				
				check4 = 0;
				for (i = 0; i < day_or_exit; i++) {
					sum_of_temperatures = sum_of_temperatures + high[i] + low[i];
				}
				average = sum_of_temperatures / (day_or_exit * 2);
				printf("\n");
				printf("The average temperature up to day %d is: %.02f\n", day_or_exit, average);
				printf("\n");
			}
			else if (day_or_exit == 0 || day_or_exit > 4) {
				check4 = 1;
			}
			else {
				check4 = 0;
			}
		}
		while (check4);
	}
	}
	while (check3);
	printf("\n");
	printf("Goodbye!");
	printf("\n");	
	return 0;
}
              
