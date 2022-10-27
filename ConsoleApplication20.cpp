#include <iostream>
#include <string>
using namespace std;


int main()
{
	const int c1 = 5;
	const int c2 = 3;
	string info[c1][c2];
	string header[c2] = { "Name", "Age", "Gender" };
	int o = 0;
	int ind;
	do {
		cout << "1 = Add/Edit" << endl;
		cout << "2 = Delete" << endl;
		cout << "3 = View All" << endl;
		cout << "4 = Exit" << endl;
		cout << "Enter Option: ";
		cin >> o;
		switch (o) {
		case 1:
			cout << "Enter slot to add/edit (0-4): ";
			cin >> ind;
			for (int j = 0; j < c2; j++) {
				cout << "Enter " << header[j] << ": ";
				cin >> info[ind][j];
			}
			break;
		case 2:
			cout << "Enter slot to delete (0-4): ";
			cin >> ind;
			for (int j = 0; j < c2; j++) {
				info[ind][j] = "";
			}
			break;
		case 3:
			for (string in[c2] : info) {
				for (string details : in) {
					cout << details;
					cout << " | ";
				}
				cout << endl;
			}
			break;
		case 4:
			cout << "Thnak you, come again.";
			break;
		default:
			cout << "Invalid input." << endl;
			break;
		}
	} while (o != 4);
}