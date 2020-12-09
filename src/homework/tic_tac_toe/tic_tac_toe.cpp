//cpp
#include "tic_tac_toe.h"

using std::cout; using std::cin;

bool TicTacToe::game_over()
{
    if (check_column_win() || check_row_win() ||
		check_diagonal_win()) 
	{
        set_winner();
		return true;
	}
    else if (check_board_full())
    {
        winner = "C";
        return true;
    }

	return false;
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player; 
    clear_board();
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player= "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()const
{
    for(auto peg: pegs)
    {
        if(peg == " ")
        {
            return false;
        }
    }

    return true;
}

void TicTacToe::clear_board()
{
    for(std::size_t i=0; i < pegs.size(); ++i)
    {
        pegs[i] = " ";
    }
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}

bool TicTacToe::check_column_win()
{
	return false;
}

bool TicTacToe::check_row_win()
{
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	return false;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    out<<"Winner: "<<game.get_winner()<<"\n";
    
    for (std::size_t i = 0; i < game.pegs.size(); i += sqrt(game.pegs.size()))
	{		
		out << game.pegs[i] << "|" << game.pegs[i + 1] << "|" << game.pegs[i + 2];			

		if (game.pegs.size() == 16)
		{
			out << "|" << game.pegs[i + 3];
		}
        
        out << "\n";
	}		

    out << "\n";

	return out;		
}

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    unsigned int position;
    cout<<"Enter position from 1 to "<<game.pegs.size();
    in>>position;

    while(!in.good() || (position < 1 || position > game.pegs.size()))
    {
        in.clear();
        in.ignore(5, '\n');
        
        cout<<"Enter position from 1 to "<<game.pegs.size();
        in>>position;
    }

    game.mark_board(position);

    return in;
}