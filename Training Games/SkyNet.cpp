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
    int R; // the length of the road before the gap.
    cin >> R; cin.ignore();
    int G; // the length of the gap.
    cin >> G; cin.ignore();
    double L; // the length of the landing platform.
    cin >> L; cin.ignore();
    bool hasJumped;

    // game loop
    while (1) {

        int S; // the motorbike's speed.
        cin >> S; cin.ignore();
        int X; // the position on the road of the motorbike.
        cin >> X; cin.ignore();

        cerr << G << endl;
        cerr << L << endl;
        cerr << "X is " << X << endl;
        cerr << "R is " << R << endl;

        if(hasJumped){
            cout << "SLOW" << endl;
        }
        else if(S + X > R+1 && !hasJumped){
            cout << "JUMP" << endl;
            hasJumped = true;
        } else if(S + X < R){

            if(S > G+1){
                cout << "SLOW" << endl;
            } else if (S == (G+1)) {
                cout << "WAIT" << endl;
            } else {
                cout << "SPEED" << endl;
            }

        } else {
            if(S > G+1){
                cout << "SLOW" << endl;
            } else if (S == (G+1)) {
                cout << "WAIT" << endl;
            } else if (S + X >= R+2 && !hasJumped){
                cout << "JUMP" << endl;
                hasJumped = true;
            } else {
                cout << "WAIT" << endl;
            }
        }




        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        //cout << "SPEED" << endl; // A single line containing one of 4 keywords: SPEED, SLOW, JUMP, WAIT.
    }
}
