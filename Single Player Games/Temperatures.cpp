#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int N; // the number of temperatures to analyse
    cin >> N; cin.ignore();
    string TEMPS; // the N temperatures expressed as integers ranging from -273 to 5526
    getline(cin, TEMPS);
    vector<int> theTemps;
    vector<int> theLowest;

    istringstream iss(TEMPS);
    int temp;
    while(iss >> temp)
    {
        theTemps.push_back(abs(temp));
        theLowest.push_back(temp);
    }
    if(theTemps.empty()){
        cout << "0" << endl;
    } else {
        int min = *std::min_element(theTemps.begin(), theTemps.end());
        int trickyCase = *std::max_element(theLowest.begin(), theLowest.end());

        if (trickyCase <= 0) {
            cout << trickyCase << endl;
        } else {
            cout << min << endl;
        }
    }


    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    //cout << "result" << endl;
}
