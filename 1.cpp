#include <stdio.h>

int main(){
  float initial[3],annual[3],tax[3],answer;
  for(int i=0;i<3;i++){
    printf("enter the initial>>>");
    scanf("%f",&initial[i]);
    printf("enter the annual>>>");
    scanf("%f",&annual[i]);
    printf("enter the tax>>>");
    scanf("%f",&tax[i]);
  }
  puts("\n\n\n\n\n");
  for (int x=0;x<3;x++){
    answer=(initial[x]+annual[x])*tax[x];
    answer*=initial[x];
    printf("answer >>> %f\n",answer);
  }


}
