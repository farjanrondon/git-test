/* Programa que cuenta del 1 al 10 */

#include<stdio.h>

int main(){

	int i = 0;
	while(i <= 10){
		fprintf(stdout, "%i\n", i);
		i += 1;
	}

	return 0;
}