#include <iostream>
#include <cstring>
#include "player.h"
//#include "card.h"
using namespace std;

player::player (string player_name, string_action, int cards){
		name = player_name;
		dothis = action;
}player::player (){
		set_name (user);
		set_hit (action);
		int cards (2);
}
void player::set_name(string player_name){
	name = player_name;
}
string player::get_name(){
	return name;
}
void player::set_cards(int in_hand){
	cards = in_hand;
}
int player::get_cards(){
	return cards;
}
void player::set_hit(string action){
	dothis = action;
	if (dothis == "hit"){
	hit = true;}
		//cards++;}
	else if (dothis == "stay"){
		hit = false;}
}
bool player::get_hit(){
	return hit;
}