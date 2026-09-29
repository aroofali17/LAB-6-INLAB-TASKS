#include<stdio.h>
int main(){
	int age,categ,price,monthdat;
	float disc,Tprice,Tdisc;
	age=1;
    while (age!=0){
	
	
	printf("\nEnter Age\t");
	scanf("%d",&age);
	if (age==0){
        break;
        }
	printf("\nEnter Category you want 1)Regular 2)3D 3)Premiere\t");
	scanf("%d",&categ);
	printf("\nEnter Day number 1 to 31\t");
	scanf("%d",&monthdat);
	switch(categ){
		case 1:{
			printf("\nYour ticket is regular Price is 500");
			price=500;}break;
		case 2:{
			printf("\nYour ticket is 3D MOVIE Price is 800");
			price=800;}break;
		case 3:{
		printf("\nYour ticket is Premiere Show Price is 1200");
			price=1200;}break;
		default:{
			printf("\nINVALID");break;}
	}
	if (age<13){
		disc=0.3;
	}
	else if (age>=60){
		disc=0.2;
	}
	else{
		disc=0;
	}
	Tdisc=price*disc;
	Tprice=price-Tdisc;
	if(monthdat%5==0){
	printf("\nBONUS DAY Rs 50 off");
	Tprice=Tprice-50;}
	else 
	printf("\nNO Rs 50 off");
	if(Tprice<100)
	Tprice=100;
	else
	printf("\nHigher than 100");
	printf("\n%2f percent discount",disc);
	printf("\nFinal Discount %2f",Tdisc);
	printf("\nTOTAL PRICE %2f",Tprice);
		
	}

	return 0;
	
}
