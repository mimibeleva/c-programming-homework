#include<stdio.h>
int main(){
int n,m,s;
float a,c;
scanf("%d",&n);
c=n;
for(s=0;n>=1;n--){scanf("%d",&m);
                  s=s+m;}
a=(float)s/c;
printf("\nSum:");printf("%d",s);
printf("\nAvg:");printf("%.2f",a);
}

