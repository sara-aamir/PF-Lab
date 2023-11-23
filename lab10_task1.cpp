#include <stdio.h>
#include <math.h>

float RADIAN(float degree){
	return degree*22/7/180;
}
float absolute_value(float value){
	if(value>=0)
		return value;
	else
		return -(value);
}
#define EPSILON 0.001

int main(){
	float sin_value,cos_value,cos_floor,sin_floor,cos_ceil,sin_ceil,cos_absolute,sin_absolute,angle;
	printf("Angle\t\tsin\t\tcos\t\tsin floor\tcos floor\tsin ceil\tcos ceil\tsin Absolute\tcos absolute\n");
	for(angle=0;angle<=180;angle=angle+7.5){
		sin_value=sin(RADIAN(angle));
		cos_value=cos(RADIAN(angle));
		//to check and set value one against some value very close to zero but not exactly zero
		if(cos_value < EPSILON && cos_value > -EPSILON)
			cos_value=0;
		//to check and set value one against some value very close to one but not exactly one
		if(cos_value < 1+EPSILON && cos_value > 1-EPSILON)
			cos_value=1;
		//to check and set value -1 against some value very close to -1 but not exactly -1
		if(cos_value < -1+EPSILON && cos_value > -1-EPSILON)
			cos_value=-1;
		//to check and set value 0.5 against some value very close to 0.5 but not exactly 0.5
		if(cos_value < 0.5+EPSILON && cos_value > 0.5-EPSILON)
			cos_value=0.5;
		
		if(sin_value < EPSILON && sin_value > -EPSILON)
			sin_value=0;
		if(sin_value < 1+EPSILON && sin_value > 1-EPSILON)
			sin_value=1;
		if(sin_value < -1+EPSILON && sin_value > -1-EPSILON)
			sin_value=-1;
		if(sin_value < 0.5+EPSILON && sin_value > 0.5-EPSILON)
			sin_value=0.5;
		
		//floor and ceil
		sin_floor=floor(sin_value);
		cos_floor=floor(cos_value);
		sin_ceil=floor(sin_value);
		sin_ceil=floor(cos_value);
		
		//absolute
		sin_absolute=absolute_value(sin_value);
		cos_absolute=absolute_value(cos_value);
		
		
		printf("%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n",angle,sin_value,cos_value,sin_floor,cos_floor,sin_ceil,cos_ceil,sin_absolute,cos_absolute);
	}
	return 0;
}
