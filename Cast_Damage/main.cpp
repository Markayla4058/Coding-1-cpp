

#include <iostream>
#include <string> 
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;








void SayHello () {
    cout << "Hello!\n";
}

  


void ShowVector(vector<string> vec) {
    for(int i =0; i < vec.size(); i++) {
        cout << vec[i] << ".n";
    }
}











int CastDamage(int min, int max) {

int damage =rand() % (max - min) + min;
int critRoll = rand() % 5;
if(critRoll == 4) {

    damage += damage;
    // cout <<"CRITICAL HIT!\n";
}

return damage;
    
}


//create a function that returns a string. (dead or alive)
// it needs no input parameters
//it will ask the player howmuch health they,
//assign that to a variable named "int health"
//and then call castDamage () with min being 5 and the max being helath.
//subtract castDamage () from health
//if health is less than or equal to 0 retrurn "dead"
//else, return "alive"

//return type, FunctionName, (input parameter) {
string BossFight () {
    cout << "How much health do you have?\n";
    int health;
    cin >> health;

    health -= CastDamage(5, health);

    if(health > 0) {
        return "alive";
    }
    else {
        return "dead";
    }
    




int main() {
    srand(time(0));
    SayHello ();
    string playerState = BossFight();
    cout << "The player is" << playerState << ".\n";






    

    for(int i=0; i < 10; i++) {
        cout << "The enemy has done" << CastDamage (5, 10) << "damage!!\n";
    }
        
    
  
  std::cout << "Hello World!\n";
    cout << "Here are my least-fav food!\n";
    vector<string> hateFoods = { "Corn", "Cabbage", "Plums", "Bananas","Lettuce"};

    ShowVector(hateFoods);

    cout << "Right, so those are the foods that I hate. OH, I forgot, I also hate whipped icing. \n";

    ShowVector(hateFoods);

    cout << "I don't care for strawberries... it doeosn't taste very good.\n";

    ShowVector(hateFoods);

    for(int i=0; hateFoods.size(); i++) {
        cout << hateFoods [i] << ".\n";
    }





    
}  
}