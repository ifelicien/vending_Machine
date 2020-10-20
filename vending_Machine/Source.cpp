#include <iostream>
#include <string>
using namespace std;

string myMenu(void);
bool powerSwitch();
int myMoney();

bool power = false;

class Snack {
	public:	
		int inventory = 30;
		string name;
		double price;

	Snack(string n, double p) {
		name = p;
		price = p;
	}
		
	string  printself() {
		cout << inventory << ":" << name << " " << price << endl;
	}

};

int main() {
	Snack Coke("Coke", 0.95);
	Snack Doritos("Doritos", 0.75);
	Snack Snickers("Snickers", 0.55);
	Snack ChexMix("Chex Mix", 0.60);
	Snack Pepsi("Pepsi", 0.90);

}

int turnPowerOn() {

	!power ? powerSwitch() : power;  // if no power use powerSwitch function to turn power on
}

bool powerSwitch(void) {

	cout << "flipping the power switch. ";

	power = !power;

}

string myMenu(void) {
	int myInput;
	double price;
	string mySnack;

	start:

	cout << "Select item: " << endl;
	cout << "1. Coke \t $0.95\n2. Doritos \t 0.75\n3. Snickers \t $0.55\n4. Chex Mix \t $0.60\n5. Pepsi \t $0.90" << endl;
	cin >> myInput;

	switch (myInput) {

		case 1: mySnack = "Coke";
			price = 0.95;
			return mySnack;
			break;
		case 2: mySnack = "Doritos";
			return mySnack;
			break;
		case 3: mySnack = "Snickers";
			return mySnack;
			break;
		case 4: mySnack = "Chex Mix";
			return mySnack;
			break;
		case 5: mySnack = "Pepsi";
			return mySnack;
			break;
		default: 
			cout << "Please make a valid selection ";
			goto start;	
	}
}