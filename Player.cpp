//
//  Player.cpp
//

#include "Player.hpp"

// TO DO: implement Player's assignment operator
Player& Player::operator=(const Player& p) {
   // TODO: implement this function properly
   playerName = p.playerName;
   position = p.position;
   die = p.die;
   return *this;
   
   throw std::logic_error("not implemented yet");
}

// return player's new position after player rolls die
// If the new position is outside of the board, player stays put
// If not, player moves to the new square = player's postion + die's face value
// TO DO: implement this function to move player to the new postion
//        after player rolls die. Position must be inside the board
int Player::rollDieAndMove() {
   // TODO: implement this function properly
   // Referenced for Alex's code
   die.roll();
   if (position + die.getFaceValue() >= BOARD_SIZE) return position;
   else 
      return position + die.getFaceValue();
   
   throw std::logic_error("not implemented yet");
}
