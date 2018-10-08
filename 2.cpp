#include <stdio.h>
float c(float *x);
float f(float *f);
int main(){
      float x;
      printf("enter a depth (in kilometers) >>>");
      scanf("%f",&x);
      float m=c(&x);
      printf("%f\n",m);
      printf("%f",f(&m));

}

float c(float *x){
      float answer=(10*(*x))+20;
      return answer;
}

float f(float *f){
  float answer=(1.8*(*f))+32;
  return answer;
}
