#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char* argv[]) {
	int i = 0;
	while(i < 20){
		int pid = fork();
		if(pid == 0){
			int j = 0;
			while(j<=10000000){
				j = j+1;
			}
			exit(0);
		} else {
			//printf("Child : %d\n",pid);
		    wait(0);
		}
		i +=1;
	}
	exit(0);
}
