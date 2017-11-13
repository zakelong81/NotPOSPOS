executable=NotPOSPOS

all: main.o order.o item.o StoreInventory.o cashierView.o customerView.o
	g++ main.o order.o item.o StoreInventory.o cashierView.o customerView.o -o $(executable)

main.o: main.cpp item.h order.h
	g++ -c main.cpp

order.o: order.h order.cpp IOrder.h
	g++ -c order.cpp

item.o: item.h item.cpp IItem.h
	g++ -c item.cpp

StoreInventory.o: StoreInventory.h StoreInventory.cpp
	g++ -c StoreInventory.cpp

cashierView.o: cashierView.h cashierView.cpp
	g++ -c cashierView.cpp

customerView.o: customerView.h customerView.cpp
	g++ -c customerView.cpp

clean:
	rm *.o $(exe)