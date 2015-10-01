bin_PROGRAMS = pe1 pe7 pe130

AM_CXXFLAGS = $(INTI_CFLAGS)

pe1_SOURCES = pe1.cpp
pe1_CPPFLAGS = -I../libsrc/libeuler
pe1_LDADD = ../libsrc/libeuler/libeuler.a $(INTI_LIBS)

pe7_SOURCES = pe7.cpp
pe7_CPPFLAGS = -I../libsrc/libeuler -I../libsrc/libprimes
pe7_LDADD = ../libsrc/libeuler/libeuler.a ../libsrc/libprimes/libprimes.a $(INTI_LIBS)

pe130_SOURCES = pe130.cpp
pe130_CPPFLAGS = -I../libsrc/libeuler -I../libsrc/libnumbers -I../libsrc/libprimes
pe130_LDADD = ../libsrc/libeuler/libeuler.a ../libsrc/libnumbers/libnumbers.a ../libsrc/libprimes/libprimes.a $(INTI_LIBS)
