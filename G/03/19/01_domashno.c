#include<stdio.h>
int main(){
int n,m,i,s=0;
float a;
scanf("%d",&n);
for(i=0;i<n;i++){scanf("%d",&m);
                  s=s+m;}
a=(float)s/n;
printf("\nSum:%d",s);
printf("\nAvg:%.2f",a);
return 0;
}

