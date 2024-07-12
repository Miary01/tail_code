
#include <stdio.h>
#include <stdlib.h>
#include "option.h"

int main(int argc,char* argv[]){
	int n;
	argc=4;
	char cmd[100];
	FILE* file=NULL;
	n=optioning(argc,argv);
	open_readfile(file,argc,argv,cmd,n);
	return 0;
}

