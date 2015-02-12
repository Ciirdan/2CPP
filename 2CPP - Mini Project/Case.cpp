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
	free = false;
}	 
bool Case::GetFree(){
	return free;
}	 
void Case::SetFree(const bool& f){
	free = f;
}