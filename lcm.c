#include<stdio.h>

int lcm(int,int);
int main(){
int a,b,c,l,k;
printf("Enter any three positive integers" );
scanf("%d%d%d",&a,&b,&c);
if(a<b)
l = lcm(a,b);
else

l = lcm(b,a);

if(l>c)

k= lcm(l,c);

else

k= lcm(c,l);

printf("LCM of two integers is %d",k);

return 0;

}

int lcm(int a,int b){

int temp = b;

while(1){

if(temp % b == 0 && temp % a == 0)

break;

temp++;

}

return temp;
}
