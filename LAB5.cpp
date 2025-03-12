#include <iostream>
using namespace std;
enum Action { ROCK, PAPER, SCISSORS, DONE };
int main() {
	char p1Action, p2Action;
	int p1Score = 0, p2Score = 0, ties = 0;
	Action p1, p2;
	cout << endl;
	cout << "RULES: Enter 'r' for rock, 'p' for paper, or 's' for scissors (enter 'x' to end game)." << endl;
	while (p1 != DONE && p2 != DONE) {
		cout << "Player 1's Choice: ";
		cin >> p1Action;
		while (p1Action != 'r' || p1Action != 'R' || p1Action != 'p' || p1Action != 'P' || p1Action != 's' || p1Action != 'S' || p1Action != 'x' || p1Action != 'X') {
			cout << "Invalid input. Please enter 'r'/'R', 'p'/'P', 's'/'S', or 'x'/'X'." << endl;
			cout << "Player 1's Choice: ";
			cin >> p1Action;
		}
		switch (p1Action) {
			case 'r':
				p1 = ROCK;
				break;
			case 'R':
				p1 = ROCK;
				break;
			case 'p':
				p1 = PAPER;
				break;
			case 'P':
				p1 = PAPER;
				break;
			case 's':
				p1 = SCISSORS;
				break;
			case 'S':
				p1 = SCISSORS;
				break;
			case 'x':
				p1 = DONE;
				continue;
				break;
			case 'X':
				p1 = DONE;
				continue;
				break;
		}
		cout << "Player 2's Choice: ";
		cin >> p2Action;
		while (p2Action != 'r' || p2Action != 'R' || p2Action != 'p' || p2Action != 'P' || p2Action != 's' || p2Action != 'S' || p2Action != 'x' || p2Action != 'X') {
			cout << "Invalid input. Please enter 'r'/'R', 'p'/'P', 's'/'S', or 'x'/'X'." << endl;
			cout << "Player 2's Choice: ";
			cin >> p2Action;
		}
		switch (p2Action) {
		case 'r':
			p2 = ROCK;
			break;
		case 'R':
			p2 = ROCK;
			break;
		case 'p':
			p2 = PAPER;
			break;
		case 'P':
			p2 = PAPER;
			break;
		case 's':
			p2 = SCISSORS;
			break;
		case 'S':
			p2 = SCISSORS;
			break;
		case 'x':
			p2 = DONE;
			continue;
			break;
		case 'X':
			p2 = DONE;
			continue;
			break;
		}
	}
}
	


	return 0;
}