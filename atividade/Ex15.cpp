#include<stdio.h>
main(){
	float temp_cel, temp_far;
	printf("Digite a temperatura em celcius: ");
	scanf("%f", &temp_cel);
	temp_far = 180*(32+temp_cel)/100;
	printf("A temperatua em Farenheit e: %.2f", temp_far);

}
