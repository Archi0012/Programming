#include<stdlin.h>

int func(int n){
    if(n<=0){
        return 1;
    }
    else{
        return n*func(n-1);
    }
}
int func2(int n){
    if(n<0){
        return 0;
    }
    else{
        return n+func2(n-1);
    }
}
int main(){
    int n'
    scanf("%n",&n);
    printf("%d\n %d",func(n),func2(n));
    return 0;
}
