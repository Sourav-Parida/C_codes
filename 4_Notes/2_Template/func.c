#include<stdio.h>
#include<conio.h>

float areacircle(float);
float a,c,area;
int main(){
    printf("entera");
    scanf("%f",&a)
    area= areacircle(a);
    printf("%f",area);
    return 0;
}
float areacircle(float r){
    c=r*r;
    return c;
}