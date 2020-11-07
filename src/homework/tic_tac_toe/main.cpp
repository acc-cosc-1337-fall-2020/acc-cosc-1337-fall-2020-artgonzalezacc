#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cin; using std::cout;

int main() 
{
	TicTacToeManager manager;
	std::string player;
	char cont;

	do
	{
		TicTacToe tic_tac_toe;

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
		manager.save_game(tic_tac_toe);
		
		cout<<"Play again? y or Y ";
		cin>>cont;

	}while(cont == 'y' || cont == 'Y');

	cout<<manager;

	return 0;
}