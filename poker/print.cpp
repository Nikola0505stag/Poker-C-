#include<iostream>
#include"card.h"
#include "start.h"
#include <windows.h>



void printPlayersCards() {
	for (int i = 0; i < players.size(); i++) {
		cout << players.at(i).card1.cardd << players.at(i).card1.color << " " <<
			players.at(i).card2.cardd << players.at(i).card2.color << " " <<
			players.at(i).card3.cardd << players.at(i).card3.color << endl;
	}
}

void printDeck() {
	for (int i = 0; i < deck.size(); i++) {
		std::cout << deck.at(i).cardd << deck.at(i).color << " ";
	}
}

void printPlayerCards(int n) {
	system("cls");
	
	cout << players.at(n).card1.cardd << players.at(n).card1.color << " " <<
		players.at(n).card2.cardd << players.at(n).card2.color << " " <<
		players.at(n).card3.cardd << players.at(n).card3.color << endl;
	system("pause");
	
}