#include "BrazoRobotico.h"
#include <iostream>

int main(){
	BrazoRobotico brazo = BrazoRobotico(0,0,0);
	std::cout<<"El robot se encuentra en la posición: ("<<brazo.getX()<<","<<brazo.getY()<<","<<brazo.getZ()<<")."<<std::endl;
	brazo.coger();
	if(brazo.estaSujetando() == false){
		std::cout<<"No está sujetando."<<std::endl;
	} else if(brazo.estaSujetando() == true){
		std::cout<<"Está sujetando."<<std::endl;
	}

	brazo.mover(1,0,1);
	std::cout<<"El robot se movió a la posición: ("<<brazo.getX()<<","<<brazo.getY()<<","<<brazo.getZ()<<")."<<std::endl;

	return 0;
}
