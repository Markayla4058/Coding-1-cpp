#include <iostream>
#include <vector> 
#include <string>
using namespace std;
#include <ctime>
#include <cstdlib>
 int main (){
    cout << "Let's talk about my favorute games!\n";

    vector<string> favGames {"Sonic Heroes", "Mario and Luigi Dream Team", "Road Trip Adventure", "102 Dalmations Puppies to the Rescue", "Pokemon Soul Silver", "Kingdom Hearts Dream Drop Distacne", "Sonic 3 and Knuckles", "Pokemon Legend Arceus", "RollerCoaster Typhoon 3", "Pokemon Platinum"};
    vector<string>::iterator iter = favGames.begin();

     cout << "Here's the first game on my list of favorite games:" <<*iter<< ".\n";

     cout << "Here's my favorite game list!:\n";
     for(vector<string>::const_iterator iter = favGames.begin(); iter != favGames.end(); ++iter)
         cout << *iter << "\n";
     
     cout << "Add a game:\n";
     string input;
     cin >> input;
     favGames.push_back(input);

     
     
}

