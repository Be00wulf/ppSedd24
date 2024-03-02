all: solitaire

solitaire: main.o Card.o CardCreator.o DoublyLinkedList.o MovementDriver.o Node.o Printer.o Queue.o Shuffler.o Stack.o
	g++ -o solitaire main.o CardCreator.o DoublyLinkedList.o MovementDriver.o Node.o Printer.o Queue.o Shuffler.o Stack.o
	
main.o: main.cpp Card.hpp CardCreator.hpp Shuffler.hpp Queue.hpp Queue.cpp Printer.hpp MovementDriver.hpp CardCreator.cpp Shuffler.cpp Printer.cpp MovementDriver.cpp
	g++ -c main.cpp

Node.o: Node.cpp Node.hpp
	g++ -c Node.cpp
	
Card.o: Card.cpp Card.hpp
	g++ -c Card.cpp
	
Stack.o: Stack.cpp Stack.hpp Node.hpp
	g++ -c Stack.cpp	
	
DoublyLinkedList.o: DoublyLinkedList.cpp DoublyLinkedList.hpp Node.hpp Node.cpp
	g++ -c DoublyLinkedList.cpp
	
Queue.o:  Queue.cpp Queue.hpp Node.hpp
	g++ -c Queue.cpp
	
CardCreator.o: CardCreator.cpp CardCreator.hpp Card.hpp DoublyLinkedList.cpp DoublyLinkedList.hpp
	g++ -c CardCreator.cpp
	
	
Shuffler.o: Shuffler.cpp Shuffler.hpp Card.hpp Stack.cpp Stack.hpp Queue.hpp Queue.cpp DoublyLinkedList.hpp DoublyLinkedList.cpp
	g++ -c Shuffler.cpp
	
Printer.o: Printer.cpp  Printer.hpp Card.hpp Stack.cpp Stack.hpp Queue.hpp Queue.cpp DoublyLinkedList.hpp DoublyLinkedList.cpp
	g++ -c Printer.cpp
	
MovementDriver.o: MovementDriver.cpp Card.cpp MovementDriver.hpp Card.hpp Stack.cpp Stack.hpp Queue.hpp Queue.cpp DoublyLinkedList.hpp DoublyLinkedList.cpp
	g++ -c MovementDriver.cpp

	
	
	
	
	
	
	
	
