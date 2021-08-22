/* Name:Mazhar Hussain     Reg No:20MDELE098
email: 20MDELE098@uetmardan.edu.pk.*/
#include<stdio.h>
int main(){
		int variable=50;//declaring and initializing variable//
	    int *pointer=&variable;//declaring pointer and initializing pointer //
	    
		printf("%p is the variable address\n",pointer);//printing address of variable using pointer//
	    printf("%d is variable actual value\n",*pointer);//printing value of variable  using pointer//
	return 0;
}

