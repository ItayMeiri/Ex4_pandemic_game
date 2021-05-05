//
// Created by ischelle on 05/05/2021.
//
#include "Board.hpp"
namespace pandemic
{
    Board::Board() {
        //read file
        std::string file_path = "cities_map.txt";
        std::unordered_map<City, CityData> board;
        for(int i = 0; i < 48; i++)
        {
            board.insert(std::make_pair(City::Algiers, CityData{Color::Black}));
        }
        //iterate over file and update map
    }
    bool Board::cured(Color c) {
        return cured_diseases.find(c) != cured_diseases.end();
    }
    int& Board::operator[](City c)
    {
        if(board.find(c) == board.end())
        {
            int x = 1;
            board.insert(std::make_pair(c, CityData{Color::Black, &x}));
        }
        return *(board.at(c).level);
    }
    bool Board::is_clean()
    {
        return false;
    }
    void Board::remove_cures()
    {
        //does nothing
    }
    std::ostream& operator<<(std::ostream& os, const Board &b)
    {
        return os;
    }

}
