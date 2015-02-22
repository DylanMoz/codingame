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
    int N; // the number of points used to draw the surface of Mars.
    cin >> N; cin.ignore();
    for (int i = 0; i < N; i++) {
        int LAND_X; // X coordinate of a surface point. (0 to 6999)
        int LAND_Y; // Y coordinate of a surface point. By linking all the points together in a sequential fashion, you form the surface of Mars.
        cin >> LAND_X >> LAND_Y; cin.ignore();
    }

    // game loop
    while (1) {
        int X;
        int Y;
        int HS; // the horizontal speed (in m/s), can be negative.
        int VS; // the vertical speed (in m/s), can be negative.
        int F; // the quantity of remaining fuel in liters.
        int R; // the rotation angle in degrees (-90 to 90).
        int P; // the thrust power (0 to 4).
        int newAngle;
        int newThrust;
        cin >> X >> Y >> HS >> VS >> F >> R >> P; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        if(R == 0){
            newAngle = 0;
        } else if (R >= 15 && R <= 30){
            newAngle = -15;
        } else if(R > 30 && R <= 45){
            newAngle = -45;
        } else if(R > 45 && R <= 60){
            newAngle = -60;
        } else if(R > 60 && R <= 75){
            newAngle = -75;
        } else if(R > 75 && R <= 90){
            newAngle = -90;
        } else if(R < 0 && R >= -15){
            newAngle = 15;
        } else if(R < -15 && R >= -30){
            newAngle = 30;
        } else if(R < -30 && R >= -45){
            newAngle = 60;
        } else if(R < -45 && R >= -60){
            newAngle = 60;
        } else if(R < -60 && R >= -75){
            newAngle = 75;
        }  else if(R < -75 && R >= -90){
            newAngle = 90;
        }

        if(Y >= 1000){
            newThrust = 3;
        } else if(Y <= 1000){
            newThrust = 4;
        }


        cout << to_string(newAngle) << " " << to_string(newThrust) << endl;


        //cout << "-20 3" << endl; // R P. R is the desired rotation angle. P is the desired thrust power.
    }
}
