/* 
 * File:   Printer.hpp
 * Author: helmuth
 *
 * Created on 3 de marzo de 2020, 23:05
 */

#ifndef PRINTER_HPP
#define PRINTER_HPP
#include "Card.hpp"
#include "Queue.hpp"
#include "Stack.hpp"
#include "DoublyLinkedList.hpp"
using namespace std;

class Printer {
    public:
        Printer();
        void print(Queue<Card*>* queue, Stack<Card*>* stack, DoublyLinkedList<Stack<Card*>*>* principalStacks, DoublyLinkedList<Stack<Card*>*>* secondaryStacks);
       
    private:
        void printQueuesAndSecondaryStacks(Queue<Card*>* queue, Stack<Card*>* stack, DoublyLinkedList<Stack<Card*>*>* secondaryStacks);
        void printPrincipalStacks( DoublyLinkedList<Stack<Card*>*>* principalStacks);
        string createImage(int part, int type, string value);
        string type;
        string color;
        string endColor ="\x1B[00m";
        Card* card;       
        Stack<Card*>* stack = new Stack<Card*>;;
        Stack<Card*>* stack1 = new Stack<Card*>;;
        Stack<Card*>* stack2 = new Stack<Card*>;;
        Stack<Card*>* stack3 = new Stack<Card*>;;
        Stack<Card*>* stack4 = new Stack<Card*>;;
        Stack<Card*>* stack5 = new Stack<Card*>;;
        Stack<Card*>* stack6 = new Stack<Card*>;;
        Stack<Card*>* stack7 = new Stack<Card*>;;
        Stack<Card*>* auxiliarStack = new Stack<Card*>;
        Stack<Card*>* auxiliarStack1 = new Stack<Card*>;;
        Stack<Card*>* auxiliarStack2 = new Stack<Card*>;;
        Stack<Card*>* auxiliarStack3 = new Stack<Card*>;;
        Stack<Card*>* auxiliarStack4 = new Stack<Card*>;;
        Stack<Card*>* auxiliarStack5 = new Stack<Card*>;;
        Stack<Card*>* auxiliarStack6 = new Stack<Card*>;;
        Stack<Card*>* auxiliarStack7 = new Stack<Card*>;;
        Queue<Card*>* auxiliarQueue = new Queue<Card*>;;
};
#endif /* PRINTER_HPP */

