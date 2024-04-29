// MArkayla Ligons for coding 1a
//week 15 day 1 spring 2024
/* this isa block comment.*/




#include <iostream>
#include <string>
using namespace std;


enum difficulty {Easy, Medium, Hard};
enum shipType{TUGBOAT = 25, FRIGATE = 50, BATTLESHIP =250, CARRIER =1000};




class robot{
public:
   string name = "Rick";
};

class weapon {
public:
    string name = "Mace of Doom";
int damage = 20;
};



class human {
public:
string name ="Peter";
robot buddy;
weapon myWeapon;
human () {SayHello();}
void SayHello(){
    cout << "Hi! My name is" <<name<< "and my robot's name is" << buddy.name<< ".\n";
    cout <<"My weapon's name is" <<myWeapon.name<< "and it does" << myWeapon.damage<< ".\n";
}
};
    



int main() {
  std::cout << "Hello World!\n";
shipType playerShip = TUGBOAT;

    int playerMoney = 5000;

    if (playerShip == TUGBOAT) {
        cout <<"You've got a tugboat! That's cool.\n";
        playerMoney -= TUGBOAT;

    }
    else if(playerShip == 1000) {
        cout <<"You've got a carrier! WOW!\n";
        playerMoney -=CARRIER;
    }

    shipType enemyShip = FRIGATE;

    if(playerShip > enemyShip) {
        cout <<"Hey! You've "

    cout << "Your money is now $" << playerMoney << ".\n";
    
    human firstHuman;
weapon coolSword;
    coolSword.name = "Sword of Density";
    coolSword.damage = 9999;

    firstHuman.myWeapon =coolSword;
    firstHuman.SayHello();


    cout <<"The memory adress of coolSword is"<<&coolSword<< ".\n";
    cout <<"The memory address of firstHuman.myweapon is"<<&firstHuman.myWeapon<< ".\n";
    
    
}