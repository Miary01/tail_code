#include <stdio.h>
#include <stdlib.h>
#include "option.h"
int optioning(int argc,char* argv[]){
	int n=0;
	n=atoi(argv[2]);
	return (n);
}
void open_readfile(FILE* file,int argc,char* argv[],char cmd[100],int n){
	file=fopen(argv[3],"r");
		if(file != NULL){
			process(file,cmd,argc,argv,n);
		}else{
			printf("can't open the file or file doesn't exist");
			exit (1);
		}
}
void process(FILE* file,char cmd[100],int argc,char* argv[],int n){
	int count_line=0;
	while(feof(file)!=1){
		fgets(cmd,100,file);
		count_line+=1;
	}
	tailing(count_line,file,cmd,argc,argv,n);
}
void tailing(int count_line,FILE*file,char cmd[100],int argc,char* argv[],int n){
	int count_line_1=0;
	fclose(file);
	file=fopen(argv[3],"r");
	printf("\n");
	while(feof(file)!=1){
			fgets(cmd,100,file);
			count_line_1+=1;
			if(count_line_1>=count_line-n){
			printf("%s",cmd);
		}
	}
}
