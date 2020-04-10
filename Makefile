all :  sumas.x datos.txt sumas.pdf

sumas.x : sumaserror.cpp
	g++ $^ -o $@

datos.txt : sumas.x
	./sumas.x > datos.txt

sumas.pdf : datos.txt plotfigure.gp
	gnuplot plotfigure.gp


clean :
	rm -f datos.txt sumas.x a.out
