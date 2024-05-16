#include <stdio.h>


int foo(int x){
        
        return foo(x)*x;
    }
int main()
{
    
    printf("%d",foo(2));
}
