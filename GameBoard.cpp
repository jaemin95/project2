//
//  GameBoard.cpp
//

#include "GameBoard.hpp"

// Build the gameboard
// If the landing square is a chute, set the position to the corresponding lower square
// I.e., player slides down to the lower square
// If the landing square is a ladder, set the position to the corresponding higher square
// Player climbs up to the higher square
// Otherwise, player stays put at the landing square
// TO DO: implement this method
void GameBoard::buildBoard() {
   // TODO: implement this function properly
   // Referenced from Alex Chouy's code, not mine
    
    for (int i = 0; i <= BOARD_SIZE; i++) {
        squares.insert(i,checkChutesLadders(i));
    }
    
   throw std::logic_error("not implemented yet");
}
