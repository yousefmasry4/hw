#include <stdio.h>

int main(){
    int arr[3][10],h8=0,h6=0,l6=0;
    float av=0;
    for(int x=0;x<3;x++){
        for(int y=0;y<10;y++){
              scanf("%d",&arr[x][y]);
        }
    }
    for(int fx=0;fx<3;fx++){
        for(int fy=0;fy<10;fy++){
              av+=arr[fx][fy];
              if(arr[fx][fy] >= 85)
                  h8++;
              else if (arr[fx][fy] >= 60)
                  h6++;
              else
                  l6++;
        }
    }
    printf("\n\n|there \tare %d|\t days higher \tthan 85\nthere \tare %d\t days higher \tthan 60 and less than 84\nthere \tare %d\t days   less \tthan 60 ",h8,h6,l6);
    av/=30;
    printf("\nthe average >>>%f",av);
}
