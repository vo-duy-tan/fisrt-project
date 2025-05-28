#include<stdio.h>
#include<math.h>
#define bi 3.141593
float r(float S){
	float R;
	return R=sqrt(S/(4*bi));
}
void V(float S){
	float V;
	float R=r(S);
	V=((float(4)/3)*bi*(R*R*R));
	printf("The Tich V: %f ",V);
}
int main(){
	float S;
	printf("nhap vao dien tich S:  ");
	scanf("%f",&S);
	V(S);
	return 0;
}
//hello ba tan 
