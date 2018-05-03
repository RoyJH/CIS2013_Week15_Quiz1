#include <iostream>
#include <cstring>
using namespace std;


class card{
	private:
		string suit[4] = {"spade", "club", "heart", "diamond"};
		string value[13] = {"Ace", "2","3","4","5","6","7","8","9","10","Jack","Queen","King"};
		int weight [11] = {1,2,3,4,5,6,7,8,9,10,11};

	public:
		generate ();

};