#include<stdio.h>
int main(){
//	int q[]={45,68,61,472,46,13,18,9,44};
// int q=46;
//printf("%d\n",q);
int a[3];
a[0]=45;
a[1]=49;
a[2]=55;
a[3]=44;
//a[4]=89;
//a[5]=99;
//a[6]=21;
for (int i=0;i<=3;i++){
//	int ab=a[i];
//	printf("%d\n",ab);
int first=a[i];
int second=a[i+1];
int third=a[i+2];
int fourth=a[i+3];

	if ((first > second) && (first > third) && (first > fourth)){

	printf("%d\n largest no",first);

	}
	else if ((second > first) && (second > third) && (second > fourth)){
		printf("%d\n largest no", second);
	}
	else if ((third > first) && (third > second) && (third > fourth)){
		printf("%d\n largest no", third);
	}
	else if ((fourth > first) && (fourth > second) && (fourth > third)){
		printf("%d\n largest no", fourth);
	}
}
}
