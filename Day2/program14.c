#include<stdio.h>
#include<math.h>
int cubeFree(int n){
	int i;
	for(i=2;i<=cbrt(n);i++){
		if(n%(i*i*i)==0){
			return 0;
		}
    }
    return 1;
}

void findAandB(int n){
	int a3,a,b;
	for(a=1;a<=cbrt(n);a++){
	  a3=a*a*a;	
	}
	
	if(n%a3 == 0){
		b=n/a3;
		if(cubeFree(b)){
			printf("a =%d , b=%d\n",a,b);
		}
	}
}

int main(){
	int n;
	printf("Enter any number=");
	scanf("%d",&n);
	findAandB(n);
    return 0;	
}
