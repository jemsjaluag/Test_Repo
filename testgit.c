#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	
	if(argc > 1){
		printf("You entered: %d\n", atoi(argv[1]));
	}
	else printf("Need arguments, dude.\n");
}