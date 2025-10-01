#include <iostream>
#include "BrazoRobotico.h"

double BrazoRobotico::getX() const{
	return x;
}

double BrazoRobotico::getY() const{
	return y;
}

double BrazoRobotico::getZ() const{
	return z;
}

BrazoRobotico::BrazoRobotico(double x_ini, double y_ini, double z_ini){
	x = x_ini;
	y = y_ini;
	z = z_ini;
	sujetando = false;
}

bool BrazoRobotico::estaSujetando(){
	return sujetando;
}

void BrazoRobotico::coger(){
	sujetando = true;
}

void BrazoRobotico::soltar(){
	sujetando = false;
}

void BrazoRobotico::mover(double x_dest, double y_dest, double z_dest){
	x = x_dest;
	y = y_dest;
	z = z_dest;
}

