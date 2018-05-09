#include <iostream>
#include <cstring>
#include <ctime>
#include "card.h"
//#include "player.h"
using namespace std;

void card::generate(){
	for (int x=0; x < 52; x++){
		Deck[x].suit = suits[set_suit];
		Deck[x].value = values[x % 13];
		Deck[x].cardValue = weight[x % 13];
		//Deck[x].cardState = 1;
			if ((x + 1) % 13 == 0)
			{set_suit++;}
		//cout << Deck[x].value <<" of "<< Deck[x].suit <<" has a value of "<<Deck[x].cardValue << endl;
	}
}
void card::shuffle (){
	srand(time(NULL));
		for (int x = 0; x < 1000; x++)
		{
			int a = rand() % 52;
			int b = rand() % 52;
			
			Deck[52].suit = Deck[a].suit;
			Deck[52].value = Deck[a].value;
			Deck[52].cardValue = Deck[a].cardValue;
			Deck[52].cardState = Deck[a].cardState;

			Deck[a].suit = Deck[b].suit;
			Deck[a].value = Deck[b].value;
			Deck[a].cardValue = Deck[b].cardValue;
			Deck[a].cardState = Deck[b].cardState;

			Deck[b].suit = Deck[52].suit;
			Deck[b].value = Deck[52].value;
			Deck[b].cardValue = Deck[52].cardValue;
			Deck[b].cardState = Deck[52].cardState;
		}
		// for (int y=0; y<52; y++){
			// cout << Deck[y].value <<" of "<< Deck[y].suit <<" has a value of "<<Deck[y].cardValue << endl;}
}
void card::deal(){
	
}
void card::discard() {
	
}