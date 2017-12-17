#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int create_fd(int length){
	int fd; 

	if((fd = open("file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666)) == -1)
		fprintf(stderr, "ERROR MESSAGE");

	return fd; 
}

int test_1(){
	printf("Executing Test #1 (write to r/o mmap): ");
}

int test_23(int flags){
	if(flag = MAP_SHARED)
		printf("Executing Test #2 (writing to MAP_SHARED): ");
	else if(flag = MAP_PRIVATE)
		printf("Executing Test #3 (writing to MAP_PRIVATE): ");
	else
		fprintf(stderr, "Invalid command for test 2 or 3")
}

int test_4(){
	printf("Executing Test #4 (writing beyond the edge): ");
}

int test_5(){
	printf("Executing Test #5 (writing into a hole): ");
}

int test_6(){
	printf("Executing Test #6 (reading beyond the edges): ");
}

int main(int argc, char **argv){
	if(argc > 2)
		fprintf(stderr, "ERROR MESSAGE");
	else
		switch(atoi(argv[1])){
			case 1:
				test_1();
			case 2:
				test_23(MAP_SHARED);
			case 3:
				test_23(MAP_PRIVATE);
			case 4:
				test_4();
			case 5:
				test_5();
			case 6:
				test_6(); 
			default:
				fprintf(stderr, "ERROR MESSAGE");
		}
}