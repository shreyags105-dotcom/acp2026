#include <stdio.h>

/* Structure Definition */
typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

/* Function Prototypes */
void inputEmployees(Employee e[], int n);
void writeToTextFile(Employee e[], int n, const char *filename);
float calculateTotalPayroll(const char *filename);
void displayExpenditure(float total);

int main() {

    Employee e[10];
    int n;
    float total;

    printf("Enter number of employees:\n");
    scanf("%d", &n);

    inputEmployees(e, n);

    writeToTextFile(e, n, "payroll.txt");

    total = calculateTotalPayroll("payroll.txt");

    displayExpenditure(total);

    return 0;
}

/* Function to input employee details */
void inputEmployees(Employee e[], int n) {

    int i;

    for(i = 0; i < n; i++) {

        printf("Enter Employee ID:\n");
        scanf("%d", &e[i].id);

        printf("Enter Employee Name:\n");
        scanf("%s", e[i].name);

        printf("Enter Basic Salary:\n");
        scanf("%f", &e[i].salary);
    }
}

/* Function to write employee records to text file */
void writeToTextFile(Employee e[], int n, const char *filename) {

    FILE *fp;

    fp = fopen(filename, "w");

    /* TODO:
       Write employee ID, Name and Salary to the file
       Use fprintf()
    */

    fclose(fp);
}

/* Function to calculate total payroll from file */
float calculateTotalPayroll(const char *filename) {

    FILE *fp;
    int id;
    char name[50];
    float salary, total = 0;

    fp = fopen(filename, "r");

    /* TODO:
       Read employee records using fscanf()
       Add all salaries to total
    */

    fclose(fp);

    return total;
}

/* Function to display total salary expenditure */
void displayExpenditure(float total) {

    printf("Total Salary Expenditure: %.2f\n", total);
}