#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main(){
	long int val = syscall(335);
	printf("System call .: sys_qotd :. returned 		%d\n", val);
	return 0;
}
