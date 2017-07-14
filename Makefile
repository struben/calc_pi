all : calc_pi

calc_pi : calc_pi.o
	gcc -o $@ $<

calc_pi.o : calc_pi.c
	gcc -c $< -o $@

clean :
	rm -f calc_pi
	rm -f *.o
