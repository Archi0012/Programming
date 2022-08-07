#include<stdlin.h>

int func(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return func(n-1) + func(n-2);
    }
}
int func2(int n){
    return n+1;
}
int main(){
    int n'
    scanf("%n",&n);
    printf("%d\n%d",func(n),func2(n));
    retunrn 0;
}
