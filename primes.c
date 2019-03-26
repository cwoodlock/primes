#include <stdio.h>

int isPrime(unsigned int test){

	unsigned int i;

	for (i = 2; i < test; i++) {
		if(test % i == 0){
			return 0;	
		}

	}
	return 1;



}


int main(int argc, char *argv[]){

	unsigned int test = 653;

	if(isPrime(test)){
		printf("It's prime");
	}else{
		printf("it's not prime");
	}

	return 0;


}

