#include <stdio.h>
#include <math.h>
int main() {
int a,b,c,n;
double srednee;
a=1;
printf("Enter some numbers,enter 0 to stop\n");
while(a!=0){
scanf("%d",&a);
srednee+=a;
n++;}
srednee=srednee/(n-1);
printf("Arithmetical mean is %lf\n",srednee);
}
