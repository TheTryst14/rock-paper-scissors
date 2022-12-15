#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;

char getUserInput();

char computerPick();

void whoWins(char userPick, char computerPick, int *userWinCounter, int *compWinCounter);

int main() {
    
}

char getUserInput() {
    char userInput;
    int run = 1;
    while (run == 1) {
        cout << "Pick rock (r), paper (p), or scissors (s): ";
        cin >> userInput;
        if ((userInput != 'r') && (userInput != 'p') && (userInput != 's')) {
            cout << "User input error\n";
        } else {
            run = 0;
        }
    }
    return userInput;
}

char computerPick() {
    char compPick;
    srand(time(0));
    int rdm = (rand() % 3);
    switch(rdm) {
        case 0:
            compPick = 'r';
            break;
        case 1:
            compPick = 'p';
            break;
        default:
            compPick = 's';
    }
    return compPick;
}

void whoWins(char userPick, char compPick, int *userWinCounter, int *compWinCounter) {
    if ((userPick == 'r') && (compPick == 'r')) {
        cout << "Tie, lame.\n";
    } else if ((userPick == 'r') && (compPick == 'p')) {
        cout << "Computer Wins!\n";
        compWinCounter++;
    } else if ((userPick == 'r') && (compPick == 's')) {
        cout << "You win!\n";
        userWinCounter++;
    } else if ((userPick == 'p') && (compPick == 'r')) {
        cout << "You win!\n";
    } else if ((userPick == 'p') && (compPick == 'p')) {
        cout << "Tie, what gives.\n";
    } else if ((userPick == 'p') && (compPick == 's')) {
        cout << "Computer Wins!\n";
    } else if ((userPick == 's') && (compPick == 'r')) {
        cout << "Computer Wins!\n";
    } else if ((userPick == 's') && (compPick == 'p')) {
        cout << "You Win!\n";
    } else {
        cout << "Tie, you really couldn't have picked a better option?\n";
    }
}