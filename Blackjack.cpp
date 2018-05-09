#include <iostream>
#include <cstring>
#include <ctime>
#include "card.h"
#include "player.h"
using namespace std;

string action;
string player_name;
int iin_hand;


int main(){
	card y;
	y.generate();
	y.shuffle();
	
	player dealer;
	player user;
return 0;}