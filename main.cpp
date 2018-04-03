/*******************************************************************************
 * AUTHOR		: Sebastian Hooshmand
 * ASSIGN #8	: Loops & Boolean Expressions
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 4/2/18
 ******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*******************************************************************************
 * LOOPS & BOOLEAN EXPRESSIONS
 * -----------------------------------------------------------------------------
 * This program will output the number of candidates accepted and the average
 * candidates accepted.
 * -----------------------------------------------------------------------------
 * INPUT:
 * 		<The input is the candidates gender, height, and weight.>
 *
 * OUTPUT:
 * 	<This program will output the number of candidates accepted and the average
 * 		candidates accepted.>
 ******************************************************************************/

int main() {
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -------------------------------------------------------------------------
	 * PROGRAMMER	: Programmer's Name
	 * CLASS		: Student's Course
	 * SECTION		: Class Days and Times
	 * ASSIGN_NUM	: Lab Number (specific to this Assignment)
	 * ASSIGN_NAME	: Title of the Assignment
	 **************************************************************************/
	// Constant Declarations
	const char PROGRAMMER[] = "Sebastian Hooshmand";
	const char CLASS[] = "CS1A";
	const char SECTION[] = "MW: 8am";
	const int ASSIGN_NUM = 8;
	const char ASSIGN_NAME[] = "Loops & Boolean Expressions";
	const int MALE_TOO_SHORT = 64;
	const int MALE_TOO_TALL = 81;
	const int FEMALE_TOO_SHORT = 61;
	const int FEMALE_TOO_TALL = 76;
	const int MALE_TOO_LOW = 129;
	const int MALE_TOO_HIGH = 251;
	const int FEMALE_TOO_LOW = 109;
	const int FEMALE_TOO_HIGH = 186;

	// Input and Processing variables
	char gender;
	int height = 0;
	int weight = 0;

	// OUTPUT - Class Heading
	cout << left;
	cout << "***************************************************\n";
	cout << "*  PROGRAMMED BY : " << PROGRAMMER << endl;
	cout << "*  " << setw(14) << "CLASS" << ": " << CLASS << endl;
	cout << "*  " << setw(14) << "SECTION" << ": " << SECTION << endl;
	cout << "*  ASSIGN #" << setw(9) << ASSIGN_NUM << ": " << ASSIGN_NAME
			<< endl;
	cout << "***************************************************\n\n";
	cout << right;

	/***************************************************************************
	 * INPUT - Reads in the candidates information
	 **************************************************************************/

	//Variable declarations

	int candidateCount = 0;
	int candidatesAccepted = 0;
	do
	{

		cout << left;
		cout << "Please enter the candidates information (enter 'X' to exit).";
		cout << endl;

		// Input Gender

		cout << "Gender: ";
		cin.get(gender);
		cin.ignore(1000, '\n');


		if (gender == 'm' || gender == 'M' || gender == 'f' || gender == 'F')
		{

			// Boolean Declarations

			bool heightOk;
			bool weightOk;

			if (gender == 'm' || gender == 'M')
			{

			do
			{

			    // Input Height

				cout << "Height; ";
				cin >> height;
				cin.ignore(1000, '\n');
				if(height < 24 || height > 110)
				{
				cout << "***** Invalid height; please enter a height in inches"
						" between 24 and 110. *****" << endl;
				}

			}while(height < 24 || height > 110);

				heightOk = height > MALE_TOO_SHORT && height < MALE_TOO_TALL;

			do
			{

				//Input Weight

				cout << "Weight; ";
				cin >> weight;
				cin.ignore(1000, '\n');
				if(weight < 50 || weight > 1400)
				{
				cout << "***** Invalid weight; please enter a weight in lbs"
				" between 50 and 1400. *****" << endl;
				}
			}while (weight < 50 || weight > 1400);

				weightOk = weight > MALE_TOO_LOW && weight < MALE_TOO_HIGH;

			} else if (gender == 'f' || gender == 'F')
			{

			do
			{

			   // Input Height

			   cout << "Height; ";
		       cin >> height;
			   cin.ignore(1000, '\n');
			   if(height < 24 || height > 110)
			   {
				 cout << "***** Invalid height; please enter a height in inches"
			   						" between 24 and 110. *****" << endl;
			   }

			}while(height < 24 || height > 110);

			   heightOk = height > FEMALE_TOO_SHORT && height < FEMALE_TOO_TALL;

			do
			{
				//Input Weight

				cout << "Weight; ";
				cin >> weight;
				cin.ignore(1000, '\n');
				if(weight < 50 || weight > 1400)
				{
				    cout << "***** Invalid weight; please enter a weight in lbs"
						    " between 50 and 1400. *****" << endl;
				}
			}while (weight < 50 || weight > 1400);

				weightOk = weight > FEMALE_TOO_LOW && weight < FEMALE_TOO_HIGH;

			}
			if (!weightOk && !heightOk)
			{
				cout << endl << "This candidate has been rejected based on the "
						"HEIGHT and WEIGHT requirements." << endl << endl
						<< endl;

			} else if (!heightOk)
			{
				cout << endl << "This candidate has been rejected based on the "
						"HEIGHT requirement." << endl << endl << endl;

			} else if (!weightOk)
			{
				cout << endl << "This candidate has been rejected based on the "
						"WEIGHT requirement." << endl << endl << endl;
			} else
			{
				cout << endl << "This candidate has been ACCEPTED!" << endl
						<< endl << endl;
				candidatesAccepted = candidatesAccepted + 1;
			}
			candidateCount = candidateCount + 1;
		} else if (gender != 'X' && gender != 'x')
		{
			cout << "***** Invalid gender; please enter M or F *****" << endl;
		}

	} while (gender != 'X' && gender != 'x');
	if (candidateCount > 0)
	{


	/**************************************************************************
	* PROCESSING - Calculates the number of candidates and the number of
	* accepted candidates and takes an average.
	**************************************************************************/

		cout << endl << endl << candidatesAccepted << " candidate(s) accepted!"
			 << endl;
		int candidatePercentage = 0;
		if (candidateCount > 0)
		{
			candidatePercentage = (((float) candidatesAccepted / (float)
					candidateCount) * 100.0) + 0.5;
		}

	/**************************************************************************
	* OUTPUT - Outputs the user's Salary information.
	**************************************************************************/

		cout << "That's " << candidatePercentage << "%!";
	}
	return 0;
}






