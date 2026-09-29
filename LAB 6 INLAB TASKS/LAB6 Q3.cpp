#include<stdio.h>
int main(){
	int m1,m2,m3,n,sum,average,averg;
	printf("Enter number of students ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	printf("\nEnter Marks of 1st Subject ");
	scanf("%d",&m1);
	printf("\nEnter Marks of 2nd Subject ");
	scanf("%d",&m2);
	printf("\nEnter Marks of 3rd Subject ");
	scanf("%d",&m3);
	sum=m1+m2+m3;
	average=sum*100/300;
	averg=average/10;
	switch(averg){
		case 9:
		case 10:
		printf("\nA GRADE");
			break;
		case 8:
			printf("\nB GRADE");
			break;
		case 7:
			printf("\nC GRADE");
			break;
		case 6:
			printf("\nD GRADE");
			break;
		default:
			printf("\nFAIL");
			break;}
		printf("\nTotal Average= %d",average);
		printf("\nresult= %s",(average>=60&&m1>=40&&m2>=40&&m3>=40)?"PASS":"FAIL");
		}
	return 0;
}
