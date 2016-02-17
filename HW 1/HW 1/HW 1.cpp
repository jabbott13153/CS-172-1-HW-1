#include<iostream>
#include<ctime>
#include<cmath>
#include<cstdlib>
#include<string>
using namespace std;

//void ex02();
//void ex03();
void ex04();

int main()
{
	//ex02();
	//ex03();
	ex04();
	return 0;
}

void ex02()
{
	bool hasPassedTest = true;
	int x, y = 0;

	//setting up the random numbers for x and y
	srand(time(0));
	x = rand() % 1000;
	y = rand() % 1000;

	//comparing x and y
	if (x > y)
	{
		cout << "x, which is: " << x << " is greater than y which is: " << y << endl;
	}
	else
		cout << "y, which is: " << y << " is greater than x which is: " << x << endl;
	//number of shares
	int NumberOfShares = 0;
	//prompt, and then allows the user to input a number
	cout << "Please enter a number: \n";
	cin >> NumberOfShares;
	//checks to see if the number of shares is greater than 100.
	if (NumberOfShares < 100)
		cout << "The number of shares is less than 100. \n";
	else
		cout << "The number of shares is greater than 100. \n";

	//box width and height

	int box_width, book_width;

	cout << "Enter the box's width: \n";
	cin >> box_width;

	cout << "Enter the book's width: \n";
	cin >> book_width;

	//checks to see if width is evenly divisible by length
	if (box_width % book_width == 0)
		cout << "The box's width is evenly divisible by the book's width. \n";
	else
		cout << "The box's width is not evenly divisible by the book's width. \n";

	//prompts user to enter the box of chocolate's shelf life, and the outside temp.
	int chocolate_shelf_life, outside_temp;

	cout << "Please enter the shelf life for a box of chocolate in years: \n";
	cin >> chocolate_shelf_life;

	cout << "Please enter the outside tempurature in Fahrenheit: \n";
	cin >> outside_temp;

	//checks if outside temp is greater than 90 degrees Fahrenheit.
	if (outside_temp >= 90)
	{
		if (chocolate_shelf_life <= 4)
		{
			cout << "The shelf life of the chocolate is now 0 years. \n";
		}
		else
		{
			chocolate_shelf_life -= 4;
			cout << "The shelf life of the chocolate is now: " << chocolate_shelf_life << " years." << endl;
		}
	}
	else
		cout << "The shelf life of the chocolate is: " << chocolate_shelf_life << " years." << endl;
}

void ex03()
{
	//intitailizing and prompting for user to enter area of square.
	int area_of_square;
	double diagonal_value;

	cout << "Please enter the area of a square : \n";
	cin >> area_of_square;

	//calculating diagonal value.
	diagonal_value = sqrt(2) * area_of_square;
	cout << "The diagonal line is: " << diagonal_value << " units long.\n\n";

	//setting up variable name for yes/no question; asking user to enter y or n in prompt.
	char answer;
	cout << "Please enter either y or n.\n";
	cin.get(answer);

	//checking for y or n.
	if ((tolower(answer)) == 'y')
		cout << "Yes. \n\n";
	else if ((tolower(answer)) == 'n')
		cout << "No. \n\n";
	else
		cout << "That wasn't what I'm looking for. \n\n";

	//clear /n from buffer
	cin.ignore();

	//initializing a char type variable 'tab' to the tab function on the keyboard.
	char tab = '\t';
	//testing tab
	cout << "The moose and " << tab << "the goat. \n\n";

	//prompt user for mailing address
	string mailingAddress;

	cout << "Please enter your mailing address: \n";
	std::getline(std::cin, mailingAddress);

	//check to make sure address is correct
	cout << "Please verify that the information you have given me is correct.\n";
	cout << "Your mailing address is: \n" << mailingAddress << endl << "Correct?\n\n";

	string empty = " ";
}

void ex04()
{
	//intitializing variable for number between one and ten
	int between_one_and_ten = 0;

	//prompt user to enter number between one and ten
	cout << "Please enter a number between one and ten: \n";
	cin >> between_one_and_ten;

	//loop to make sure number is actually between one and ten.
	while ((between_one_and_ten <= 0) || (between_one_and_ten >= 11))
	{
		cout << "That is not what I asked for. \n Please enter a number between one and ten.\n\n";
		cin >> between_one_and_ten;

	}
	//create sum of cubes variable
	int sum_of_cubes = 0;

	//create loop to calculate sum of cubes
	for (int i = 0; i <= between_one_and_ten; i++)
	{
		//create variable to hold/ add ongoing sum of cubes
		int cubing = (i * i * i);
		sum_of_cubes += cubing;
	}
	//check correctness 
	cout << sum_of_cubes << endl << endl;

	//output number of asterisks as between one and ten
	int j = 0;
	do
	{
		cout << " * ";
		j++;
	} while (j <= between_one_and_ten);

	for (int i = 0; i <= 40; i++)
	{
		if (i % 2 == 0)
			cout << " " << i << " ";
	}
}