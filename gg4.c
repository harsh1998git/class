#include<stdio.h>
#include<string.h>

#define max 20

struct stack{
	char arr[max];
	char arr2[max];
	char sol[max];
	int top;
}s1;

int getlen();
int postfix();

void main()
{
	int i,res;
	s1.top = -1;
	printf("Enter an infix expression: ");
	scanf("%s",&s1.arr);
	s1.top = getlen();
	res = postfix();
	if(res == 1){	
		printf("Sucess!\n");	
	}
	else
	{
		printf("Failed!\n");
	}

	/*for(i=0;i<s1.top;i++){
		printf("%c",s1.arr2[i]);
	}

	for(i=0;i<s1.top;i++){
		printf("%c",s1.sol[i]);
	}*/
}

int getlen()
{
	int i=0;
	for(;;){
		if(s1.arr[i]=='\0'){
			break;		
		}
		i++;
	}
	return i;
}

int postfix()
{
	int i=0,j=0,k=0;
	
	for(i=0;i<s1.top;i++){
		if((s1.arr[i]>=65 && s1.arr[i]<=90) || (s1.arr[i]>=97 && s1.arr[i]<=122)){
			s1.sol[k]=s1.arr[i];
			k++;
		}
		else{
			s1.arr2[j] = s1.arr[i];
			j++;
		}
	}
}

















