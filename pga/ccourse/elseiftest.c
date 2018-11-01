#include <stdio.h> 

int main(){
	int a = 6;
	if(a < 0){
		printf("a is nagative");
	}else if(a == 5){
		printf("Some text");
		a+=1000;
		a--;
	}else{
		printf("it went into the last else");
	}
	return 0;
}
