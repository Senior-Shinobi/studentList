A4:	main.o Student.o Object.o Date.o Control.o View.o 
	g++ -o A4 main.o Student.o Object.o Date.o Control.o View.o

main.o:	main.cc Control.h
	g++ -c main.cc

Control.o: Control.cc Control.h View.h Student.h Date.h List.h
	g++ -c Control.cc

View.o: View.cc View.h
	g++ -c View.cc

Date.o: Date.cc Date.h Object.h
	g++ -c Date.cc

Student.o:	Student.cc Student.h Object.h
	g++ -c Student.cc

Object.o: Object.cc Object.h
	g++ -c Object.cc

clean:
	rm -f *.o A4
