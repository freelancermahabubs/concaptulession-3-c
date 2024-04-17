#include <stdio.h>
int main() {
    // int a;
    // while (scanf("%d", &a) != EOF) 
    // {
    //     if(a==1999){
    //         printf("Correct\n");
    //         break;
    //     }
    //     else{
    //         printf("Wrong\n");
    //     }
    // }
    // method 2 
    while (1)
    {
       int b;
       scanf("%d",&b);
       if(b==1999){
        printf("Correct\n");
        break;
       }
       else{
        printf("Wrong\n");
       }
    }
    
    return 0;
}