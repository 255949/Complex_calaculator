PROJECT=Calculator
SRC= complexcalc.c test.c
UNI=unity
UNITY=unity/unity.c
HEADER=calc.h

$(PROJECT).exe : $(SRC) $(UNITY)
	gcc $(HEADER) $(UNI) $(SRC) $(UNITY) -o $(PROJECT).exe

run:
	./$(PROJECT).exe