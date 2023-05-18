#include <iostream>
using namespace std;

void tower(int n, char source, char destination, char interim);

int main () {
	int n_disks; // Number of disks
	cout << "Enter number of disks: ";
	cin >> n_disks;
	// Move all disks from peg A to peg C, using peg B in the interim.
	tower(n_disks, 'A', 'C', 'B');
	return 0;
}

void tower(int n, char source, char destination, char interim) {
	if (n > 1)
		tower(n - 1, source, interim, destination);
	cout << "Move disk " << n <<
		" from " << source << " to " << destination << "." << endl;
	if (n > 1)
		tower(n - 1, interim, destination, source);
}