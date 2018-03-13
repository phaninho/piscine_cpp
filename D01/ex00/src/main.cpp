#include "Pony.hpp"

void ponyOnTheStack(void)
{
  Pony ponyst(24, "male", "Bruce", "Stack city");
}

void ponyOnTheHeap(void)
{
  Pony *ponheap = new Pony(12, "female", "Eleonor", "Heap town");
  delete ponheap;
}

int main ()
{
  ponyOnTheStack();
  ponyOnTheHeap();

  return (0);
}
