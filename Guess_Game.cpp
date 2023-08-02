#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand((unsigned int) time(NULL));
    int number=(rand()%100)+1;
    int guess=0;
    do{
        cout<<"Guess the number (1-100)";
        cin>>guess;
        if(guess>number){
            cout<<"Enter lower number"<<endl;
        }
        else if(guess<number){
            cout<<"Enter higher number"<<endl;
        }
        else{
            cout<<"You Won!!";
        }
    }while(guess!=number);
    return 0;
}