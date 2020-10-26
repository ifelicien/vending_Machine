#include <iostream>
#include <string>
using namespace std;

string myMenu(void);
bool powerSwitch();
int turnPowerOn();
//int item_Refill(void); 
int coins_container(void); //
//int item_Container(void); 
double coin_Return(double, double); 
double payment(double);
double laborCost(double);
double overhead(int);
double profit_(int price);
double coin_Refill(void); //

bool power = false;

const double labor_Percentage = 0.25;
const double percent_Overhead = 0.05;
const double item_Cost = 0.35;

class Snack {
	public:	
		int inventory = 30;
		string name;
		double price;
	Snack(string n, double p) {
		name = n;
		price = p;
	}
	string  printself() {
		cout << inventory << ":" << name << " " << price << endl;
		inventory--;
		return "";
	}
	void refil(){
		inventory = 30;
	}
};

int main() {
	Snack Coke("Coke", 0.95);
	Snack Doritos("Doritos", 0.75);
	Snack Snickers("Snickers", 0.55);
	Snack ChexMix("Chex Mix", 0.60);
	Snack Pepsi("Pepsi", 0.90);
	
	
	powerSwitch(); myMenu(); payment();
}

string myMenu(void) {
	int myInput;
	double price;
	string mySnack;
	Snack Coke("Coke", 0.95);
	Snack Doritos("Doritos", 0.75);
	Snack Snickers("Snickers", 0.55);
	Snack ChexMix("Chex Mix", 0.60);
	Snack Pepsi("Pepsi", 0.90);

start:
	cout << "Select item: " << endl;
	cout << "1. Coke \t $0.95\n2. Doritos \t 0.75\n3. Snickers \t $0.55\n4. Chex Mix \t $0.60\n5. Pepsi \t $0.90" << endl;
	cin >> myInput;
	// TODO: payment from user 

	switch (myInput) {

	case 1: 
		mySnack = "Coke";
		cout << Coke.printself();
		goto start;
	case 2: 
		mySnack = "Doritos";
		cout << Doritos.printself();
		break;
	case 3: 
		mySnack = "Snickers";
		cout << Snickers.printself();
		break;
	case 4: 
		mySnack = "Chex Mix";
		cout << ChexMix.printself();
		break;
	case 5: 
		mySnack = "Pepsi";
		cout << Pepsi.printself();
		break;
	default:
		cout << "Please make a valid selection ";
		goto start;
	}

	return "";
}

int turnPowerOn() {
	!power ? powerSwitch() : power;  // if no power use powerSwitch function to turn power on
	return 0;
}

bool powerSwitch(void) {
	cout << "flipping the power switch. \n\n";
	power = !power;
	return 0;
}

double payment(double price) {
	double paid = 0.0;
	int pennies, nickles, dimes, quarters, one_Dollar, five_Dollar;

	cout << "Please enter payment " << endl;

	cout << "Pennies: ";
	cin >> pennies;
	paid += pennies * 0.01;

	cout << "Nickles:";
	cin >> nickles;
	paid += nickles * 0.05;

	cout << "Dimes:";
	cin >> dimes;
	paid += dimes * 0.10;

	cout << "Quarters:";
	cin >> quarters;
	paid += quarters * 0.25;

	cout << "One Dollar:";
	cin >> one_Dollar;
	paid += one_Dollar * 1.00;

	cout << "Five Dollar:";
	cin >> five_Dollar;
	paid += five_Dollar * 5.00;

	string dispense = (paid >= price) ? "dispensing item " : "Insert correct amount";
	return paid;
}

double laborCost(double price) {
	int labor = price * labor_Percentage;
	return labor;
}

double overhead(int price) {
	double overH = price * percent_Overhead;
	return overH;
}

double profit_(int price) {
	int profit = price - (item_Cost + percent_Overhead + labor_Percentage);
	return profit;
}

double coinRefill(void) {

	return 0;
}

double coin_Return(double itemPrice, double amountPaid) {
	double refund = itemPrice - amountPaid;

	return refund;
}
