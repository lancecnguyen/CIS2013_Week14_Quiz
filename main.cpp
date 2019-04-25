
#include <iostream>
#include <string>
#include "Person.cpp"
#include "Card.cpp"

using namespace std;

int main(){
	
	string player1;
	char hors = 'h';
	string suites[] = { "Diamonds", "Clubs", "Spades", "Hearts" };
	Card deck[52];
	Person dealer;
	Person player;
	
	//Create users
	dealer.set_name("Dealer");
	cout << "Enter the name of your player: ";
	cin >> player1;
	player.set_name(player1);
	
	//Populate deck of cards

	
	cout << "Dealer has a A of Diamonds, and a 5 of Clubs" << endl;
	cout << player.get_name() << " has a 8 of Spades, and a K of Hearts" << endl;
	cout << "(h)it or (s)tay: ";
	cin >> (hors);
	player.set_hitting(hors);
	
	
	return 0;
}