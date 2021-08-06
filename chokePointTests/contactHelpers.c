/*
 PlumTreeGarden
 contactHelpers.c
 */

// DEFINE CRT NO WARNING
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contactHelpers.h"

// DEFINE CLEARKEYBOARD
void clearKeyboard(void) {
    while (getchar() != '\n')
        ;
}

// DEFINE PAUSE
void pause(void) {
    char NL = 'x';
    printf("(Press Enter to Continue)");
    if (NL != '\n') {
        clearKeyboard();
    }
}

// DEFINE GETINT
int getInt(void) {
    
    char NL = 'x';
    int check = 0;
    
    while (NL != '\n') {
        scanf("%d%c", &check, &NL);
        
        if (NL != '\n') {
        clearKeyboard();
        printf("*** INVALID INTEGER *** <Please enter an integer>: ");
        }
    }
    return check;
}



// DEFINE GETINTRANGE
int getIntInRange(int min, int max) {
    
    int in_range;
    in_range = getInt();
    
    if (in_range < min || in_range > max) {
        printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
        in_range = getIntInRange(min, max);
    }
    return in_range;
}

// DEFINE YES
int yes(void)
{
    int check = 0;
    char y_or_n;
    char NL = 'x';
    
    while (NL != '\n') {
        
        scanf(" %c%c", &y_or_n, &NL);
        
        if (NL == '\n') {
            
            if (y_or_n == 'Y' || y_or_n == 'y') {
                check = 1; }
            
            else if (y_or_n != 'N' && y_or_n != 'n') {
                printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
                NL = 'x'; }
        }
        else {
            printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
            clearKeyboard(); }
    }
    return check;
}

// DEFINE MENU
int menu(void) {
    
    int user_option;
    int rtrn_option;
    
    printf("Contact Management System\n");
    printf("-------------------------\n");
    printf("1. Display contacts\n");
    printf("2. Add a contact\n");
    printf("3. Update a contact\n");
    printf("4. Delete a contact\n");
    printf("5. Search contacts by cell phone number\n");
    printf("6. Sort contacts by cell phone number\n");
    printf("0. Exit\n\n");
    
    printf("Select an option:> ");

    user_option = getIntInRange(0, 6);
    rtrn_option = user_option;
        
    return rtrn_option;
}


// DEFINE CONACTMANAGERSYSTE
void ContactManagerSystem(void) {
    
    int match;
    int leave;
    int confirm_exit = 0;
    
    while (confirm_exit != 1) {
        
        match = menu();
        
        switch (match)
        {
            case 0:
                printf("\nExit the program? (Y)es/(N)o: ");
                leave = yes();
                if (leave == 1) {
                    printf("\nContact Management System: terminated\n");
                    confirm_exit = 1;
                    break;
                }
		else {
			printf("\n");
			break;
		}
            default:
                printf("\n<<< Feature %d is unavailable >>>\n\n", match);
		pause();
		printf("\n");
                break;
        }
    }
}
