# Mixed-Partner-Functions
---------------------------------------------------------------------------------------------------------------------------------------------
//Space Station Docking Countdown: 
//Write a functiondocking_countdown()that counts down from 20 in increments
//of 3 (20, 17, 14, etc.) and then prints "Docking complete!" 
//This function takes no parameters and doesn’t return anything.

#include<iostream>
using namespace std;

void docking_countdown();

int main() {
	docking_countdown();
}

void docking_countdown() {
	int num = 20;
	while (num >= 0) {
		cout << num << " ";
		num -= 3;
	}
	if (num = 0);
		cout << "Docking complete!" << endl;
}
---------------------------------------------------------------------------------------------------------------------------------------------
//Truck Weight Check: Write a function truck_weight_check(int load_weight) 
//that takes a parameter integer load_weight (in kilograms) and prints "Overweight!" if it’s over 1200 kg,
//otherwise print "Within limit." This function doesn't return anything.

#include<iostream>
using namespace std;

void truck_weight_check(int load_weight);
int main() {
	truck_weight_check(1100);

}
void truck_weight_check(int load_weight) {
	if (load_weight > 1200) {
		cout << "Overweight!" << endl;
	}
	else {
		cout << "within limit" << endl;
	}

}
---------------------------------------------------------------------------------------------------------------------------------------------
//School Zone Signal: Write a function school_zone_signal(string signal_color) that takes a parameter 
//string signal_color (either "Red", "Yellow", or "Green") and advises "Stop", "Be Ready", or "Proceed" accordingly. 
//This function doesn't return anything

#include<iostream> 
using namespace std;
void school_zone_signal(string signal_color);
int main() {
	school_zone_signal("Green");


}
void school_zone_signal(string signal_color) {
	if (signal_color == "Red") {
		cout << "STOP!" << endl;
	}
	else if (signal_color == "Yellow") {
		cout << "Be Ready" << endl;
	}
	else if (signal_color == "Green") {
		cout << "Proceed" << endl;
	}


}
---------------------------------------------------------------------------------------------------------------------------------------------
//Museum Ticket Pricing: Write a function get_ticket_price(int visitor_age) that calculates the admission price for a museum
//: $8 for children under 10, $18 for teens and adults under 60, and $12 for seniors 60 and older. 
//The price should be returned as an integer and called in a cout statement.

#include<iostream>
using namespace std;
void get_ticket_price(int visitor_age);
int main() {
	
	get_ticket_price(60);

}
void get_ticket_price(int visitor_age) {
	if (visitor_age < 10) {
		cout << "your admission price is $8" << endl;
	}
	else if (visitor_age < 60) {
		cout << "your admission price is $18" << endl;
	}
	else if (visitor_age >= 60) {
		cout << "your admission price is $12" << endl;
	}

}
---------------------------------------------------------------------------------------------------------------------------------------------
//Username Verification: Write a function verify_username() that continually asks the user for a username until they enter "CodeMaster123",
//at which point the function prints "Access Granted!" This function doesn't take any parameters and doesn't return anything.

#include<iostream>
using namespace std;

void verify_username();
int main() {
	verify_username();

}
void verify_username() {
	string choice= "gio";
	while (choice != "CodeMaster123"){
		cout << "Whats your username?" << endl;
		cin >> choice;
		if(choice != "CodeMaster123")
			cout << "Wrong username!" << endl;
	}	
	
	cout << "Access Granted!" << endl;
	
		
}
