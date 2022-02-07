//Matt Clark
//CompSci 201R - 0002
//Created 02/03 - Due 02/06

#include<iostream>;
using namespace std;


int main() {
	char choice;
	int boxQuantity;
	double totalPrice = 0;
	double cart = 0;


	//initial menu:
	cout << "Welcome to KC Cookies" << endl;
	cout << "Select 1 for a four pack ($13.20), 2 for a 6 pack ($19.49), or 3 for party pack of 12 cookies($34.06): " << endl;
	cin >> choice;

	//quantity of items:
	cout << "How many packs would you like to add?" << endl;
	cin >> boxQuantity;


	while (true) {
		switch (choice) {
		case 1:
			cout << "You ordered: " << boxQuantity << "4-packs." << endl;
			cart += boxQuantity * 13.20;
			return cart;
			break;
		case 2:
			cout << "You ordered: " << boxQuantity << "6-packs." << endl;
			cart += boxQuantity * 19.49;
			return cart;
			break;
		case 3:
			cout << "You ordered: " << boxQuantity << "Party Packs." << endl;
			cart += boxQuantity * 34.06;
			return cart;
			break;

		}
		char stay;
		cout << "Would you like to continue adding to your cart?" << endl;
		cin >> stay;

		if (stay == 'N' || stay == 'n') {
			totalPrice += cart;
			cout << "Your total price is: $" << totalPrice;
			break;
		}
	}
	return 0;
}
