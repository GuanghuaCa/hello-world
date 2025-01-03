#include <stdio.h>
typedef unsigned char *pointer;

void showBytes();

int main(){
	int num = 15222;
	printf("%08x\n", num);
	int* ptr = &num;
	showBytes((pointer) &num, sizeof(int));
}

void showBytes(pointer start, unsigned len){
	unsigned i;
	for(i = 0; i < len; i++){
		printf("%p\t%.2x\n", start + i, *(start+i));
	}
}
