#include<vector>
#include<iostream>

using namespace std;

 struct card {
	char cardd;
	char color ;
};

 struct player {
	card card1;
	card card2;
	card card3;

	player() {
		card1 = { '0', '0' };
		card2 = { '0', '0' };
		card3 = { '0', '0' };
	}

};


extern vector <card> deck;

char intToChar(int num);

void makeDeck();

void giveCardsToPlayer(player& p1);