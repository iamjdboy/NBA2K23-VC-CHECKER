// NBA2K23 VC CHCKER.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <conio.h>


using namespace std;
int i{};
int n{};
int	currentVC{};
int salary{};
int currentSal{};
int neededVC{ 175000 };
int remainingVC = neededVC - currentVC;
//int games = (neededVC - currentVC) / currentSal;

int main()
{
	system("cls");
	cout << "YOUR GOAL IS " << neededVC << "VC" << endl << endl;
	cout << "How much VC you have as of now?" << endl <<
			"Answer: ";
	cin >> currentVC;
	//cout << "How much is your NBA Current Salary per game? (Basic Pay w/o incentives)" << endl <<
	//		"Answer: ";
	//cin >> currentSal;
	cout << "How many games you want to play? " << endl <<
			"Answer: ";
	cin >> n;
	system("cls");
	for (i = 0; i < n; i++)
	{
		cout << "You're currently in " << i << "/" << n << " games." << endl;
		cout << "Enter your salary after the game for the next " << n << " games." << endl;
		cin >> salary;
		currentVC = currentVC + salary;
		cout << "Your Current VC: " << currentVC << endl;
		cout << "VC Needed: " << neededVC - currentVC << endl <<
				"Games remaning: " << (neededVC - currentVC) / salary << endl;
	}
	if (i >= n) {
			system("cls");
			cout << "Your Current VC: " << currentVC << endl;
			cout << "VC Needed: " << neededVC - currentVC << endl <<
					"Games remaning: " << (neededVC - currentVC) / salary << endl;
			cout << "You have finished " << n << " games you entered. Do you want to continue? " << endl <<
					"1 for yes 2 for N: ";
					int proceed;
					cin >> proceed;
					if (proceed == 1) {
						return main();
					}
					else if (proceed = 2) {
						return 0;
					}
					else {
						cout << "You have entered invalid keyword! Application will close!";
						return 0;
					}
	}
	/*
	cin.get();
	do {
		system("cls");
		cout << "VC Needed: " << neededVC - currentVC << endl <<
				"Games remaning: " << (neededVC - currentVC) / currentSal << endl;
	} while (cin.get() == '\n');*/
	//next line
	//cout << "You still need " << neededVC - currentVC << "VC more to complete your " << neededVC << "VC goal." << endl <<
	//		"That is approximately " << (neededVC - currentVC) / currentSal << " games left" << endl;
			
		/*if (cin.get() == (VK_CONTROL)) {
			cout << "Key Pressed";
			//cout << "You still need " << neededVC - currentVC;
		}*/
		/*
		 currentVC + currentSal;
		(neededVC - currentVC) / currentSal;
		cout << "VC Need: " << neededVC - currentVC << endl <<
		"Games: " << (neededVC - currentVC) / currentSal << endl <<
		"Press enter if you already got your next salary to update.";
		cin.get();
		*/

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
