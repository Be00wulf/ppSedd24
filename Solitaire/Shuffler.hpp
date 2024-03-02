/* 
 * File:   Shuffler.hpp
 * Author: helmuth
 *
 * Created on 2 de marzo de 2020, 09:30
 */
#ifndef SHUFFLER_HPP
#define SHUFFLER_HPP
#include <string>
#include "Card.hpp"
#include "Stack.hpp"
#include "Stack.cpp"
#include "Queue.hpp"
#include "DoublyLinkedList.hpp"
using namespace std;

class Shuffler {
    
    public:
        Shuffler();
        void shuffleCards(DoublyLinkedList<Card*>* cards);
        void distributeQueues(DoublyLinkedList<Card*>* cards);
        void distributeStacks(DoublyLinkedList<Card*>* cards);
        Queue<Card*>* getQueue();
        DoublyLinkedList<Stack<Card*>*>* getPrincipalStacks();
        DoublyLinkedList<Stack<Card*>*>* getSecondaryStacks();

    private:
        Card* card;
        int randomNum;
        DoublyLinkedList<Stack<Card*>*>* principalStacks = new DoublyLinkedList<Stack<Card*>*>;
        DoublyLinkedList<Stack<Card*>*>* secondaryStacks = new DoublyLinkedList<Stack<Card*>*>;
        Queue<Card*>* queue = new Queue<Card*>;
};
#endif /* SHUFFLER_HPP */

