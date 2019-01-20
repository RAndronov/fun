/*
	proof of
	int f(int x) => f(f(x)) == -x

	solution was found here
	https://math.stackexchange.com/questions/312385/find-a-real-function-f-mathbbr-to-mathbbr-such-that-ffx-x/312421#312421

*/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define INT_MIN -2147483646
#define INT_MAX 2147483646

int f(int x){

	if(x==0)
		return 0;
	else if(x>0 && abs(x)%2==1)
		return (x+1);
	else if(x>0 && abs(x)%2==0)
		return (1-x);
	else if(x<0 && abs(x)%2==1)
		return (x-1);
	else
		return (-1-x);

}

int main(){

	for(int i=INT_MIN; i<INT_MAX; i++){
		if(f(f(i)) != -i)
			printf("proof has failed with argument %d", i);

	}

	exit(0);
}