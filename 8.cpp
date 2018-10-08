#include <stdio.h>

int main(){
  int last,cheak,ans=0,arr[12];
  for(int hhh;hhh<12;hhh++){
    scanf("%d",&arr[hhh]);
  }
  for(int v=0;v<12;v+=2){
    ans+=arr[v];
  }
  ans*=3;
  for(int vs=1;vs<12;vs+=2){
    ans+=arr[vs];
  }
  last=ans%10;
  switch(last){
      case 0:cheak=0;break;
      default:cheak=last-10;
  }
//  printf("%d -------------->%d\n",cheak,arr[11]);
  if(cheak == arr[11])
      puts("UPC is assumed correct");
  else
      puts("UPC is not assumed correct");
}
