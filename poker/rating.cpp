#include<iostream>
#include"card.h"
#include "start.h"
#include <windows.h>
#include "rating.h"

using namespace std;

int points = 0;

bool isFirstElevenPoints(int n) {
	if (players.at(n).card1.cardd == 'A') return true;
	return false;
}
bool isSecondElevenPoints(int n) {
	if (players.at(n).card2.cardd == 'A') return true;
	return false;
}
bool isThirdElevenPoints(int n) {
	if (players.at(n).card3.cardd == 'A') return true;
	return false;
}
bool isFirstTenPoints(int n) {
	if (players.at(n).card1.cardd == 'K' || players.at(n).card1.cardd == 'Q' ||
		players.at(n).card1.cardd == 'J' || players.at(n).card1.cardd == 'T') return true;
	return false;
}
bool isSecondTenPoints(int n) {
	if (players.at(n).card2.cardd == 'K' || players.at(n).card2.cardd == 'Q' ||
		players.at(n).card2.cardd == 'J' || players.at(n).card2.cardd == 'T') return true;
	return false;
}
bool isThirdTenPoints(int n) {
	if (players.at(n).card3.cardd == 'K' || players.at(n).card3.cardd == 'Q' ||
		players.at(n).card3.cardd == 'J' || players.at(n).card3.cardd == 'T') return true;
	return false;
}
bool isFirstNinePoints(int n) {
	if (players.at(n).card1.cardd == '9') return true;
	return false;
}
bool isSecondNinePoints(int n) {
	if (players.at(n).card2.cardd == '9') return true;
	return false;
}
bool isThirdNinePoints(int n) {
	if (players.at(n).card3.cardd == '9') return true;
	return false;
}
bool isFirstEightPoints(int n) {
	if (players.at(n).card1.cardd == '8') return true;
	return false;
}
bool isSecondEightPoints(int n) {
	if (players.at(n).card2.cardd == '8') return true;
	return false;
}
bool isThirdEightPoints(int n) {
	if (players.at(n).card3.cardd == '8') return true;
	return false;
}
bool isFirstSevenPoints(int n) {
	if (players.at(n).card1.cardd == '7') return true;
	return false;
}
bool isSecondSevenPoints(int n) {
	if (players.at(n).card2.cardd == '7') return true;
	return false;
}
bool isThirdSevenPoints(int n) {
	if (players.at(n).card3.cardd == '7') return true;
	return false;
}

int firstCard(int n) {
	int point = 0;
	if (isFirstElevenPoints(n)) {
		point = 11;
	}
	else if (isFirstTenPoints(n)) {
		point = 10;
	}
	else if (isFirstNinePoints(n)) {
		point = 9;
	}
	else if (isFirstEightPoints(n)) {
		point = 8;
	}
	else if (isFirstSevenPoints(n)) {
		point = 7;
	}

	return point;
}
int secondCard(int n) {
	int point = 0;
	if (isSecondElevenPoints(n)) {
		point = 11;
	}
	else if (isSecondTenPoints(n)) {
		point = 10;
	}
	else if (isSecondNinePoints(n)) {
		point = 9;
	}
	else if (isSecondEightPoints(n)) {
		point = 8;
	}
	else if (isSecondSevenPoints(n)) {
		point = 7;
	}

	return point;
}
int thirdCard(int n) {
	int point = 0;
	if (isThirdElevenPoints(n)) {
		point = 11;
	}
	else if (isThirdTenPoints(n)) {
		point = 10;
	}
	else if (isThirdNinePoints(n)) {
		point = 9;
	}
	else if (isThirdEightPoints(n)) {
		point = 8;
	}
	else if (isThirdSevenPoints(n)) {
		point = 7;
	}

	return point;
}


int rate(int n) {
	points = 0;

	int curr = 0;

	if (sameValues(n)) {
		curr = 0;
		curr = firstCard(n) * 3;
		if (isFirstSevenPoints(n)) {
			curr = 34;
		}
		if (curr > points) points = curr;
	}
	if (sameColor(n)) {
		curr = 0;
		curr = firstCard(n) + secondCard(n) + thirdCard(n);
		if (curr > points) points = curr;
	}
	if (twoOfSameColor(n)) {
		curr = 0;
		if (players.at(n).card1.color == players.at(n).card2.color) {
			curr = firstCard(n) + secondCard(n);
			if (curr > points) points = curr;
		} 
		else if (players.at(n).card2.color == players.at(n).card3.color) {
			curr = secondCard(n) + thirdCard(n);
			if (curr > points) points = curr;
		}
		else {
			curr = firstCard(n) + thirdCard(n);
			if (curr > points) points = curr;
		}
			
	}
	if (doubleA(n)) {
		curr = 0;
		curr = 22; //real value 
		if (curr > points) points = curr;
	}
	if (doubleSeven(n)) {
		curr = 0;

		curr = 23; //real value
		if (curr > points) points = curr;
	}
	if (pairAndSevenClubs(n)) {
		curr = 0;
		if (isFirstSevenPoints(n)) {
			curr = secondCard(n) * 2 + 11;
			if (curr > points) points = curr;
		}
		else if (isSecondSevenPoints(n)) {
			curr = firstCard(n) * 2 + 11;
			if (curr > points) points = curr;
		}
		else {
			curr = firstCard(n) * 2 + 11;
			if (curr > points) points = curr;
		}
	}
	if (sameColorAndSevenClubs(n)) {
		curr = 0;
		if (isFirstSevenPoints(n)) {
			curr = secondCard(n) + thirdCard(n) + 11;
			if (curr > points) points = curr;
		}
		else if (isSecondSevenPoints(n)) {
			curr = firstCard(n) + thirdCard(n) + 11;
			if (curr > points) points = curr;
		}
		else {
			curr = firstCard(n) + secondCard(n) + 11;
			if (curr > points) points = curr;
		}
	}
	if (onlySevenClubs(n)) {
		curr = 0;
		if (isFirstSevenPoints(n)) {
			if (secondCard(n) > thirdCard(n)) {
				curr = secondCard(n) + 11;
				if (curr > points) points = curr;
			}
			else {
				curr = thirdCard(n) + 11;
				if (curr > points) points = curr;
			}
		}
		else if (isSecondSevenPoints(n)) {
			if (firstCard(n) > thirdCard(n)) {
				curr = firstCard(n) + 11;
			}
			else {
				curr = thirdCard(n) + 11;
			}
		}
		else {
			if (firstCard(n) > secondCard(n)) {
				curr = firstCard(n) + 11;
			}
			else {
				curr = secondCard(n) + 11;
			}
		}
		if (curr > points) points = curr;
	}
	{
		curr = 0;
		curr = maxCard(n);
		if (curr > points) points = curr;
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
bool pairAndSevenClubs(int n) {
	if (players.at(n).card1.cardd == '7' && players.at(n).card1.color == 'C' &&
		players.at(n).card2.cardd == players.at(n).card3.cardd ||
		players.at(n).card2.cardd == '7' && players.at(n).card2.color == 'C' &&
		players.at(n).card1.cardd == players.at(n).card3.cardd ||
		players.at(n).card3.cardd == '7' && players.at(n).card3.color == 'C' &&
		players.at(n).card1.cardd == players.at(n).card2.cardd
		) {
		return true;
	}
	return false;
}
bool sameColorAndSevenClubs(int n) {
	if (players.at(n).card1.cardd == '7' && players.at(n).card1.color == 'C' &&
		players.at(n).card2.color == players.at(n).card3.color ||
		players.at(n).card2.cardd == '7' && players.at(n).card2.color == 'C' &&
		players.at(n).card1.color == players.at(n).card3.color ||
		players.at(n).card3.cardd == '7' && players.at(n).card3.color == 'C' &&
		players.at(n).card1.color == players.at(n).card2.color
		) {
		return true;
	}
	return false;
}

bool onlySevenClubs(int n) {
	if (players.at(n).card1.cardd == '7' && players.at(n).card1.color == 'C' &&
		!sameColorAndSevenClubs(n) && !pairAndSevenClubs(n) ||
		players.at(n).card2.cardd == '7' && players.at(n).card2.color == 'C' &&
		!sameColorAndSevenClubs(n) && !pairAndSevenClubs(n) ||
		players.at(n).card3.cardd == '7' && players.at(n).card3.color == 'C' &&
		!sameColorAndSevenClubs(n) && !pairAndSevenClubs(n)
		) {
		return true;
	}
	return false;
}

int maxCard(int n) {
	int* arr = new int[3];
	arr[0] = firstCard(n);
	arr[1] = secondCard(n);
	arr[2] = thirdCard(n);
	
	int max = 0;

	for (int i = 0; i < 3; i++) {
		if (arr[i] > max) max = arr[i];
	}
	delete[] arr;
	
	return max;
}

bool twoOfSameColor(int n) {
	if (players.at(n).card1.color == players.at(n).card2.color ||
		players.at(n).card2.color == players.at(n).card3.color ||
		players.at(n).card1.color == players.at(n).card3.color
		) {
		return true;
	}
	return false;
}