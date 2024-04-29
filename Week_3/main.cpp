// Brain Foster Coding 1
//Spring 2024 Week 3 Day 1 (jan 29, 2024)

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
srand(time(0));  
// a name is a string variable type.
// we are creating a new variable with the type string
// the variable name is "name"
// and the vaule that this variable holds is "Markayla"


string name= "LexieLu";

 cout << "Hi " <<name<< ", how are you today?\n";
  // the computer will output "Hi Markayla, how are you today?"
  // let's get input from the player.
  // the player will type in the age and we'll assign that to a variable
  // if the age is over 40, we'll say "Damn, that's old!"

  cout<< "How old are you? If you don't mind me asking...\n";
  //creating a new variable of the type "int" (short for integer)
  // the variable name is "age" and the vaule is "0"
  int age=0;
  cin >> age;


  // this is programmar's first logic, the if statement.
  // the if statement test something to see if it is true.
  /// if the test elaluates to true, we run the code attached to the if statement.
  if (age > 40) {
    cout << "Damn, that's old!\n";
  }
  else {
    cout << "Okay, cool. Thanks.\n";
  }

// booleans are either true or false. they store that binary vaule. 
  // we are creating a new varibale of the type bool (short for boolean)
  //the varibale name is "Player is having a good day"
  bool playerIsHavingAGoodDay = false;
  //PASCAL_CASE_IS_SUPER_UGLY

  // let's talk about random numbers in tiny tiny scope.
  // add the following to top of ypur program:
  // #include <ctime>        //the C progamming language's Time library
  // #include <cstdlib>      //the C standard



// generating a random number here.
  playerIsHavingAGoodDay = rand() % 2;


  // bools with a vaule of 1 are "true"
  if (playerIsHavingAGoodDay) {
      cout << "I'm glad you're having a good day!\n";
  }
    // bools with a vaule of 0 are "fasle"
  else {
      cout << "Oh no, I heard you having a rough go of it today.\n";
  }

  // I want you to generate some random numbers. like this:
  int randomNumberOne =rand();
  int randomNumberTwo =rand() % 10+1;
  int randomNumberThree =rand() % 50+1970;  
  int randomNumberFour =rand() % 11-5;
  // then display them with cout:
  cout <<  "random number one is " << randomNumberOne<< ".\n";
  cout <<  "random number two is " << randomNumberTwo<< ".\n";
  cout <<  "random number three is " << randomNumberThree<< ".\n";
  cout <<  "random number four is " << randomNumberFour<< ".\n";  
  // then, use modulus to constrain some of the random numbers to a range.
}  