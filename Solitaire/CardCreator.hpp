/* 
 * File:   CardCreator.hpp
 * Author: helmuth
 *
 * Created on 3 de marzo de 2020, 11:09
 */
#ifndef CARDCREATOR_HPP
#define CARDCREATOR_HPP
#include <string>
#include "Card.hpp"
#include "DoublyLinkedList.hpp"
#include "DoublyLinkedList.cpp"
using namespace std;

class CardCreator {
    public:
        CardCreator();
        DoublyLinkedList<Card*>* createCards();
        
    private:
        string createImage(int type, string value);
        string colors[2] = {"Rojo", "Negro"};
        string actualColor;
        string values[13] = {"K", "Q", "J", "10", "9", "8", "7", "6", "5", "4", "3", "2", "A"};
        string valuesT[4] = {"<3", "<>", "E3", "!!"};
        DoublyLinkedList<Card*>* cards = new DoublyLinkedList<Card*>;  
        string  type;
        string color;
        string cardImage;
        string endColor ="\x1B[00m";
};
#endif /* CARDCREATOR_HPP */