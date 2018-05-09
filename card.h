#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;

class card{
	private:
		int set_suit = 0;
		string suits[4] = {"Spade", "Club", "Heart", "Diamond"};
		string values[13] = {"Ace", "2","3","4","5","6","7","8","9","10","Jack","Queen","King"};
		//string played[3] = {"In Play", "In Deck", "Discard Pile"};
		int weight [13] = { 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };

	public:
		void generate ();
		void shuffle ();
		void deal ();
		void discard();
		
		struct gen_Deck{
			string suit;
			string value;
			int cardValue;
			int cardState;
		}Deck[53];
};