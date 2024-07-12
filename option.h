#ifndef OPTION_H
#define OPTION_H
int optioning(int argc,char* argv[]);
void open_readfile(FILE* file,int argc,char* argv[],char cmd[100],int n);
void process(FILE* file,char cmd[100],int argc,char* argv[],int n);
void tailing(int count_line,FILE*file,char cmd[100],int argc,char* argv[],int n);
#endif
