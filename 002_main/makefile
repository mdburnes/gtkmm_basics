objects = main.o

main : $(objects)
	g++ $(objects) -o main `pkg-config gtkmm-3.0 --libs`

main.o : main.cc
	g++ main.cc -c -o main.o `pkg-config gtkmm-3.0 --cflags`


.PHONY : clean

clean :
	-rm main $(objects)