#include "stdafx.h"
#include "Case.h"


Case::Case()
{
	broken = false;
	free = true;
}

Case::~Case()
{
}

bool Case::GetBroken(){
	return broken;
}	 
void Case::SetBroken(const bool& b){
	broken = b;
}	 
bool Case::GetFree(){
	return free;
}	 
void Case::SetFree(const bool& f){
	free = f;
}
int Case::GetStatus(){
	if (broken == true){
		return 1;	//Cass�
	}
	else if (free == false && broken == false){
		return 2;	//Ange
	}
	else if (broken == false && free == true){
		return 3;	//Vide
	}
}