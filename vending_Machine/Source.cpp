#include <iostream>
using namespace std;

string myMenu(void);
bool onNOff();
int myMoney();

int coke[];
int doritos[];
int snickers[];
int chexMix[];
int pepsi[];

int main() {
	bool vendingMachine = onNOff();
	

	cout << vendingMachine << endl;
}

bool onNOff(void) {
	bool systemON;
	int power;

	start2:

	cout << "do you want to turn the system on? " << endl;
	cout << "Press 1 for ON and 2 for Off: ";
	cin >> power;

	if (power == 1) {
		cout << "powering sytem on: ";
		return true;
	}
	else if (power == 2){
		cout << "System is not powered on: ";
		return false;
	}
	else {
		goto start2;
	}

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