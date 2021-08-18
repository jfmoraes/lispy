#include <stdio.h>

static char input[2048];

int main(int argc, char** argv){
	puts("... Lispy Version 0.0.0.0.1");
	while(1){
		fputs(">>> ", stdout);
		fgets(input, 2048, stdin);
	}
}
