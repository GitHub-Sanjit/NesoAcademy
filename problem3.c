#include<stdio.h>

int f(int j){
    static int i = 50;
    int k;
    if(i==j){
        printf("something");
        k = f(i);
        return 0;
    }else
        return 0;
}
int main()
{
    f(50);
    return 0;
}

// The function will exhaust the runtime 
// stack or run into an infinite loop when j=50.