#include<stdlin.h>

int func(int n){
    if(n<=0){
        return 1;
    }
    else{
        return n*func(n-1);
    }
}
int main(){
    int n'
    scanf("%n",&n);
    printf("%d",func(n));
    return 0;
}
