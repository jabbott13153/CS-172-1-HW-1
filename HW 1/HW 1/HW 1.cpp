#include<iostream>
#include<ctime>
#include<cmath>
#include<cstdlib>
#include<string>
using namespace std;

//void ex02();
//void ex03();
void ex04();
void ex05();
void integer_doubling(int);
void add(int, int);
void adding_one(int&);
void outputting_values(int list[], int size_of_list);
void checking_values(int list[], int size_of_list);

int main()
{
	//ex02();
	//ex03();
	//ex04();
	ex05();
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

//function to double argument
void integer_doubling(int placeholder)
{
	int doubling = placeholder * 2;
	cout << placeholder << " doubled is: " << doubling << endl << endl;
}

//function to add together the sum of two inputted arguments
void add(int number_1, int number_2)
{
	int sum = number_1 + number_2;
	cout << number_1 << " + " << number_2 << " = " << sum << endl << endl;
}

//function to add one to its argument
void adding_one(int& number_1)
{
	int sum = number_1 + 1;
	cout << number_1 << " + 1 is: " << sum << endl << endl;
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
	int j = 1;
	do
	{
		cout << " * ";
		j++;
	} while (j <= between_one_and_ten);
	cout << endl << endl;

	//print out only the even numbers between one and forty
	for (int i = 0; i < 41; i++)
	{
		if (i % 2 == 0)
			cout << " " << i << " ";
	}

	cout << endl << endl;
//call function that doubles its argument
	integer_doubling(between_one_and_ten);

	//setting up variables for function that will add two random numbers together
	int x, y = 0;

	//setting up the random numbers for x and y
	srand(time(0));
	x = rand() % 100;
	y = rand() % 100;

	//calling function that will add x and y together.
	add(x, y);

	//calling function that will add one to argument
	adding_one(x);
}

//function to take array and size of array as an argument, and then prints out the values of the array
void outputting_values(int list[], int size_of_list)
{
	for (int i = 0; i < size_of_list; i++)
	{
		cout << " " << list[i];
	}
	cout << endl << endl;
}

//function to take array, array size, and an integer. Will check if the integer is contained within the array.
void checking_values(int list[], int size_of_list)
{
	int number = 0;
	cout << "Please enter an integer: \n";
	cin >> number;
	for (int i = 0; i < size_of_list; i++)
	{
		if (number == list[i])
		{
			cout << number << " is contained within the array. \n\n";
			break;
		}
		else
			cout << number << " is not contained within the array. \n\n";
	}
}
void ex05()
{
	//create loop that asks for 5 integers, and then stores the values in an array
	//creating array for said values to be stored in
	int value_store[5];

	//variable that stores size of value_store array; constant
	const int SIZE = 5;

	//create value to store user input
	int number;
	for (int i = 0; i < 5; i++)
	{
		cout << "Please enter an integer: \n";
		cin >> number;
		value_store[i] = number;
	}

	//checking to make sure loop works
	/*for (int i = 0; i < 5; i++)
	{
		cout << " " << value_store[i] << " ";

	}*/

	//calculates sum and products of the values sotred in the array, and then outputs results

	//value to store total sum in
		int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		//adds all numbers together
		
		sum += value_store[i];
		if (i == 4)
			cout << "The total sum is: " << sum << endl << endl;
	}


//value to store total product in
		int product = 1;


	for (int i = 0; i < 5; i++)
	{
		//multiplies all numbers together
		
		product *= value_store[i];
		if (i == 4)
			cout << "The total product is: " << product << endl << endl;
	}

	//call function that will print out all the values stored in value_store array
	outputting_values(value_store, SIZE);

	//call function that will check to see if a particular integer is stored within the value_store array
	checking_values(value_store, SIZE);
}