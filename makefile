count: 
	g++ counter.cc -o count.out

make doc:
	doxygen counter.cc
make check:
	cppcheck --enable=all counter.cc >cppcheck.txt
	valgrind ./counter.out >& valgrind.txt 
