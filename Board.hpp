//
// Created by ischelle on 05/05/2021.
//

#pragma once



#include "City.hpp"
#include "Color.hpp"
#include <vector>
#include <unordered_set>
#include <unordered_map>
namespace pandemic{

    class Board
    {
        struct CityData{
            Color col;
            int* level = nullptr;
            bool center = 0;
            std::vector<City> neighbors;
        };
    public:
        Board(); // This will read the file, and initialize all the CityData stats
        std::unordered_map<City, CityData> board;
        std::unordered_set<Color> cured_diseases; // initialize this to false
        bool cured(Color c); // checks if color disease is cured
        int& operator[](City c);
        bool is_clean();
        void remove_cures();
        friend std::ostream& operator<<(std::ostream& os, const Board &b);
    };


}

