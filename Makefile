# Author: Kevin De La Torre
# Card Game Makefile

EXNAME = Game
CARDCLASS = Card
DRIVERCLASS = Driver

EXDEPENDENCIES = $(DRIVERCLASS).o $(CARDCLASS).o

$(EXNAME) : $(EXDEPENDENCIES)
	@echo -n Compiling executable \"$(EXNAME)\"...
	@g++ -std=c++11 $(CARDCLASS).o $(DRIVERCLASS).o -o $(EXNAME)
	@echo done

$(CARDCLASS).o : $(CARDCLASS).cpp $(CARDCLASS).h
	@echo -n Compiling \"$(CARDCLASS)\"...
	@g++ -std=c++11 -c $(CARDCLASS).cpp
	@echo done

$(DRIVERCLASS).o : $(DRIVERCLASS).cpp
	@echo -n Compiling \"$(DRIVERCLASS)\"...
	@g++ -std=c++11 -c $(DRIVERCLASS).cpp
	@echo done

clean :
	@echo -n Cleaning...
	@rm -rf *.o $(EXNAME)*
	@echo done
