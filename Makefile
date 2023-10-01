all: ProgramaMain

ProgramaMain: ProgramaMain.o funcao1.o funcao2.o funcao3.o
	gcc -o $@ $^

ProgramaMain.o: ProgramaMain.c funcoes.h
	gcc -c $<

funcao1.o: funcao1.c funcoes.h
	gcc -c $<

funcao2.o: funcao2.c funcoes.h
	gcc -c $<

funcao3.o: funcao3.c funcoes.h
	gcc -c $<

clean:
	rm *.o ProgramaMain
