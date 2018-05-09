#include <iostream>
#include <cstring>
//#include "card.h"
using namespace std;

class player{
	private:
		string name;
		string dothis;
		int cards;
		//int *a;
		//a = new int* cards;
		//hand[a];
		bool hit = true;
		//hitting or staying
	
	public:
		player(string, string, int);
		void set_name(string name);
		string get_name();
		void set_cards(int cards);
		int get_cards();
		void set_hit(bool hit);
		bool get_hit();
};