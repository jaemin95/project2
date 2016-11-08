//
//  GameBoard.hpp
//

#pragma once

#include <stdexcept>

#include "ExtendableVector.h"

const int OUTSIDE_BOARD = -1;
const int BOARD_SIZE = 101;

class GameBoard {
public:   
   enum Ladders { ONE = 1, FOUR = 4, NINE = 9, TWENTY_ONE = 21, TWENTY_EIGHT = 28, THIRTY_SIX = 36, FIFTY_ONE = 51, SEVENTY_ONE = 71, EIGHTY = 80 };
   
   enum Chutes { SIXTEEN = 16, FORTY_SEVEN = 47, FORTY_NINE = 49, FIFTY_SIX = 56, SIXTY_TWO = 62, SIXTY_FOUR = 64, EIGHTY_SEVEN = 87, NINETY_THREE = 93, NINETY_FIVE = 95, NINETY_EIGHT = 98 };
   
   // Build the gameboard
   // TO DO: implement this function
   void buildBoard() {
    }
   
   GameBoard() {
      // TODO: implement this function properly
      
      buildBoard();
      
      throw std::logic_error("not implemented yet");
   }
   
   // If player lands on chutes or ladders, returns the new position.
   // Otherwise, returns the player's current position.
   // If the player's position is outside of the gameboard, throws index out of bounds exception
   // TO DO: implement this function properly
   int checkChutesLadders(int position) {
      if ((position < 0) || (position >= BOARD_SIZE)) {
         throw range_error("index out of bounds");
      }
      // TODO: implement this function properly
      
      // Ladders
        if (position == Ladders.at(0))
            return 38;
        if (position == Ladders.at(1))
            return 14;
        if (position == Ladders.at(2))
            return 31;
        if (position == Ladders.at(3))
            return 42;
        if (position == Ladders.at(4))
            return 84;
        if (position == Ladders.at(5))
            return 44;
        if (position == Ladders.at(6))
            return 67;
        if (position == Ladders.at(7))
            return 91;
        if (position == Ladders.at(8))
            return 100;
        
        // Chutes
        if (position == Chutes.at(0))
            return 6;
        if (position == Chutes.at(1))
            return 26;
        if (position == Chutes.at(2))
            return 11;
        if (position == Chutes.at(3))
            return 53;
        if (position == Chutes.at(4))
            return 19;
        if (position == Chutes.at(5))
            return 60;
        if (position == Chutes.at(6))
            return 24;
        if (position == Chutes.at(7))
            return 73;
        if (position == Chutes.at(8))
            return 75;
        if (position == Chutes.at(9))
            return 78;
        
        // No ladders and no chutes
        return position;
      
      throw std::logic_error("not implemented yet");
   }
   
private:
   // TO DO: add storage for squares including square of chutes and ladders
   // Requirement: use ExtendableVector to store the square
   
   // Used these variables as wrappers
    ExtendableVector<int> Chutes;
    ExtendableVector<int> Ladders;
    ExtendableVector<int> squares;
    int position;
};
