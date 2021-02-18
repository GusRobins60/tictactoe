#include<iostream>


using namespace std;

int turn = 4;
int space;
void player_input();

int main(){
	player_input();
	return 0;
}



void player_input()
{
	int input = 0;
	
	if (turn % 2 == 0 ){
		cout << "player two pick your spot:" << endl;
		cin >> input;
		if (space >= 1 || space <= 9){
			space = input;
		}
		else{
			cout << "invalid input try again";
		}
    }
	else{
		cout << "Player one pick your spot: "<< endl;
		cin >> input;
		if (space >= 1 || space <= 9){
			space = input;
		}
		else{
			cout << "invalid input try again";
		}
	}
	cout << space << endl;	
	
}