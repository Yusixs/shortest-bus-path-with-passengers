#include <iostream>
#include <fstream>

using namespace std;

// Group Members
// Sarim Aeyzaz i21-0328
// Ehtsham Walidad i21-0260

int main() {

	// Initialization of variables
	ifstream file("layout.txt");
	int x = 0, y = 0, size = 0, roads = 0, limit = 0;
	file >> size;

	// Creating 2D matrix and initialize every value as 0
	int** matrix = new int* [size];
	for (int i = 0; i < size; i++) {
		matrix[i] = new int[size];
		for (int j = 0; j < size; j++)
			matrix[i][j] = 0; 
	}

	// Input data from file and implement it to the adjecency matrix
	file >> roads;
	while (file >> x) {
		file >> y >> limit;
		matrix[x-1][y-1] = limit;
		matrix[y-1][x-1] = limit;
	}

	// Displaying Adjecency Matrix
	cout << "Displaying Adjecency Matrix: " << endl << endl << "City";
	for (int i = 0; i < size; i++)
		cout << '\t' << i + 1;
	cout << endl << endl;
	for (int i = 0; i < size; i++) {
		cout << i + 1 << " ";
		for (int j = 0; j < size; j++)
			cout << "\t" << matrix[i][j];
		cout << endl;
	}

	return 0;
}