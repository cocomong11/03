#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c,ch;
	int i,in;

	printf("enter a character:");
	scanf("%c",&c);
	i=c;
	in=c+1;
	ch=in;
	
	printf("The next character of %c(%i) is %c (%i)\n",c,i,ch,in);

	return 0;
}
