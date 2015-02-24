#include <iostream>
#include <string>
#include <deque>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    string MESSAGE;
    deque<int> S;
    deque<int> tempDeque;


    getline(cin, MESSAGE);
    for(int i = 0; i < MESSAGE.length(); i++){
        char CHAR = char(MESSAGE[i]);

        int ASCII = ((int) CHAR);

        for(int i=0; i<7; i++){
            tempDeque.push_front(ASCII%2);
            ASCII = ASCII/2;
        }
        for(int i = 0; i < tempDeque.size(); i++){
            S.push_back(tempDeque[i]);
        }
        tempDeque.clear();
    }

    for(int front = 0; front <= S.size()-1; front++) {
        if(S[front] == 1){
            cout << "0 0";
            for(int i = front+1; i < S.size(); i++){
                if(S[i] == S[front]){
                    S[i] = -1;
                    cout << "0";
                }
                else{
                    cout << " ";
                    break;
                }
            }
        } else if(S[front] == 0){
            cout << "00 0";
            for(int i = front+1; i < S.size(); i++){
                if(S[i] == S[front]){
                    cout << "0";
                    S[i] = -1;
                }
                else{
                    cout << " ";
                    break;
                }
            }
        }
    }


    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    //cout << "answer" << endl;
}
