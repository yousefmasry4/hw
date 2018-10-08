#include <stdio.h>

int main(){
    float zz,yoyo,jo,answer=1,ex=3;
    int counter,f1=1,f2=0;
    scanf("%f",&yoyo);//the input 99 not 1/99
    jo=1/yoyo;
    while (zz != jo){
        zz=1/ex;
        if(f1 == 1){
            answer-=zz;
            f1=0;
            f2=1;
        }
        else if(f2 == 1){
            answer+=zz;
            f2=0;
            f1=1;
        }
        ex+=2;
      }
    printf("the answer is %f",4*answer);

}
