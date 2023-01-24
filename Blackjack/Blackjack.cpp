#include <iostream>  //input output
#include <cstdlib> // rand and srand
#include <stdio.h> //for null  
#include <time.h>  //for sis time
using namespace std; //gives everything std tag



int main() {

    int randomdealer1;

    int playerrandom1;      //declering veribles 

    int con = 0;

    string choice;

    srand(time(NULL));      //seeding srand with time and a null pointer

    randomdealer1 = rand() % 11;  //random number between 0-11

    string name;


    cout << "welcome to blackjack\n Your opponent for today will be ricky\n. Have a wonderful time.\n";
    cout << "please enter your name";   //text and input
    cin >> name;

    cout << "your name is " << endl << name; //display name

    cout << "\nricky draws a card and places it on the table\n" << "the dealer has \n";

    cout << "\n" << randomdealer1; //displayers dealers cards/number

    playerrandom1 = rand() % 11; // displays players cards/number

    cout << name << " has " << playerrandom1;  //name + cards

    cout << "\n do you wish to hit? y/n"; // Player instruction


    while (playerrandom1 < 21) //while loop to ask for input then add a random number between 0-11 depending on player input.
    {

        cin >> choice;
        if (choice == "y")
        {
            int x;
            cout << "you hit";
            x = rand() % 11;
            playerrandom1 += x;
            cout << playerrandom1;
        }
        else { //if input is not y then the player will stay on the number/cards they have

            cout << "you stand at \n" << playerrandom1;
            break;
        }



    }

    cout << "the dealers turn";

    while (randomdealer1 < 17) //makes the dealer get a random number (0-11) untill 17 (house rules in blackjack)
    {
        int w;
        w = (rand() % 11) + 0;
        randomdealer1 += w;
        cout << "\n" << randomdealer1;

    }
    if (playerrandom1 > 21 && randomdealer1 > 21) {


        cout << "draw";//checks if both players are bust incase of tie
    }
    else if (playerrandom1 > 21) {
        //checks if player is bust
        cout << "the player is bust they lose";
    }

    else if (randomdealer1 > 21) {
        //checks if dealer is bust

        cout << "the dealer is bust they lose";
    }
    else if (playerrandom1 > randomdealer1)
    {
        cout << "\n both players are not bust checking cards...";   //checks who has won
        cout << "the player wins";
    }
    else {
        cout << "\n both players are not bust checking cards...";
        cout << "the dealer wins";
    }



}

