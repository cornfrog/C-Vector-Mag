all:
	@gcc vector-mag.c -o vector-mag -lm
	@mv vector-mag bin/
	@echo MAKE Success: use \'make run\' to run

run:
	@./bin/vector-mag

clean:
	@rm bin/vector-mag
	@echo MAKE \'Clean\' Success: use \'make\' to get back
