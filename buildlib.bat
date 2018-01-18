mingw32-g++.exe -Wall -O2  -c abs.cpp -o obj\Release\abs.o
mingw32-g++.exe -Wall -O2  -c complex.cpp -o obj\Release\complex.o
mingw32-g++.exe -Wall -O2  -c conj.cpp -o obj\Release\conj.o
mingw32-g++.exe -Wall -O2  -c imag.cpp -o obj\Release\imag.o
mingw32-g++.exe -Wall -O2  -c norm.cpp -o obj\Release\norm.o
mingw32-g++.exe -Wall -O2  -c pow.cpp -o obj\Release\pow.o
mingw32-g++.exe -Wall -O2  -c real.cpp -o obj\Release\real.o
cmd /c if exist bin\Release\libcomplib.a del bin\Release\libcomplib.a
ar.exe -r -s bin\Release\libcomplib.a obj\Release\abs.o obj\Release\complex.o obj\Release\conj.o obj\Release\imag.o obj\Release\norm.o obj\Release\pow.o obj\Release\real.o
