#include <iostream>
using namespace std;

#include <string>
using std::string;

#include <cstdlib>

struct Restaurant {
	string name;
	string address; 
	string type;
	int rating;
	int phoneNum;
};

Restaurant tempRest();
void coutRest(Restaurant r);

int main(){
	Restaurant r1 = tempRest();
	Restaurant r2 = tempRest();
	Restaurant r3 = tempRest();
	Restaurant r4 = tempRest();
	
	coutRest(r1);
	coutRest(r2);
	coutRest(r3);
	coutRest(r4);

}

Restaurant tempRest() {
	Restaurant temp;
	string buf;

	cout << "Enter restaurant name: ";
	getline(cin, temp.name);

	cout << "Enter restaurant address: ";
	getline(cin, temp.address);

	cout << "Enter type of food: ";
	getline(cin, temp.type);

	cout << "Enter rating (1-5): ";
	cin >> buf; temp.rating = atoi(buf.c_str());
	cin.ignore(1000, 10);

	cout << "Enter phone number: ";
	cin >> buf; temp.phoneNum = atoi(buf.c_str());
	cin.ignore(1000, 10);

	cout << endl;
	
	return temp;
}

void coutRest(Restaurant r) {
	cout << "-----------------------------" << endl;
	cout << "Restaurant Name : " << r.name << endl;
	cout << "Address         : " << r.address << endl;
	cout << "Type of Food    : " << r.type << endl;
	cout << "Rating          : " << r.rating << endl;
	cout << "Phone Number    : " << r.phoneNum << endl;
	cout << endl;
}