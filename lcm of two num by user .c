#include<stdio.h>
int main(){
  int s1,s2,x,y;
  printf("\nEnter two numbers:");
  scanf("%d %d",&n1,&n2);
  x=s1,y=s2;
  while(s1!=s2){
      if(s1>s2)
           s1=s1-s2;
      else
      s2=s2-s1;
  }
  printf("L.C.M=%d",x*y/s1);
  return 0;
}
