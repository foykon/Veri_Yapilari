compileandrun: program run 

program:kutuphane main 
	g++ .\lib\TxtReader.o .\lib\main.o -o .\bin\program 

kutuphane:
	g++ -I ".\include" -c .\src\TxtReader.cpp -o .\lib\TxtReader.o 
main: 
	g++ -I ".\include" -c .\src\main.cpp -o .\lib\main.o

run: 
	.\bin\program.exe