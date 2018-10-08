#include <stdio.h>

int main(){
    char x;
    printf("o -->orange\nb -->brown\ny -->yellow\ng -->green\nselect the color >>> ");
    scanf("%c",&x);
    switch (x){
      case 'o':case 'O':puts("ammonia");break;
      case 'b':case 'B':puts("carbon monoxide");break;
      case 'y':case 'Y':puts("hydrogen");break;
      case 'G':case 'g':puts("oxygen");break;
      default :puts("wrong selection");
    }
}
