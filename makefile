count: 
	g++ counter.cc -o count.out

make doc:
	doxygen Doxyfile
make check:
	cppcheck --enable=all counter.cc >cppcheck.txt
	valgrind ./counter.out > error.txt 
