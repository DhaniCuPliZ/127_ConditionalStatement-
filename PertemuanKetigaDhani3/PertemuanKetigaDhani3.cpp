#include <iostream>
using namespace std;

int main()
{

	float nMat, nfisika, nrerata;
	string status;

	cout << "masukkan nilai matematika";
	cin >> nMat;
	cout << "masukkan nilai fisika";
	cin >> nfisika;
	
	nrerata = (nMat + nfisika) / 2;
	
	if (nrerata >= 60) {
		status = "Lulus jalur rerata";
	}
	else if (nMat >= 70) {
		status = "lulus jalur matematika";
	}
	else
	{
		status = "tidak lulus";

	}

	cout << "statusnya adalah " << status << endl;

	system("pause");
}