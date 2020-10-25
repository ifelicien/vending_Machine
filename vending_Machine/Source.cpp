#include <iostream>
#include <string>
using namespace std;

string myMenu(void);
bool powerSwitch();
int myMoney();
int payment(int);
int item_Refill();
int coins_container();
int item_Container();
int coin_Return();
double laborCost(int);
double overhead(int);
double profit_(int price);
double coin_Refill();

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


int payment(int price) {
	int pay;

	string dispense = (pay >= price) ? "dispensing item " : "Insert correct amount";
	return 0;
}

double laborCost(int price) {
	int labor = price * 0.25;
	return labor;
}

double overhead(int price) {
	double overH = price * 0.05;
	return overH;
}

double profit_(int price) {
	int profit = price * (.35 + .05);
	return profit;
}

double coinRefill() {

}

int itemRefill() {

}

int coin_Return() {

}