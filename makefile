StringTest: String.c
	gcc String.c -o Stringtest

run: Stringtest
	./Stringtest

clean: 
	rm *~
