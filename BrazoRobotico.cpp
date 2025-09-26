#include <iostream>
#include "BrazoRobotico.h"

double BrazoRobotico::getX(){
	return x;
}

double BrazoRobotico::getY(){
	return y;
}

double BrazoRobotico::getZ(){
	return z;
}

BrazoRobotico::BrazoRobotico(double x_ini, double y_ini, double z_ini){
	x = x_ini;
	y = y_ini;
	z = z_ini;
}



