#include "card.h"

// TODO: Implement here the methods of Card, PointCard, and MoveCard

Card::Card(int id, string text){
    this->id=id;
    this->text=text;
}

// virtual Card::~Card(){}

int Card::getId(){
    return id;
}

string Card::getText(){
    return text;
}

// virtual void Card::cardAction(Player* player, Player* opponent){}


PointCard::PointCard(int id, string text, int points):Card(id,text){
    this->points=points;
}

void PointCard::cardAction(Player* player, Player* opponent){

}

MoveCard::MoveCard(int id, string text, MoveType type):Card(id,text){
    this->type=type;
}

void MoveCard::cardAction(Player* player, Player* opponent){

}
