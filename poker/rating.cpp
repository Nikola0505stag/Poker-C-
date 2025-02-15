#include<iostream>
#include"card.h"
#include "start.h"
#include <windows.h>
#include "rating.h"

using namespace std;

int points;

int rate(int n) {
	points = 0;
	if (sameValues(n)) {
		points = 10;
	}
	else if (sameColor(n)) {
		points = 20;
	}
	return points;
}

bool sameValues(int n) {  //rule 1 cards to be the same 
	if (players.at(n).card1.cardd == players.at(n).card2.cardd && players.at(n).card1.cardd == players.at(n).card3.cardd) {
		return true;
	}
	return false;
}

bool sameColor(int n) { // rule 2 cards to be same color
	if (players.at(n).card1.color == players.at(n).card2.color && players.at(n).card1.color == players.at(n).card3.color) {
		return true;
	}
	return false;
}
