#include<stdio.h>
#include<math.h>
//armstrong number
int main () {
//digit
    int n,num,temp,w,x,y,z;
    scanf("%d",&num);
    n=(int)log10(num);
    printf("number of digit=%d\n",n+1);
    n=n+1;
    temp=num;
    w=num/1000;
    temp=num%1000;
    x=temp/100;
    temp=num%100;
    y=temp/10;
    z=num%10;
    if (pow(w,n)+pow(x,n)+pow(y,n)+pow(z,n)==num){
        printf("ARMSTRONG NUMBER");
    }
    else {
        printf("NOT A ARMSTRONG NUMBER");
    }
 return 0;
 }
