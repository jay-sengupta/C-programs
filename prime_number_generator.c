//prime number generator
#include<stdio.h>
int main(){
int d=1;//serial number
unsigned long long int i=4,y=2,n;//assigned 
printf("\nEnter the end(like upto "
"which number you want it \nto be printed):");//
scanf("%llu",&n);//range
printf("%d.%d\n",d++,2);
printf("%d.%d\n",d++,3);
x:while(i<n){//loop for generation
while(y<i){
if(i%y==0){
goto z;}
else{
y++;}}
printf("%d.%llu\n",d++,i);//prime numbers
z:y=2;
i++;
goto x;}
return 0;
}
