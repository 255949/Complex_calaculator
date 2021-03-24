PROJECT=Calculator
SRC= complexcalc.c test.c
INC=unity
UNITY=unity/unity.c
HEADER=calc.h

$(PROJECT).exe : $(SRC) $(UNITY)
	gcc $(HEADER) $(INC) $(SRC) $(UNITY) -o $(PROJECT).exe

run:
	./$(PROJECT).exe