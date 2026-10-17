/*==================== Lesson 2: C++ Introduction ====================*/
#include <iostream>
using namespace std;

/*
 - The main function is the entry point of a C++ program
 - cout is used to print to the console
 - return 0; is used to exit the program
 - The semicolon ; is used to end a statement in C++
 - The curly braces {} indicate the start and end of the main function
*/

str main() {
  cout << "Hello World!";
  return "Tung Tung Tung Satuff";
}


// This is a line comment for shorter notes

/* 
  This is a block comment 
  For longer notes
  That can span multiple lines!
*/








/*==================== Variables and Data Types ====================*/


/*--------------------------------->DELETE
int main() {
  // ints are whole numbers
  int posInt = 4;
  int negInt = -4;

  // doubles are numbers with decimals, also called floating point numbers
  double posDouble = 4.0;
  double negDouble = -4.0;

  // chars are single characters
  char letter = 'A';
  char number = '1';
  char symbol = '!';
  // strings are multiple characters
  string word = "Hello World!";

  // bools are true or false values
  bool isTrue = true;
  bool isFalse = false;
  // bools can also be represented as 1 or 0
  bool isTrue2 = 1;
  bool isFalse2 = 0;

  // Arrays can store multiple pieces of data under 1 variable
  // The importance of arrays is that you cannot change the size of an array after it is created
  int intArray[] = {1, 2, 3};
  cout << "This is an array: " << intArray[0] << " " << intArray[1] << " " << intArray[2] << "\n";
  intArray[0] = 4; // You can change the value of an array element
  cout << "This is an array after changing the first element: " << intArray[0] << " " << intArray[1] << " " << intArray[2] << "\n";
  
  // Arrays can contain different data types, this one is an array of strings
  string stringArray[] = {"one", "two", "three"};
  cout << "This is an array of strings: " << stringArray[0] << " " << stringArray[1] << " " << stringArray[2] << "\n";

  // If you want to create an array of a specific size, and edit it later:
  int array[3];
  array[0] = 1; 
  array[1] = 2; 
  array[2] = 3; 

  // Multiple variables can be printed at once with <<
  // \n is used to create a new line in the output
  cout << "This is a positive and negative integer: " << posInt << " " << negInt << "\n";
  cout << "This is a positive and negative double: " << posDouble << " " << negDouble << "\n";
  cout << "These are characters: " << letter << " " << number << " " << symbol << "\n";
  cout << "This is a string: " << word << "\n";
  cout << "These are bools: " << isTrue << " " << isFalse << " " << isTrue2 << " " << isFalse2 << "\n";

  // If you dotn know what value a variable will have, you can leave it empty
  int temporary;
  // This is called declaring a variable, whereas assigning a value to a variable is called initializing a variable

  // Exercises: 
  // Initialize 2 ints, a and b and print their values. Then, swap their values and print them again.
  
  // What happends when you try to initialize a variable with a value of a different type?
  // Is it always an error?

  // Guess the data type of the following variables:
  // 32.0
  // 3.14
  // "3"
  // "banana"
  // '3'
  
  return 0;
}
----------------------------------->DELETE*/







/*==================== Conditionals ====================*/


/*--------------------------------->DELETE
int main() {

  // Conditionals are used to check if a condition is true or false
  bool conditional = 5 > 3;
  // How do we test this?
  
  bool conditional2 = 5 < 3;

  bool conditional3 = 5 >= 5;

  // why doesn't this work?
  // bool conditional4 = 5 = 2;
  bool conditional5 = 5 == 2;
  // Whats the difference between = and ==?

  // the modulus operator % is used to find the remainder of a division
  int remainder = 5 % 2;
  // how can this be used to check if a number is even or odd?

  // The ! operator is used to negate a boolean value (flip it)
  bool conditional6 = !conditional5;
  // It is also commonly used to check if a variable is not equal to a value
  bool conditional7 = 5 != 2;

  // We can also use && to check if two conditions are true, which is called an AND operator
  bool conditional8 = (5 > 3) && (5 < 10);
  // We can use || to check if at least one condition is true, which is called an OR operator
  bool conditional9 = (5 > 3) || (5 < 10);

  // If statements are used to execute code if a condition is true
  if (10 > 5) {
    cout << "10 is greater than 5" << "\n";
  }
  
  // Else statements are used to execute code if a condition is false
  if (5 > 10) {
    cout << "5 is greater than 10" << "\n";
  }
  else {
    cout << "5 is not greater than 10" << "\n";
  }

  // Exercises:
  // 1) write a program that has a variable called timeOfDay and prints "Good Morning" if timeOfDay is less than 12, "Good Afternoon" if timeOfDay is less than 18, and "Good Evening" otherwise

  // 2) Which of the following conditionals are True?
  string name = "Alex";
  bool conditional10 = (name == "alex");

  int score = 80;
  bool bonus = false;
  bool conditional11 = (score > 90) || (score > 50 && bonus == true);

  int a = 3;
  int b = 8;
  bool coditional12 = !(a > 2 && b < 5);

  int x = 5, y = 8, z = 0;
  bool logic = !(x > 3 || !(y < 10 && z == 0));

  // 3) Write a program that checks if a triangle is equilateral, isosceles, or scalene and prints the result
  // int angleA = 100
  // int angleB = 40
  // int angleC = 40
  
  return 0;
}
//----------------------------------->DELETE*/







/*==================== Loops ====================*/


/*--------------------------------->DELETE

int main() {

  // The while loop is used to execute code while a condition is true
  // use this when you do NOT know how many times you want to execute the loop
  cout << "While loop: \n";
  int i = 0;
  while (i < 10) {
    cout << i << "\n";
    i++;
  }

  // The for loop is used to execute code a specific number of times
  // use this when you DO know how many times you want to execute the loop
  cout << "\n" << "For loop: \n";
  for (int i = 0; i < 10; i++) {
    cout << i << "\n";
  }
  // the first statement initializes the variable that will keep track of the number of times the loop has executed
  // the second statement is the condition that ends the loop
  // the third statement updates the variable that keeps track of the number of times the loop has executed

  // 1) write a program that prints all the even numbers between 1 to 100
  // try this once with the while loop and once with the for loop

  // 2) Write a loop that finds the factorial of a number
  // Ex: Input = 5, Output = 120

  // 3) write a program that prints the first 5 digits of int a from RIGHT to LEFT. Do not write a seperate cout for each digit, instead use a loop
  int a = 13579;
  // Edit the last program so it now prints true or false if it is a palindrome

  // 4) Write a program that prints the following pattern based on the number of rows inputted 
  // Inout 3:
  // *
  // * *
  // * * *

  // 5) Edit the last program so that it now prints a Christmas tree!
  // Input 3:
  //   *
  //  * *
  // * * *  
  
  return 0;
}
----------------------------------->DELETE*/
