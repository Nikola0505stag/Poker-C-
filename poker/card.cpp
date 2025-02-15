#include "card.h"
#include<vector>
#include<iostream>
#include <cstdlib>  // За rand() и srand()
#include <ctime> 


using namespace std;



vector <card> deck;

char intToChar(int num) {
	if (num == 1) {
		return 'C';
	}
	else if (num == 2) return 'D';
	else if (num == 3) return 'H';
	else if (num == 4) return 'S';
	else if (num >= 7 && num < 10) {
		return num + '0';
	}
	else if (num == 10) {
		return 'T';
	}
	else if (num == 11) return 'J';
	else if (num == 12) return 'Q';
	else if (num == 13) return 'K';
	if (num == 14) return 'A';

	return ' ';
}

void makeDeck() {
	for (int i = 1; i <= 4; i++) {
		for (int j = 7; j <= 14; j++) {
			card cr;

			deck.push_back({ intToChar(j),intToChar(i) });
		}
	}
}

void giveCardsToPlayer(player& pl) {
	
	if (deck.size() < 3) {
		cout << "Not enough cards in the deck!" << endl;
		return;
	}

	for (int i = 0; i < 3; i++) {
		int idx = rand() % deck.size();

		if (i == 0) pl.card1 = deck[idx];
		else if (i == 1) pl.card2 = deck[idx];
		else if (i == 2) pl.card3 = deck[idx];

		deck.erase(deck.begin() + idx);
	}

}