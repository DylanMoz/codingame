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
    int LX; // the X position of the light of power
    int LY; // the Y position of the light of power
    int TX; // Thor's starting X position
    int TY; // Thor's starting Y position
    cin >> LX >> LY >> TX >> TY; cin.ignore();

    // game loop
    while (1) {
        int E; // The level of Thor's remaining energy, representing the number of moves he can still make.
        cin >> E; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;


        if (TX < LX && TY > LY){
            cout << "NE" << endl;
            TX += 1;
            TY -= 1;
        } else if (TX > LX && TY < LY){
            cout << "SW" << endl;
            TX -= 1;
            TY += 1;
        } else if (TY < LY && TX < LX){
            cout << "SE" << endl;
            TX += 1;
            TY += 1;
        } else if (TX > LX && TY < LY){
            cout << "NW" << endl;
            TX -= 1;
            TY -= 1;
        } else if (TX < LX){
            cout << "E" << endl;
            TX += 1;
        } else if (TX > LX){
            cout << "W" << endl;
            TX -= 1;
        } else if (LY > TY){
            cout << "S" << endl;
            TY += 1;
        } else if (LY < TY){
            cout << "N" << endl;
            TY -= 1;
        }

        //cout << "SE" << endl; // A single line providing the move to be made: N NE E SE S SW W or NW
    }
}
