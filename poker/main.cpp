#include<iostream>
#include<vector>
#include"card.h"
#include"welcome.h"
#include "start.h"
#include <cstdlib>
#include <ctime>
#include<windows.h>


using namespace std;


int main() {
	
	srand(time(0));

	welcome();

	system("pause");

	newline();

	start();

	

	return 0;
}