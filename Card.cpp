#ifndef CARD_CPP
#define CARD_CPP
#include <string>

using namespace std;


class Card{
	private:
	
		string suite;
		char value;
		int weight;
		bool is_used;
	
	public:
		
		// Setters
		void set_suite(string s) { suite = s;}
		void set_value(char v) { value = v;}
		void set_used(bool u) { is_used = u;}
		void set_weight(int w) { weight = w;}
		
		// Getters
		string get_suite() { return suite;}
		char get_value() { return value;}
		bool get_used() { return is_used;}
		int get_weight() { return weight;}
		
};
#endif