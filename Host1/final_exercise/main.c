/*
 Mamaging Student record
 */
#include<stdint.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
	int rollnumber;
	char name[30];
	char branch[30];
	int dob_date;
	int dob_month;
	int dob_year;
	int semester;
	float cgpa;
}STUDENT_INFO_t;

int max_rec = 20;
STUDENT_INFO_t students[20];

void display_allstudent_rec(STUDENT_INFO_t* ,int8_t);
int add_new_rec (STUDENT_INFO_t* , int8_t );
int check_roll_num(STUDENT_INFO_t* , int8_t , int );
int delete_record(STUDENT_INFO_t* , int8_t );

int main(void)
{
	int choice;
	while(1)
	{
		printf("\n*********LIST MENU*********\n");
		printf("Display all record->      1\n");
		printf("Add new record    ->      2\n");
		printf("Delete a record   ->      3\n");
		printf("Exit application  ->      0\n");
		printf("Enter your choice here: ");
		scanf("%d",&choice);

		switch(choice){
		case 1://display the all the record
			printf("Display all students Records.\n");
			display_allstudent_rec(students , max_rec);
			break;
		case 2://Add new record
			printf("Add New Record.\n");
			int ret ;
			ret = add_new_rec(students, max_rec);
			ret ? printf("Record add successfully\n"):
					printf("Record add unsuccessfully\n");
			break;
		case 3:
			printf("Delete the Record\n");
			ret = delete_record (students, max_rec);
			ret ? printf("Record deleted successfully\n"):
					printf("Roll Number mismatch.Record delete unsuccessfully\n");
			break;
		case 0:
			exit(0);
			break;
		default:
			printf("Invalid Input\n");
			break;
		}
	}
	return 0;
}
void display_allstudent_rec(STUDENT_INFO_t* record,int8_t max_rec)
{
	int rec_found = 0;
	for(int i=0; i < max_rec; i++)
	{
		if(record[i].rollnumber != 0)
		{
			rec_found = 1;
			printf("***************************\n");
			printf("Student name       %s\n",record[i].name);
			printf("Student rollNumber %d\n", record[i].rollnumber);
			printf("Student branch     %s\n", record[i].branch);
			printf("Student DoB        %d.%d.%d\n", record[i].dob_date,record[i].dob_month,record[i].dob_year);
			printf("Student semester   %u\n", record[i].semester);
			printf("Student CGPA       %0.2f\n", record[i].cgpa);
			printf("***************************\n");
		}

	}
	if(! rec_found)
	{
		printf("No record found\n");
	}
}
int add_new_rec (STUDENT_INFO_t* record, int8_t max_rec)
{
	int is_exist = 0;
	int status = 0;
	int roll_num;
	int i;
	for(i = 0; i < max_rec; i++)
	{
		if (! record[i].rollnumber)
		{
			//new rec
			printf("Entert the Roll Number:");
			scanf("%d", &roll_num);
			is_exist = check_roll_num(students, max_rec, roll_num);
			if(is_exist)
				printf("Roll Number already exist.");
			else
			{
				status = 1;
				record[i].rollnumber = roll_num;
				getchar();
				printf("Enter the Student name :");
				scanf("%30[^\n]s", record[i].name);
				getchar();
				printf("Enter the Student Branch :");
				scanf("%30[^\n]s", record[i].branch);
				getchar();
				printf("Enter the Semester :");
				scanf("%u", &record[i].semester);
				printf("Enter the Student CGPA :");
				scanf("%f", &record[i].cgpa);
				printf("Enter the Student DoB like dd<space>mm<space>year :");
				scanf("%d %d %d", &record[i].dob_date, &record[i].dob_month, &record[i].dob_year);
			}break;

		}
	}
	if(i == max_rec)
		printf("No space available.");

	return status;
}
int check_roll_num(STUDENT_INFO_t* prec, int8_t max_rec, int roll_num)
{
	int exist = 0;
	for (int i = 0; i < max_rec; i++)
	{
		if (prec[i].rollnumber == roll_num)
		{
			exist = 1;
			break;
		}
	}
	return exist;
}
int delete_record(STUDENT_INFO_t* record, int8_t max_rec)
{
	int status_flag = 0;
	int roll_num;
	printf("Enter the Roll Number: ");
	scanf("%d", &roll_num);
	for (int i = 0; i < max_rec; i++)
	{
		if(record[i].rollnumber == roll_num)
		{
			status_flag = 1;
			memset (&record[i], 0 , sizeof(STUDENT_INFO_t));
			break;
		}
	}
	return status_flag;
}
