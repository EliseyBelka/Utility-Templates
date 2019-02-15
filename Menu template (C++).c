#include <stdio.h>
#include <math.h>
#define CompletedTask 4 

void printMenu();
void task_1();
void task_2();
void task_3();
void task_4();

int main(int argc, const char * argv[])
{
	printMenu();
}


void printMenu() {
	int answer = 0;
	do {
		printf("Completed tasks: %d\nSelect task number:\n", CompletedTask);
		printf("0. Exit\n1. Task1;\n2. Task2;\n3. Task3;\n4. Task4;\n");
		scanf("%d", &answer);
	} while (answer < 0 || answer > CompletedTask);

	switch (answer) {
	case 0:
		return;
	case 1:
		task_1();
		break;
	case 2:
		task_2();
		break;
	case 3:
		task_3();
		break;
	case 4:
		task_4();
		break;

	default:
		break;
	}
	printf("\n");
	printMenu();
}


void task_1() {
	printf("Body task_1");
}

void task_2() {
	printf("Body task_2");
 }


void task_3() {
	printf("Body task_3");
}

void task_4() {
	printf("Body task_4");
}



