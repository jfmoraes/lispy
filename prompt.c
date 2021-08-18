#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>


int main(int argc, char** argv){
	puts("... Lispy Version 0.0.0.0.1");
	while(1){
		char* input = readline(">>> ");
		add_history(input);
		free(input);
	}
	return 0;
}
