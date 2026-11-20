#include<stdio.h>
int par(int numero){
return numero % 2 == 0;
}

int main(){
int n;
printf("Digite um numero:")>
scanf("%d", &n);
if(par(n)){
    printf("%d eh par. \n", n);
}else{
printf("%d eh impar. \n", n);
}

return 0;
}
