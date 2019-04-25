
#include <iostream>
#include <string>
#include "Person.cpp"
#include "Card.cpp"

using namespace std;

int main(){
	
	string player1;
	char hors = 'h';
	string suites[] = { "Diamonds", "Clubs", "Spades", "Hearts" };
	char vals[] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
	Card deck[52];
	Person dealer;
	Person player;
	
	//Create users
	dealer.set_name("Dealer");
	cout << "Enter the name of your player: ";
	cin >> player1;
	player.set_name(player1);
	
	//Populate deck of cards
	int cnt = 0;
	for(int i=0;i<4;i++){
		string s = suites[i];
		for(int j=0;j<=13;j++){
			char v = vals[j];
			deck[cnt].set_weight(j);
			deck[cnt].set_suite(s);
			cnt++;
		}
	}
	
	cout << "Dealer has a A of Diamonds, and a 5 of Clubs" << endl;
	cout << player.get_name() << " has a 8 of Spades, and a K of Hearts" << endl;
	cout << "(h)it or (s)tay: ";
	cin >> (hors);
	player.set_hitting(hors);
	
	cout << "Printing out deck of cards: " << endl;
	for(int i=0;i<52;i++){
		cout << "Card number" << i << " is a" <<deck[i].get_value() << " of " << deck[i].get_suite() << endl;
	}
	
	
	return 0;
}