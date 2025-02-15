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
		points = 10;  //test value
	}
	else if (sameColor(n)) {
		points = 20; //test value
	}
	else if (doubleA(n)) {
		points = 22; //real value 
	}
	else if (doubleSeven(n)) {
		points = 23; //real value
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
bool doubleA(int n) { // rule 3 cards to be two aces and one no ace
	if (players.at(n).card1.cardd == players.at(n).card2.cardd && players.at(n).card1.cardd == 'A' && players.at(n).card3.cardd != 'A' ||
		players.at(n).card1.cardd == players.at(n).card3.cardd && players.at(n).card1.cardd == 'A' && players.at(n).card2.cardd != 'A' ||
		players.at(n).card2.cardd == players.at(n).card3.cardd && players.at(n).card2.cardd == 'A' && players.at(n).card1.cardd != 'A'
		) {
		return true;
	}
	return false;
}
bool doubleSeven(int n) { // rule 4 cards to be two sevens and one no seven
	if (players.at(n).card1.cardd == players.at(n).card2.cardd && players.at(n).card1.cardd == '7' && players.at(n).card3.cardd != '7' ||
		players.at(n).card1.cardd == players.at(n).card3.cardd && players.at(n).card1.cardd == '7' && players.at(n).card2.cardd != '7' ||
		players.at(n).card2.cardd == players.at(n).card3.cardd && players.at(n).card2.cardd == '7' && players.at(n).card1.cardd != '7'
		) {
		return true;
	}
	return false;
}