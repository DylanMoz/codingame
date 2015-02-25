#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctype.h>
#include <map>


using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

string toUpper(const string& s);

int main()
{
    int N; // Number of elements which make up the association table.
    cin >> N; cin.ignore();
    int Q; // Number Q of file names to be analyzed.
    cin >> Q; cin.ignore();
    map<string, string> MIMES;




    for (int i = 0; i < N; i++) {
        string EXT; // file extension
        string MT; // MIME type.
        cin >> EXT >> MT; cin.ignore();
        MIMES.insert(pair<string,string>(toUpper(EXT),MT));
    }
    for (int i = 0; i < Q; i++) {
        string FNAME; // One file name per line.
        getline(cin, FNAME);
        string ext = FNAME.substr((FNAME.find_last_of(".")+1), FNAME.length());

        auto mimeType = MIMES.find(toUpper(ext));

        if(mimeType == MIMES.end() || FNAME == ext){
            cout << "UNKNOWN" << endl;
        } else {
            cout << mimeType->second << endl;
        }
    }

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    //cout << "UNKNOWN" << endl; // For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.
}

string toUpper(const string& s)
{
    std::string result;

    std::locale loc;
    for (unsigned int i = 0; i < s.length(); ++i)
    {
        result += toupper(s.at(i), loc);
    }

    return result;
}
