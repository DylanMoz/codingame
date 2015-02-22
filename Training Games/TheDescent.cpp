#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
**/
int main()
{

    // game loop
    while (1) {
        int SX;
        int SY;
        cin >> SX >> SY; cin.ignore();
        vector<int> unsortedMtns;


        for (int i = 0; i < 8; i++) {
            int MH; // represents the height of one mountain, from 9 to 0. Mountain heights are provided from left to right.
            cin >> MH; cin.ignore();
            unsortedMtns.push_back(MH);
        };

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        int result = *(max_element(unsortedMtns.begin(), unsortedMtns.end()));
        cerr << result << endl;
        cerr << unsortedMtns[SX] << endl;

        if(unsortedMtns[SX] == result){
            cout << "FIRE" << endl;
        } else{
            cout << "HOLD" << endl; // either:  FIRE (ship is firing its phase cannons) or HOLD (ship is not firing).
        }


    }
}
