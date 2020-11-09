/*
This file are codes I've written months ago from previous Chapters
and I've improved and documented them here.
*/

//-----------------------------------------------------------------------------

// Chapter3/Chapter3Exercise4.cpp
// made on Sep 30

int main()
{
	//Exercise #4
	cout << "Exercise #4 \n";

	int oranges = 0;
	int apples = 0;

	cout << "There is a basket filled with oranges and apples. \n";
	cout << "How many oranges and apples do you see? \n";
	cin >> oranges >> apples;
  
  if (oranges == 0 && apples == 0)
    cout << "There are no fruits.\n";
  else if (oranges > apples)
    cout << "There are more oranges.\n";
  else if (oranges < apples
    cout << "There are more apples.\n";
  else
    cout << "Both have same quantity.\n";

	cout << "There are a total of " << oranges + apples << " fruits.\n";
	cout << "Difference is " << oranges - apples << ".\n";
	cout << "The product is " << orange * apples << ".\n";
}

//-----------------------------------------------------------------------------

// Chapter3/Chapter3Exercise6.cpp
// made on Sep 30
// SORTING without using the sort function

int main()
{
	//Exercise #6
	cout << "Exercise #6 \n";

	double num1;
	double num2;
	double num3;
  double small;
  double middle;
  double large;

	cout << "Enter three numbers. \n";
	cin >> num1 >> num2 >> num3;
	cout << "Sequencing numbers...\n";
  
  if (num1 < num2 && num1 < num3){
    small = num1;
    if (num2 < num3){
      middle = num2;
      large = num3;
    }
     else {
      middle = num3;
      large = num2;
    }
  }
  else if (num2 < num1 && num2 << num3) {
    small = num2;
    if (num1 < num3) {
      middle = num1;
      large = num3
    }
    else {
      middle = num3;
      large = num2;
    }
  }
  else {
    small = num3;
    if (num1 < num2){
      middle = num1;
      large = num2
    }
    else {
      middle = num2;
      large = num1;
    }
  }
  
  cout << small << ", " << middle << ", " << large;
  
}

//Better, cleaner solution

vector<double> numbers;
//temporary storage
double temp{0};

std::cout << "Enter numbers to be sorted. Enter a non-number to end input-entry.\n";

while (std::cin >> temp) {
  numbers.push_back(temp);
}

std::sort(numbers.begin(), numbers.end());

for (double temp : numbers) {
  if (temp != numbers[numbers.size()-1])
    std::cout << temp << ", ";
  else
    std::cout << temp;
}

