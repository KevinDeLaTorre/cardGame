# Author: Kevin De La Torre
# Card Game Makefile

EXNAME = CardGame
EXCLASS = Launcher
CARDCLASS = Card
GAMECLASS = Game
PLAYERCLASS = Player
GRAPHICSCLASS = Graphics
BOARDCLASS = Board
TESTCLASS = Tester

# Tried to categorize the dependencies up a bit
GRAPHICSDEPENDENCIES = $(GRAPHICSCLASS).o $(BOARDCLASS).o
TESTDEPENDENCIES = $(GAMECLASS).o $(CARDCLASS).o $(PLAYERCLASS).o $(GRAPHICSDEPENDENCIES)
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

$(PLAYERCLASS).o : $(PLAYERCLASS).cpp $(PLAYERCLASS).h
	@echo -n Compiling \"$(PLAYERCLASS)\"...
	@g++ -std=c++11 -c $(PLAYERCLASS).cpp
	@echo done

$(GAMECLASS).o : $(GAMECLASS).cpp $(GAMECLASS).h
	@echo -n Compiling \"$(GAMECLASS)\"...
	@g++ -std=c++11 -c $(GAMECLASS).cpp
	@echo done

$(GRAPHICSCLASS).o : $(GRAPHICSCLASS).cpp $(GRAPHICSCLASS).h
	@echo -n Compiling \"$(GRAPHICSCLASS)\"...
	@g++ -std=c++11 -c $(GRAPHICSCLASS).cpp
	@echo done

$(BOARDCLASS).o : $(BOARDCLASS).cpp $(BOARDCLASS).h
	@echo -n Compiling \"$(BOARDCLASS)\"...
	@g++ -std=c++11 -c $(BOARDCLASS).cpp
	@echo done

$(TESTCLASS).o : $(TESTCLASS).cpp
	@g++ -std=c++11 -c $(TESTCLASS).cpp

test : $(TESTCLASS).o $(TESTDEPENDENCIES)
	@echo -n Compiling test executable \"$(TESTCLASS)\"...
	@g++ -std=c++11 $(TESTDEPENDENCIES) $(TESTCLASS).o -o $(TESTCLASS)
	@echo done

clean :
	@echo -n Cleaning...
	@rm -rf $(EXDEPENDENCIES) $(TESTCLASS).exe $(TESTCLASS).o $(EXNAME).exe
	@echo done
