#include<stdio.h>
int main(){
int c,n,m,s;
float a;
scanf("%d",&n);
c=n;
for(s=0;n>=1;n--){scanf("%d",&m);
                  s=s+m;}
a=s/c;
printf("\nSum:");printf("%d",s);
printf("\nAvg:");printf("%.2f",a);
}
