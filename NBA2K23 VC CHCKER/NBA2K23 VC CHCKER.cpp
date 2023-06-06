// NBA2K23 VC CHCKER.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;
int currentVC{};
int currentSal{};
int neededVC{};
int remainingVC = neededVC - currentVC;
const int remainingGames{};


int main()
{
	cout << "How much VC you have as of now?" << endl <<
			"Answer: ";
	cin >> currentVC;
	cout << "How much is your NBA Current Salary per game? (Basic Pay w/o incentives)" << endl <<
			"Answer: ";
	cin >> currentSal;
	cout << "How much is your VC goal? " << endl <<
			"Answer: ";
	cin >> neededVC;
	//next line
	cout << "You still need " << neededVC - currentVC << "VC more to complete your " << neededVC << "VC goal." << endl <<
			"That is approximately " << (neededVC - currentVC) / currentSal << " games left" << endl;
			
		/*if (cin.get() == (VK_CONTROL)) {
			cout << "Key Pressed";
			//cout << "You still need " << neededVC - currentVC;
		}*/
			cout << "VC Need: " << neededVC - currentVC << endl <<
			"Games: " << (neededVC - currentVC) / currentSal << endl <<
			"Press enter if you already got your next salary to update.";
			do {
				
			} while (cin.get() == '\n');


		return 0;
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
