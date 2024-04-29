

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int rollDie(int max = 6) {
  // int rollDie(int sides =6);
  // int rollDie(int die =1, int sides =6);
  int roll;
  int min = 1;
  // int max = 6;

  roll = rand() % (max - min + 1) + min;
  return roll;
}

// int PlayerBlock(int min, int max) {
//     int block = rand() % (max - min + 1);
//     return block;

// }


int CastDamage(int = 1, int = 6) {
  int roll = rand() % (6 - 1 + 1) + 1;
  return roll;
}

int block(int = 1, int = 6) {
  int roll = rand() % (6 - 1 + 1) + 1;
  return roll;
}


string OrcFight() {
  
  int health;
  cin >> health;

  health -= CastDamage(rollDie());

  if (health < 0) {
    return "alive";
  } else {
    return "dead";
  }

  // string Gold() {
  //     int health;
  //     cin >> health;
  //         health -= rollDie();
  //         if (health <0) {
  //         return "lose";
  //         }
  //         else {
  //         return "no loss";
  //     }


int main() { 
  srand(time(0));
    int randomNumber () % 55 +2000 
    int randomNumberOne()% 2+3
    cout << "Hello Player Let's go on a adventure!\n";


    cout << "Oh no an Orc!\n";
   
      string playerState = OrcFight();  
    for (int i = 0; i < 3; i++) 
      cout << "The orc does" << CastDamage(rollDie()) << "damage!!\n";
  
     for(int i =0; i < 3; i++) 
      cout << "The player uses tries to block!" << block(rollDie());
    
      cout << " The player is" << playerState<< "\n";
      cout <<  "The player runs away from the fight!\n";
 cout << "The player has dropped" << randmonNumber << "gold.\n";
    cout << "you have lasted over" << randonNUmberOne << "turns.\n";
}

  string askYesNo("No"); 
    cout << "Do you wish to keep  adventruing?" <<askYesNo<<"\n";
    int response;
    cin >> response;
    
    if("NO"){
        
cout << "Okay then let's get you to a doctor then. \n";
    }
    else {
        return 0;
    }
   
}