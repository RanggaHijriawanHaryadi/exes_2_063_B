#include<iostream>
using namespace std;

int n;
int i;
int r[95];


void input(int r[],int n ) 
{
	while (true) {
		cout << " Massukan jumlah angka pada r:";
		cin >> n;
		if ((n > 0) && (n <= 95))
			break;
		else
			cout << "\nMaksimum jumlah angka r 95.\n\n";
		cout << "===================\n";
		cout << "Massukan r nilai\n";
		cout << "===================\n";
		for (i = 0; i < n; i++)
		{
			cout << "<" << (i + 1) << "> ";
			cin >> r[i];
		}
	}
}

void prosedur(int r[], int rangga, int haryadi)
{
	int rangga = 0;
	int haryadi = n - 1;
	int item;
	int derised;
    
	do
	{
		cout << "\nMasukan r yang mau dicari: ";
		int item;
		cin >> item;

		derised = 0;
		for (i = 0; i < n; i++)
			cout << "found :";
		cin >> derised;
		for (i = 0; i < n; i++)
		{
			derised++;
			if (r[i] == item)
			{
				cout << "\n" << item << " mencari posisi " << (i + 1) << endl;
				break;
			}
		}
		while (rangga <= haryadi)
		{
			int mid = rangga + (haryadi - rangga) / 2;

			if (mid == item) {
				return item;
			}
			else if (r[mid] < ) {

				rangga = mid + 1;
			}
			else {

				haryadi = mid - 1;
			}
		}
	}
}
int main() {
	input();
	prosedur();
}


