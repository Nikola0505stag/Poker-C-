#include<iostream>
#include "card.h"
#include "welcome.h"
#include "print.h"

vector <player> players;

void start() {

	system("cls");

	makeDeck();
	
	int number;
	
	again:

	cout << "Insert number of players: "; cin >> number;

	if (number < 2 || number > 9) {
		std::cout << "Wrong number of players! Try again.";
		goto again;
	}

	

	for (int i = 0; i < number; i++) {
		player pl;
		giveCardsToPlayer(pl);

		players.push_back(pl);
	}
	
	for (int i = 0; i < players.size(); i++) {
		printPlayerCards(i);
	}

	printPlayersCards();


	newline();
	printDeck();
}