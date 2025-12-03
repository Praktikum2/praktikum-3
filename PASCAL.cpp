#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Masukkan Jumlah Baris Segitiga Pascal: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int s = 0; s < n - i; s++) {
			cout << " ";
		}

		int val = 1;
		for (int j = 0; j <= i; j++) {
			cout << val << " ";
			val = val * (i - j) / (j + 1);
		}
		cout << endl;
	}
	cout << "\n==============================================\n";
	cout << "\nNama  : Dhia Al Fitria";
	cout << "\nNIM   : 25104410082";
	cout << "\nProdi : Teknik Informatika - 1B\n";
	cout << "\n================================================";
	return 0;
}