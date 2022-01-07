compile: main.c 
	 gcc main.c -o tungtung

run: tungtung
	 ./tungtung

clean: tungtung
	 rm tungtung