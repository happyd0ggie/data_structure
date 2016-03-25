OBJS = insert_sort.o
CC = cc

main : $(OBJS)
	$(CC) -o main $(OBJS)
#binsearch.o : common.h
#quick_sort.o : common.h
insert_sort.o : common.h

.PHONY : clean
clean:
	-rm main $(OBJS)
