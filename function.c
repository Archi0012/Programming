#include<stdlin.h>

int func(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return func(n-1) + func(n-2);
    }
}
int main(){
    int n'
    scanf("%n",&n);
    retunrn func(n);
}
