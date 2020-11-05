// ----------------------------------------------------------------

/* 1. EASY level
Write a function, that replaces all vowels in a string with a specified vowel.
vowReplace("apples and bananas", "u") ➞ "upplus und bununus"
vowReplace("cheese casserole", "o") ➞ "chooso cossorolo"
vowReplace("stuffed jalapeno poppers", "e") ➞ "steffed jelepene peppers"
NOTES:
All words will be lowercase.
Y is not considered a vowel.
*/

using namespace std;
string vowReplace(string word, char vowel) {
	string replaced;
		for (char& letter : word)
		{
			switch (letter)
			{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					letter = vowel;
					replaced.push_back(letter);
					break;
				default:
					replaced.push_back(letter);
					break;
			}
	}
	return replaced;
}

/*
1. My first solution was to replace the string word itself.
But I ran into the ff problems:
  - I can't modify the parameters. I tried adding reference (&), but it's not possible.
      * Solution: if I can't modify the parameters, I'd have to make my own container
        to evaluate, read and replace the new letters
  - I made a nested for-loop, which was confusing.
      * Removed nested loop. Simplified into 1 for-range loop
  - Didn't have a new variable for the replaced word.
      * See first solution above.
2. Learned that I can use member-function push_back to string, just like how it's in vectors.
3. The purpose of reference in char& letter is to use that variable to fulfill
  pushing back letters to the string-replaced.
  
----
Here's my first solution:

using namespace std;
string vowReplace(string word, char vowel) {
	for (int i = 0; i<=word.size(); ++i){
		// checks each letter in the word
		// reads it into a variable
		for (char letter : word){
		switch (letter){
			case 'a': case 'e': case 'i': case 'o': case 'u':
				word[i] = vowel;
				break;
			default:
				//do nothing
				break;
		}
		}
		}
	cout << word;
}
----

*/
// ----------------------------------------------------------------

/* 2. VER EASY level
Write a function that checks whether a person can watch an MA15+ rated movie.
One of the following two conditions is required for admittance:
The person is at least 15 years old.
They have parental supervision.
The function accepts two parameters, age and isSupervised. Return a boolean.
acceptIntoMovie(14, true) ➞ true
acceptIntoMovie(14, false) ➞ false
acceptIntoMovie(16, false) ➞ true
*/

bool acceptIntoMovie(int age, bool isSupervised) {
	if (age >= 15)
		return true;
	else if (isSupervised == true)
		return true;
	else
		return false;
}

/*
Better solutions:
bool acceptIntoMovie(int age, bool isSupervised) {
	return age > 14 || isSupervised;
}
*/
// ----------------------------------------------------------------

/* 3. EASY level
Write a function that changes every letter to the next letter:
"a" becomes "b"
"b" becomes "c"
"d" becomes "e"
and so on ...
move("hello") ➞ "ifmmp"
move("bye") ➞ "czf"
move("welcome") ➞ "xfmdpnf"
NOTE: There will be no z's in the tests.
*/

std::string move(std::string word) {
	int ascii = 0;
	std::string new_word;
	for (char& letter : word){
		ascii = letter;
		++ascii;
		new_word.push_back(ascii);
	}
	return new_word;
}

/*
Better Solutions:
1.
std::string move(std::string word) {
	for(char &c : word)
	{
		c += 1;
	}
	return word;
}
2.
std::string move(std::string word) {
	for (char& i : word) i++;
	return word;
}

OBSERVATIONS:
1. Seems like I don't need to use push_back function to replace the character to
the string, because of (&) reference. The first solution simulates this evaluation:
c = c + 1;
Which means, add 1 to the letter then replace that value to c.
What happens here are:
a. When a range-for loop is used, 
the variable in the loop not only evaluates the character in the string,
it also remembers the index. So we don't need to refer to the index.
b. We also don't need to convert the character to int.
Incrementing a 'char' variable means reading the next character,
according to ASCII.
It's a simplified version of my solution.

2. The second solution is the most elegant one, in my opinion.

*/

// ----------------------------------------------------------------

/*

*/



// ----------------------------------------------------------------


