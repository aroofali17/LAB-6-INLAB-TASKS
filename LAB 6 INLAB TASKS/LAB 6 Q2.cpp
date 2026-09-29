#include<stdio.h>
int main(){
    int v,choi;
	while(1){
		printf("Enter value (-1 to stop)");
        scanf("%d",&v);
		if (v==-1)
            break;

        printf("1. Switch Water Heater on\n");
        printf("2. Switch Air Conditioner off\n");
        printf("3. Toggle Main Lights\n");
        printf("4. Check Security Camera\n");
        scanf("%d",&choi);

        switch (choi){
            case 1:
                v=v|2;
                break;
			case 2:
                v=v&(~4);
                break;
			case 3:
                v=v^1;
                break;
			case 4:
                if(v&8)
                    printf("Security Camera is on\n");
                else
                    printf("Security Camera is off\n");
                break;
			 default:
                printf("Invalid\n");
        }
		printf("New combined appliance value: %d\n", v);
		if ((v&4)&&(v&2))
            printf("Overload warning\n");
        else
            printf("No overload\n");
    }
	return 0;
}

