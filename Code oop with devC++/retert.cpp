#include "iostream"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"
int check(char c){
	if(!isupper(c)){
		return 0;
	}
	return 1;
}
int main(){
	char c;
	gets(c);
	cout<<check(c);
}
