#include <iostream>
using namespace std;

struct Restaurant {
	string name;
	string address; 
	string type;
	int rating;
	int phoneNum;
};

Restaurant tempRest();
void coutRest(Restaurant r);

int main{


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

	cout << "Enter phnoe number: ";
	cin >> buf; temp.phoneNum = atoi(buf.c_str());
	cin.ignore(1000, 10);

	cout << endl;

	return temp;
}