#include<stdio.h>
int main(){
	int scanned;
	int option;
//	do
//	{
	
	printf("choose any of the options\n");
	printf("1.insert\n");
	printf("2.append\n");
	printf("3.random insert\n");
	printf("4.delete first element\n");
	printf("5.display\n");
	printf("6.count\n");
	printf("7.sort\n");
	printf("8.reverse\n");

	scanf("%d\n",&option);
//	printf("%d\nyou have chosen",option);
	switch (option){
	case 1:
//		insert();
		printf("data inserted successfully");
		break;
	case 2:
//		append();
		printf("data appended");
		break;
	case 3:
//		random_insert();
		printf("data randomly inserted");
		break;
	case 4:
//		delete_first();
		printf("first data delete");
		break;
	case 5:
//		display();
		printf("data printed");
		break;
	case 6:
//		count();
		printf("count the no of data");
		break;
	case 7:
//		sort();
		printf("data sorted");
		break;
	case 8:
//		reverse();
		printf("reverse the data");
		break;
	}
/*	printf("enter 1 if u want to continue or enter 0 if u want to terminate");
	scanf("%d\n",&scanned);

}
while (scanned==1);
return 0;
*/
}


