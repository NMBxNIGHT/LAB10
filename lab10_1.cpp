#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	int 	EndOfYear=1;
	double PrevBalance,Interest,Total,NewBalance,rate,PPY; //PPY=pay per year
	cout << "Enter initial loan: ";
	cin >> PrevBalance;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> PPY;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

	NewBalance = PrevBalance;
	while(NewBalance>0){
		cout << fixed << setprecision(2);
		cout << setw(13) << left << EndOfYear;

		cout << setw(13) << left << PrevBalance;

		Interest = PrevBalance*rate/100.0;
	
		cout << setw(13) << left << Interest;
		Total = PrevBalance+Interest;
		cout << setw(13) << left << Total;
		if(Total>PPY){
			cout << setw(13) << left << PPY;
		}else{
			PPY = Total;
			cout << setw(13) << left << PPY; 
		}
		NewBalance = Total - PPY;
		cout << setw(13) << left << NewBalance << endl;

		EndOfYear++;
		PrevBalance= NewBalance;
	}
	
	return 0;
}
