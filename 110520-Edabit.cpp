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

/* 4. MEDIUM level
Create a function which simulates the game "rock, paper, scissors".
The function takes the input of both players (rock, paper or scissors), 
first parameter from first player, second from second player. 
The function returns the result as such:
"Player 1 wins"
"Player 2 wins"
"TIE" (if both inputs are the same)
The rules of rock, paper, scissors, if not known:
Both players have to say either "rock", "paper" or "scissors" at the same time.
Rock beats scissors, paper beats rock, scissors beat paper.
rps("rock", "paper") ➞ "Player 2 wins"
rps("paper", "rock") ➞ "Player 1 wins"
rps("paper", "scissors") ➞ "Player 2 wins"
rps("scissors", "scissors") ➞ "TIE"
rps("scissors", "paper") ➞ "Player 1 wins"

NOTE: There are several ways to solve this challenge.
*/

std::string rps(std::string s1, std::string s2) {
	const std::string r = "rock";
	const std::string p = "paper";
	const std::string s = "scissors";
	const std::string P2wins = "Player 2 wins";
	const std::string P1wins = "Player 1 wins";
	const std::string tie = "TIE";
	
	if (s1 == r){
		if (s2 == r) return tie;
		else if (s2 == p) return P2wins;
		else if (s2 == s) return P1wins;
	}
	else if (s1 == p){
		if (s2 == p) return tie;
		else if (s2 == s) return P2wins;
		else if (s2 == r) return P1wins;
	}
	else if (s1 == s){
		if (s2 == s) return tie;
		else if (s2 == r) return P2wins;
		else if (s2 == p) return P1wins;
	}
}

/*
Better solutions:
1. 
	std::string rps(std::string s1, std::string s2) {
		return s1 == s2 ? "TIE" :
			(s1[0] == 'r' && s2[0] == 's' ? "Player 1 wins" : 
			(s1[0] == 'p' && s2[0] == 'r' ? "Player 1 wins" : 
			(s1[0] == 's' && s2[0] == 'p' ? "Player 1 wins" : "Player 2 wins")));
	EXPLANATION
	// 1/18/2020
	// I used one statement with four ternary operations to successfully
	// complete the challenge. My approach was to check to see if player 1
	// can win against player 2. There are three possibilities that player 1
	// can win against player 2, with the other six (nine total) being
	// an equal amount of ties and loses. Therefore, if player 1 can win,
	// then one of the bracketed ternary operators will be true. Otherwise,
	// either the first ternary operator will be true, or the last ternary 
	// operator is false. Here is an example with test case 3:
	// 1. s1 == s2 | They are not the same, so move on to the next check.
	// 2. rock == scissors | This is not true, so move on to the next check.
	// 3. paper == rock | This is not true, so move on to the next check.
	// 4. scissors == paper | This is not true, so player 2 wins.
	END OF EXPLANATION
}

2. 
std::string rps(std::string player1, std::string player2){
    if(player1 == "rock" && player2 == "paper") return "Player 2 wins";
    if(player1 == "paper" && player2 == "scissors") return "Player 2 wins";
    if(player1 == "scissors" && player2 == "rock") return "Player 2 wins";
    if(player1 == player2) return "TIE";
    else return "Player 1 wins";
}

OBSERVATIONS:
1. That I can return a string-sentence. No need to place them in a string variable.
2. I should've considered the repetitive statements, which was the line of code of "TIE".
That should've been placed in one condition.
3. I can actually refer an index to a string by using the same with how I call an elements in a
vector/array = s1[0] for first letter of the string.
4. The 2 solutions above solved the problem in a way by looking at the condition-of-winning of just one player.
If the player meets any of the condition, they win.
Otherwise, if none meets the condition, the other player wins.
Unless if they have the same input, it's a tie.
5. I've learned what a ternary operation is, but still haven't explored that much.
Need to study more about that.
*/

// ----------------------------------------------------------------


