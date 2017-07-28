# Author: Kevin De La Torre
# Card Game Makefile

EXNAME = CardGame
EXCLASS = Launcher
CARDCLASS = Card
GAMECLASS = Game
TESTCLASS = Tester

TESTDEPENDENCIES = $(GAMECLASS).o $(CARDCLASS).o
EXDEPENDENCIES = $(TESTDEPENDENCIES) $(EXCLASS).o

$(EXNAME) : $(EXDEPENDENCIES)
	@echo -n Compiling executable \"$(EXNAME)\"...
	@g++ -std=c++11 $(EXDEPENDENCIES) -o $(EXNAME)
	@echo done

$(EXCLASS).o : $(EXCLASS).cpp
	@g++ -std=c++11 -c $(EXCLASS).cpp

$(CARDCLASS).o : $(CARDCLASS).cpp $(CARDCLASS).h
	@echo -n Compiling \"$(CARDCLASS)\"...
	@g++ -std=c++11 -c $(CARDCLASS).cpp
	@echo done

$(GAMECLASS).o : $(GAMECLASS).cpp $(GAMECLASS).h
	@echo -n Compiling \"$(GAMECLASS)\"...
	@g++ -std=c++11 -c $(GAMECLASS).cpp
	@echo done

$(TESTCLASS).o : $(TESTCLASS).cpp
	@g++ -std=c++11 -c $(TESTCLASS).cpp

test : $(TESTCLASS).o $(TESTDEPENDENCIES)
	@echo -n Compiling test executable \"$(TESTCLASS)\"...
	@g++ -std=c++11 $(TESTDEPENDENCIES) $(TESTCLASS).o -o $(TESTCLASS)
	@echo done

clean :
	@echo -n Cleaning...
	@rm -rf $(EXDEPENDENCIES) $(EXNAME)*
	@echo done
