#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int id;
    char name[50];
    float marks;
};

/* Function Prototypes */
int readStudents(struct Student s[]);
void writeToFile(struct Student s[], int n);
int readFromFile(struct Student s[]);
void displayStudents(struct Student s[], int n);

int main() {

    struct Student students[MAX_STUDENTS];
    struct Student fileStudents[MAX_STUDENTS];

    int n, m;

    /* Read student details */
    n = readStudents(students);

    /* Write data to file */
    writeToFile(students, n);

    /* Read data from file */
    m = readFromFile(fileStudents);

    /* Display student records */
    displayStudents(fileStudents, m);

    return 0;
}

/* Read student details from user */
int readStudents(struct Student s[]) {

    int n;
    printf("enter the number of student:");
        scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
        printf("student %d\n",i + 1);
        printf("id");
        scanf("%d",&s[i].id);
        printf("name");
        scanf("%s",s[i].name);  
        printf("marks");
        scanf("%f",&s[i].marks);        

     }
        

    // TODO: Implement reading of student records

    return n;
}

/* Write student records to file */
void writeToFile(struct Student s[], int n) {
        FILE *fp;
        fp=fopen("students.txt","w");
        if(fp==NULL){
            printf("FILE ERROR!\n");
            return;
        }
        
        
        for(int i=0;i<n;i++)
        {
            fprintf(fp,"%d %s %f\n",s[i].id,s[i].name,s[i].marks);
        }
        fclose(fp);
    // TODO: Implement file writing using fprintf()

}

/* Read student records from file */
int readFromFile(struct Student s[]) {
   FILE *fp=fopen("students.txt","r");
   if(fp==NULL){
    printf("FILE ERROR\n");
    return 0;

   }
    int count = 0;

    while(fscanf(fp, "%d %s %f",&s[count].id,s[count].name,&s[count].marks)!=EOF){
        count++;
    }
    fclose(fp);
    return count;
}

/* Display student records */
void displayStudents(struct Student s[], int n) {

       printf("\nstudent details\n");
       for(int i=0;i<n;i++){
        printf("id:%d\n",s[i].id);
        printf("name:%s\n",s[i].name);
        printf("marks:%f\n",s[i].marks);
       }
    // TODO: Implement display logic

}