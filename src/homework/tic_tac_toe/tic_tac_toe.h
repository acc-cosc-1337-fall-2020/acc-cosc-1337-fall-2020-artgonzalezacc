//h
#include<iostream>
#include<string>
#include<vector>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe() {};
	TicTacToe(int size) : pegs(size*size, " ") {};
    bool game_over();
    void mark_board(int position);
    void start_game(std::string first_player);
    std::string get_player()const{return player;}
    std::string get_winner()const {return winner; }
    void set_winner();
    const std::vector<std::string>& get_pegs(){return pegs;}
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);

protected:
    std::vector<std::string> pegs{9, " "};
    virtual bool check_column_win()=0;
	virtual bool check_row_win()=0;
	virtual bool check_diagonal_win()=0;

private:
    void set_next_player();
    bool check_board_full()const;
    void clear_board();    
    std::string player;
    std::string winner;
};

#endif