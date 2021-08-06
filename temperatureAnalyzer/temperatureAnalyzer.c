/*
 Plum Tree Garden
*/

#include <stdio.h>


#define NUMS 4


int main(void) {

// declare variables
 int c = 40;
 int d = -40;
 int i;
 int temp1, temp2;
 int total_high = 0, total_low = 0;
 int day_of_high = 0, day_of_low = 0;
 int true_or_false;
 float average_mean;
 
     // display title
     printf("---=== IPC Temperature Analyzer ===---\n");

     // initialize loop with for statement
     for (i = 0; i < NUMS; i++) {
        // create conditions, true and false
	// request user inputs
	// continue loop until all days accounted for
	do {
	     true_or_false = 0;

             printf("Enter the high value for day %d: ", i + 1);
             scanf("%d", &temp1);
             printf("\n");

	     printf("Enter the low value for day %d: ", i + 1);
             scanf("%d", &temp2);
             printf("\n");

                // if input fails to meet criteria, will state incorrect values 
           	if (temp1 < -40 || temp1 > 40 || temp2 < -40 || temp2 > 40 || temp1 < temp2) {
			
		   true_or_false = 1;

		   printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
		   printf("\n");
		}
	}
        // while the conditions for loop are met, add temperature high and low
	while (true_or_false);
	
	total_high = total_high + temp1;
	total_low = total_low + temp2;

	// calculate highest temperature and day
	if (temp1 > d) {
		d = temp1;
		day_of_high = i + 1;
     }

	// calculate lowest temperature and day
	if (temp2 < c) {
		c = temp2;
		day_of_low = i + 1;
	}
     }

     // calculate the average (mean) and display
     average_mean = ((float)total_high + (float)total_low) / (NUMS * 2);

     printf("The average (mean) temperature was: %.02f\n", average_mean);
     printf("The highest temperature was %d, on day %d\n", d, day_of_high);
     printf("The lowest temperature was %d, on day %d\n", c, day_of_low);

    
    return 0; 

} 
