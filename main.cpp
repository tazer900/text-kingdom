#include <iostream>
using namespace std;



int main() {
  int coins = 0;
  int answer;
  int food = 0;
  int water = 0;
  int supplies = 0;
  int inventory[4] = {coins, food, water, supplies};   
  bool leave = false;
  cout << "Welcome to Text Kingdom!" << endl;
  cout << "Would you like to start? 1 - Yes 2 - No" << endl;
  cin >> answer;
  if(answer == 1){
    cout << "Well let our story begin!" << endl;
  } else if(answer == 2){
    cout << "Then what're you doing here? Leave!!" << endl;
    return 0;
  }
  cout << "You are a humble knight and you are walking through a forest" << endl;
  cout << "And you see a goblin" << endl;
  cout << "Touch it? 1 - Yes 2 - No" << endl;
  cin >> answer;
  if(answer == 1){
    cout << "You touch the goblin and you find out that it's dead" << endl;
    cout << "You see that it has a pouch" << endl;
    cout << "In the pouch is 5 gold coins, you put those in your pocket" << endl;
    coins += 5;
    cout << "You now have: " << coins << " coins" << endl;
  } else if(answer == 2){
    cout << "You leave the goblin alone" << endl;
  }
  cout << "As you were walking, you see a shop" << endl;
  cout << "Would you like to enter? 1 - Sure 2 - Nah" << endl;
  cin >> answer;
  if (answer == 1){
    cout << "SHOPKEEPER: Hullo mate! What can I get ya?" << endl;
    cout << "Type 1 for Water, Type 2 for Wood, Type 3 for Food, Type 4 to leave" << endl;
    cin >> answer;
    if(answer == 1 && coins >= 2){
      coins -= 2;
      water ++;
      cout << "SHOPKEEPER: Thank ya! Have a great day!" << endl;
      cout << "You now have " << inventory[0] << coins << " coins, " << inventory[1] << " pound(s) of food, " << inventory[2] << " gallon(s) of water, and " << inventory[3] << " pieces of supplies" << endl;
    } else if(answer == 1 && coins < 2){
      cout << "SHOPKEEPER: Sorry bud, ya don't have enough money..." << endl;
    }
    cout << "Type 1 for Water, Type 2 for Wood, Type 3 for Food, Type 4 to leave" << endl;
    cin >> answer;
    if(answer == 2 && coins >= 3){
      coins -= 3;
      cout << "SHOPKEEPER: Thank ya! Have a great day!" << endl;
      supplies ++;
      cout << "You now have " << inventory[0] << coins << " coins, " << inventory[1] << " pound(s) of food, " << inventory[2] << " gallon(s) of water, and " << inventory[3] << " pieces of supplies" << endl;
    } else if(answer == 2 && coins < 3){
      cout << "SHOPKEEPER: Sorry bud, ya don't have enough money..." << endl;
    }
    cout << "Type 1 for Water, Type 2 for Wood, Type 3 for Food, Type 4 to leave" << endl;
    cin >> answer;
    if (answer == 3 && coins >= 4){
      coins -= 4;
      cout << "SHOPKEEPER: Thank ya! Have a great day!" << endl;
    } else if (answer == 3 && coins < 4){
      cout << "SHOPKEEPER: Sorry bud, ya don't have enough money..." << endl; 
    }
    if(answer == 4){
      cout << "SHOPKEEPER: See ya later!" << endl;
    }
  }
}