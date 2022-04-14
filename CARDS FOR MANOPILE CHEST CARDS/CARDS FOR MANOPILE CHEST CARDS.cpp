// This is Wagner's code 

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

// Simulates randomized card draw
// Deletes "Get out of jail" card and reallocates it to a new container
// Can be implemented into final Monopoly game

void deckSim(vector<string>& myDeck, vector<string>& getOut) // Must pass by reference
{
	srand(time(0));

	for (int i = 0; i < 1; ++i)
	{
		int randCard = rand() % myDeck.size();
		cout << myDeck.at(randCard) << endl;


		if (myDeck.at(randCard) == myDeck.at(0))
		{
			cout << "Hold on to this!" << endl;
			getOut.push_back(myDeck.at(0));
			myDeck.erase(myDeck.begin() + 0);
		}
		else
		{
			break;
		}
	}
}
int main()
{

	vector<string> userDeck = 
	{   "Get Out of Jail Free", "Advance to Go (Collect $200)", "Bank error in your favor. Collect $200", "Doctor’s fee. Pay $50",
		"From sale of stock you get $50", "Go to Jail. Go directly to jail, do not pass Go, do not collect $200",
		"Holiday fund matures. Receive $100", "Income tax refund. Collect $20", "It is your birthday. Collect $10 from every player",
		"Life insurance matures. Collect $100", "Pay hospital fees of $100", "Pay school fees of $50", "Receive $25 consultancy fee",
		"You are assessed for street repair. $40 per house. $115 per hotel", "You have won second prize in a beauty contest. Collect $10",
		"You inherit $100"

	};

	vector<string> userGetOut(0);

	deckSim(userDeck, userGetOut);

	for (int i = 0; i < userGetOut.size(); ++i) // Proves proper data allocation
	{
		cout << userGetOut.at(i) << endl;
	}
}
