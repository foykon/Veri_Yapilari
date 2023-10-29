compileandrun: program run 

program:kutuphane main 
	g++  .\lib\main.o -o .\bin\program 

kutuphane:
	
main: 
	g++ -I ".\include" -c .\src\main.cpp -o .\lib\main.o

run: 
	.\bin\program.exe