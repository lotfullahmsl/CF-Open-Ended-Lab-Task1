#include <iostream>
using namespace std;
int main()
{
	string NameOfBook, borrow;
	int BorrowDate, ReturnDate, TotalDays, Limit;
	Limit=5;
	TotalDays= BorrowDate-ReturnDate;
 
	cout << "Enter the name of the book: ";
	getline(cin, NameOfBook);
	if (NameOfBook.empty()) {
		cout << "You Did'nt Wrote Anything" << endl;
		return 0;
	}
	cout << NameOfBook << " is available!" << endl;
	
	cout << "Do you want to borrow it? (Y/N): ";
	cin >> borrow;
	if (borrow == "Y"|| borrow=="y"){
		cout << "You should return the book within 5 days. Otherwise there will be a fine." << endl;
		cout << "Enter your borrow date (YYYYMMDD): ";
		cin >> BorrowDate;
		cout << "Enter your return date (YYYYMMDD): ";
		cin >> ReturnDate;
	}
		else if (borrow == "N"||borrow =="n"){
		cout <<"So why are you searching!";
	}
		if (ReturnDate > BorrowDate) {
			TotalDays = ReturnDate - BorrowDate;
			if (TotalDays > Limit) {
				cout << "You should pay a fine of $" << TotalDays - Limit << "." << endl;
			} else {
				cout << "No fine." << endl;
			}
		}
		return 0;
}
