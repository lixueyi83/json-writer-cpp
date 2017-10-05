all:
	g++ -o main main.cpp -ljsoncpp 

clean:
	rm -f main *.json  
