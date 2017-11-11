exe=exe

all: main.o order.o item.o
	g++ main.o order.o item.o -o $(exe)

main.o: main.cpp item.h order.h
	g++ -c main.cpp

order.o: order.h order.cpp IOrder.h
	g++ -c order.cpp

item.o: item.h item.cpp IItem.h
	g++ -c item.cpp

clean:
	rm *.o $(exe)
