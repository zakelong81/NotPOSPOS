EXECUTABLE=NotPOSPOS
CXX=g++

all: main.o order.o item.o registerController.o StoreInventory.o \
	cashierView.o customerView.o
	$(CXX) main.o order.o item.o registerController.o StoreInventory.o \
	cashierView.o customerView.o -o $(EXECUTABLE)

main.o: main.cpp item.h order.h
	@$(CXX) -c main.cpp

order.o: order.h order.cpp IOrder.h
	@$(CXX) -c order.cpp

item.o: item.h item.cpp IItem.h
	@$(CXX) -c item.cpp

registerController.o: StoreInventory.o cashierView.o customerView.o order.o \
	item.o registerController.h registerController.cpp
	@$(CXX) -c registerController.cpp

StoreInventory.o: StoreInventory.h StoreInventory.cpp
	@$(CXX) -c StoreInventory.cpp

cashierView.o: cashierView.h cashierView.cpp
	@$(CXX) -c cashierView.cpp

customerView.o: customerView.h customerView.cpp
	@$(CXX) -c customerView.cpp



clean:
	rm -f *.o *.gch $(EXECUTABLE)