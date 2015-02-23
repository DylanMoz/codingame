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
    int L;
    cin >> L; cin.ignore();
    int H;
    cin >> H; cin.ignore();
    string T;

    getline(cin, T);
    for (int i = 0; i < H; i++) {
        string ROW;
        getline(cin, ROW);

        for(int i = 0; i < T.size(); i++){
            int letter = ((int) (toupper((T[i])))) - 65;
            if(letter >= 0 && letter <= 26){
                for(int j = (letter*L); j < ((letter*L)+L); j++){
                    cout << ROW[j];
                }
            } else {
                for(int j = (26*L); j < ((26*L)+L); j++){
                    cout << ROW[j];
                }
            }
        }
        cout << endl;
    }

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    //cout << "answer" << endl;
}
