#include <iostream>
using namespace std;
enum action {ROCK, PAPER, SCISSORS};
void displayRules();
action retrievePlay(char);
bool validSelection(char&);
bool validSelectionWelcome(char);
void convertEnum(action);
action winningObject(action, action);

void gameResult(action, action, int&);
void displayResults(int, int, int);

int main() {
	int gameCount = 0, winCount1 = 0, winCount2 = 0, gameWinner;
	char response;
	char selection1, selection2;
	action player1, player2;
	cout << "===========" << endl << "Would you like to play: 'Rock, Paper, Scissors'? (Y/N)" << endl;
	cin >> response;
	if ((response == 'n') || (response == 'N')) {
		cout << "Hope to see you soon!" << endl << "===========";
		return 0;
	}
	displayRules();
	while (response != 'N' && response != 'n') {
		bool yN = validSelectionWelcome(response);
		if (!yN) return 0;
		cout << "Player One, please enter your action: ";
		cin >> selection1;
		cout << endl;
		validSelection(selection1);
		cout << "Great! Now.. player Two, please enter your action: ";
		cin >> selection2;
		cout << endl;
		validSelection(selection2);
		player1 = retrievePlay(selection1);
		player2 = retrievePlay(selection2);
		if (player1 == player2) {
			cout << "It's a tie!!" << endl;
		}
		else {
			(winningObject(player1, player2) == player1) ? gameWinner = 1 : gameWinner = 2;
			gameResult(player1, player2, gameWinner);
			(gameWinner == 1) ? winCount1++ : winCount2++;
		}
		gameCount++;
		cout << "One More Round?" << endl;
		cin >> response;
	}
	displayResults(gameCount, winCount1, winCount2);
	return 0;
}

//show rules
void displayRules() {
	cout << "RULES: Enter 'r' for rock, 'p' for paper, or 's' for scissors." << endl;
}

//takes player input, returns respective value for player enum
action retrievePlay(char input) {
	switch (input){
		case 'r':
			return ROCK;
			break;
		case 'R':
			return ROCK;
			break;
		case 'p':
			return PAPER;
			break;
		case 'P':
			return PAPER;
			break;
		case 's':
			return SCISSORS;
			break;
		case 'S':
			return SCISSORS;
			break;
	}
}

//checks if the player puts in proper input for their turn, LOOPS until proper
bool validSelection(char& input) {
	while ((input != 'r') && (input != 'R') && (input != 'p') && (input != 'P') && (input != 's') && (input != 'S')) {
		cout << "Invalid input. Please enter 'r'/'R', 'p'/'P', 's'/'S'." << endl;
		cin >> input;
	}
	return true;
}

//checks if players are entering proper input for game invitation, LOOPS until proper
bool validSelectionWelcome(char input) {
	while ((input != 'y') && (input != 'Y') && (input != 'n') && (input != 'N')) {
		cout << "Invalid input. Please enter 'y'/'Y' or 'n'/'N'." << endl;
		cin >> input;
	}
	if ((input == 'n') || (input == 'N')) {
		cout << "Aw, hope to see you soon!" << endl;
		return false;
	}
	if ((input == 'y') || (input == 'Y')) {
		cout << "Welome to 'Rock, Paper, Scissors'!" << endl << "===========" << endl;
		return true;
	}
	return true;
}

//prints out enum value
void convertEnum(action input) {
	switch (input) {
		case ROCK:
			cout << "ROCK";
			break;
		case PAPER:
			cout << "PAPER";
			break;
		case SCISSORS:
			cout << "SCISSORS";
			break;
	}
}

//takes both players' inputs and returns winning player of round
action winningObject(action player1, action player2) {
	if (player1 == ROCK && player2 == SCISSORS) {
		return player1;
	}
	else if (player1 == ROCK && player2 == PAPER) {
		return player2;
	}
	else if (player1 == PAPER && player2 == ROCK) {
		return player1;
	}
	else if (player1 == PAPER && player2 == SCISSORS) {
		return player2;
	}
	else if (player1 == SCISSORS && player2 == PAPER) {
		return player1;
	}
	else if (player1 == SCISSORS && player2 == ROCK) {
		return player2;
	}
}

//prints out which player won the round and with what action
void gameResult(action player1, action player2, int& winner) {
	switch (winner) {
		case 1:
			cout << "PLAYER ONE WINS THIS ROUND WITH: ";
			convertEnum(player1);
			cout << endl << endl;
			break;
		case 2:
			cout << "PLAYER TWO WINS THIS ROUND WITH: ";
			convertEnum(player2);
			cout << endl << endl;
			break;
	}
}

//displays results at end of game
void displayResults(int gCount, int wCount1, int wCount2) {
	cout << "AND THE RESULTS ARE IN!" << endl << "===========" << endl;
	if (wCount1 > wCount2) {
		cout << "PLAYER ONE WINS THE GAME!!" << endl;
	}
	else if (wCount1 < wCount2) {
		cout << "PLAYER TWO WINS THE GAME!!" << endl;
	}
	else {
		cout << "IT WAS A TIE!?" << endl;
	}
	cout << "PLAYER ONE VICTORIES: " << wCount1 << endl;
	cout << "PLAYER TWO VICTORIES: " << wCount2 << endl;
	cout << "MATCHES PLAYED: " << gCount << endl << endl;
}
