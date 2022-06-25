#include<stdio.h>
//sorting array(decreasing) of size 10 integers in c

//swap fuction
int swap(int* n,int *z){
if(*n<*z){
int temp=*n;
*n=*z;
*z=temp;
return *n;
return *z;}
}

//main driving function
int main(){
int a[10];
for(int y=0;y<10;y++){
scanf("%d",&a[y]);}
for(int y=0;y<9;y++){
for(int x=0;x<9;x++){
swap(&a[x],&a[x+1]);}}
for(int y=0;y<10;y++){
printf("%d",a[y]);}

return 0;
}
