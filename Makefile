##
## EPITECH PROJECT, 2020
## CPE_dante_2019
## File description:
## Makefile
##

DIR=solver
GENERATOR = generator
EXEC=$(DIR)

all: $(EXEC)

$(EXEC):
	@(cd $(DIR) && $(MAKE))
	@(cd $(GENERATOR) && $(MAKE))

.PHONY: clean mrproper $(EXEC)

clean:
	@(cd $(DIR) && $(MAKE) $@)

mrproper: clean
	@(cd $(DIR) && $(MAKE) $@)

##.PHONY: all compil