/* 
Plum Tree Garden
 */



#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

// Define Number of Employees "SIZE" to be 2
#define SIZE 4

// Declare Struct Employee
struct Employee {
    int id;
    int age;
    double salary;
};


/* main program */
int main(void) {
    
    int i, j;
    int new_employee = 0;
    int option = 0;
    int user_input = 0;
    
    printf("---=== EMPLOYEE DATA ===---\n\n");
    
    struct Employee emp[SIZE] = {{0}};
    // Declare a struct Employee array "emp" with SIZE elements
    // and initialize all elements to zero
    
    do {
        // Print the option list
        printf("1. Display Employee Information\n");
        printf("2. Add Employee\n");
        printf("3. Update Employee Salary\n");
        printf("4. Remove Employee\n");
        printf("0. Exit\n\n");
        printf("Please select from the above options: ");
        
        // Capture input to option variable
        scanf("%d",&option);
        printf("\n");
        
        switch (option) {
            case 0:	// Exit the program
		    printf("Exiting Employee Data Program. Good Bye!!!\n");
                
                break;
            case 1: // Display Employee Data
            
                
                printf("EMP ID  EMP AGE EMP SALARY\n");
                printf("======  ======= ==========\n");
                
                
                // Use "%6d%9d%11.2lf" formatting in a
                // printf statement to display
                // employee id, age and salary of
                // all  employees using a loop construct
                
                // The loop construct will be run for SIZE times
                // and will only display Employee data
                // where the EmployeeID is > 0
                
                for (i = 0; i < SIZE; i++) {
                    if (emp[i].id > 0) {
                    printf("%6d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);
                    }
                }
                
                printf("\n");

                
                break;
            case 2:
                
                // Adding Employee
                // Check for limits on the array and add employee
                // data accordingly.
                
                printf("Adding Employee\n");
                printf("===============\n");
                
                if (new_employee < SIZE) {
                    
                    printf("Enter Employee ID: ");
                    scanf("%d", &emp[new_employee].id);
                    
                    printf("Enter Employee Age: ");
                    scanf("%d", &emp[new_employee].age);
                    
                    printf("Enter Employee Salary: ");
                    scanf("%lf", &emp[new_employee].salary);
                    
                    printf("\n");
                    
                    new_employee++;
                }
                else {
                    printf("ERROR!!! Maximum Number of Employees Reached\n");
                    printf("\n");
                }
                
                
                
                break;
                
            case 3:
                
                // update employee
                
                printf("Update Employee Salary\n");
                printf("======================\n");
                
                printf("Enter Employee ID: ");
                scanf("%d", &user_input);
                
                    
                    if (user_input == emp[0].id) {
                        printf("The current salary is %.02lf\n", emp[0].salary);
                        emp[0].salary = 0;
                        printf("Enter Employee New Salary: ");
                        scanf("%lf", &emp[0].salary);
                        printf("\n");
                    }
                    if (user_input == emp[1].id) {
                        printf("The current salary is %.02lf\n", emp[1].salary);
                        emp[1].salary = 0;
                        printf("Enter Employee New Salary: ");
                        scanf("%lf", &emp[1].salary);
                        printf("\n");
                    }
                    if (user_input == emp[2].id) {
                        printf("The current salary is %.02lf\n", emp[2].salary);
                        emp[2].salary = 0;
                        printf("Enter Employee New Salary: ");
                        scanf("%lf", &emp[2].salary);
                        printf("\n");
                    }
                    if (user_input == emp[3].id) {
                        printf("The current salary is %.02lf", emp[3].salary);
                        emp[3].salary = 0;
                        printf("Enter Employee New Salary: ");
                        scanf("%lf", &emp[3].salary);
                        printf("\n");
                    }
                
                                break;

            case 4:
                
                // remove employee
                
                printf("Remove Employee\n");
                printf("===============\n");
                
                printf("Enter Employee ID: ");
                scanf("%d", &user_input);
		printf("Employee %d will be removed\n\n", user_input);

                for (i = 0; i < SIZE; i++) {
                if (user_input == emp[i].id) {
                    for (j = i; j < SIZE - 1; j++) {
                        emp[j] = emp[j + 1];
                    }
		    emp[SIZE - 1].id = 0;
                    new_employee--;

                    break;
                }
                }

                    break;
                
            default:
                printf("ERROR: Incorrect Option: Try Again\n\n");
        }
        
        
    } while (option != 0);
    
    
    return 0; 
}
