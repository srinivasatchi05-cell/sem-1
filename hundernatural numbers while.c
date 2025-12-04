#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=1,t=1;
	while(t<11)
	{
	
	 while(n<101)
	 {
	 	printf("\t%d",n);
	 	n=n+1;
	 }
	 t=t+1;
	 getch();
	 n=1;
	 
}
	return 0;
}
