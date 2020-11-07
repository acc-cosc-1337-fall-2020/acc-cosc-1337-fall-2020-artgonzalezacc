#include "tic_tac_toe.h"

using std::cin; using std::cout;

int main() 
{
	TicTacToe tic_tac_toe;
	std::string player;
	char cont;

	do
	{
		while(player != "X" && player != "O")
		{
			std::cout<<"Enter X or O: ";
			std::cin>>player;
		}

		tic_tac_toe.start_game(player);

		do
		{
			cin>>tic_tac_toe;
			cout<<tic_tac_toe;

		} while (tic_tac_toe.game_over() == false);

		std::cout<<"Game over";
		player = "";
		
		cout<<"Play again? y or Y ";
		cin>>cont;

	}while(cont == 'y' || cont == 'Y');

	return 0;
}