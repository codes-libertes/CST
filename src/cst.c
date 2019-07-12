#include "cst.h"

static void print_trace (void)
{
  void *array[10];
  size_t size;
  char **strings;
  size_t i;

  size = backtrace (array, 10);
  strings = backtrace_symbols (array, size);

  printf ("Obtained %zd stack frames.\n", size);

  for (i = 0; i < size; i++)
     printf ("%s\n", strings[i]);

  free (strings);
}

static void CSTMainLoop()
{
	while(1){
		print_trace();
		usleep(10* 1000);
	}
}

int main(int argc, char **argv)
{
	printf("USAGE: cst\n");
	printf("[%s][%d][%s]\n",__FILE__,__LINE__,__func__);

	CSTMainLoop();

	exit(EXIT_SUCCESS);
}

