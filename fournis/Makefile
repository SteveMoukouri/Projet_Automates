GCC_FLAGS = -Wall
all: main_m_automates main_g_automates main_transformations

m_automates.o : m_automates.c
	gcc $(GCC_FLAGS) -c m_automates.c

g_automates.o : g_automates.c
	gcc $(GCC_FLAGS) -c g_automates.c

transformations.o : transformations.c
	gcc $(GCC_FLAGS) -c transformations.c

main_m_automates.o : main_m_automates.c
	gcc $(GCC_FLAGS) -c main_m_automates.c

main_m_automates : m_automates.o main_m_automates.o
	gcc $(GCC_FLAGS) -o main_m_automates main_m_automates.o m_automates.o

main_g_automates.o : main_g_automates.c
	gcc $(GCC_FLAGS) -c main_g_automates.c

main_g_automates : g_automates.o main_g_automates.o
	gcc $(GCC_FLAGS) -o main_g_automates main_g_automates.o g_automates.o

main_transformations.o : main_transformations.c
	gcc $(GCC_FLAGS) -c main_transformations.c

main_transformations : m_automates.o g_automates.o transformations.o main_transformations.o
	gcc $(GCC_FLAGS) -o main_transformations main_transformations.o m_automates.o g_automates.o  transformations.o

clean :
	rm -f m_automates.o g_automates.o main_m_automates.o main_m_automates main_g_automates.o \
main_g_automates transformations.o main_transformations main_transformations.o

