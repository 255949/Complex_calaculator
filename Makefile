PROJECT=Calculator
SRC= complexcalc.c\
test.c
INC_TEST=unity
UNIT=unity/unity.c
HEADER=calc.h



$(PROJECT).exe = $(SRC)$(UNIT)
	gcc $(HEADER) -I $(INC_TEST) $(SRC) $(UNIT) -o $(PROJECT).exe

run:
	./$(PROJECT).exe