#include <stdio.h>

int main(){
    int arr[10]={1,3,2,1,1,2,3,3,2,3},jo;
    float g=0;
    printf("if you select any number without 1 or 2 or 3 it will be false \n************************************************");
    for (int i=1;i<=10;i++){
        printf("\nthe answer of question %d is (1 or 2 or 3) >>>",i);
        scanf("%d",&jo);
        if (jo == arr[i-1])
            g++;
        }
    g=(g/10)*100;
    printf("\nyou get %g",g);
    printf("\%");

}
