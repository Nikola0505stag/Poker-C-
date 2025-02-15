#include "welcome.h"
#include<iostream>

using namespace std;

void newline() {
	cout << endl << endl;
}

void welcome() {
	cout << "\t\t" << "Hello, welcome to the \"Alternative Poker\" game."; newline();
	cout << endl;
	cout << "\tThe game is played with two to nine people. The game uses only the cards from the seven to the ace.\n"
		"At the beginning of each game, three cards are dealt to each player. The goal is to determine the winner,\n"
		"based on the sum of their points.";
	cout << endl;
	cout << "\tThe game takes place in rounds. In each round, players look at their cards and make a bet.\n"
		"After all bets have been placed, the players' cards are revealed. The player with the highest total wins the round.\n"
		"If there are several with the same score, the game goes into \"tie\" mode.";

	newline();
}