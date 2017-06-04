#include "types.h"
#include "user.h"
#include "date.h"

int
main(int argc, char *argv[])
{
  
  int ut_start = 0;
  int i;
  ut_start = uptime();
  printf(1, "Call: getpid\n");
  for (i = 0; i < 1000000; i++)
  {
  	getpid();
  }
  printf(1, "uptime: %d\n",(uptime() - ut_start));

  ut_start = uptime();
  printf(1, "\nLinear Search: first call\n");
  for (i = 0; i < 1000000; i++)
  {
  	aaICO();	
  }
  printf(1, "uptime: %d\n",(uptime() - ut_start));
  printf(1, "Result of aaICO: %d\n",aaICO());
  
  ut_start = uptime();
  printf(1, "Linear Search: last call\n");
  for (i = 0; i < 1000000; i++)
  {
  	xMznMiMbd2ASBAopjUBD();	
  }
  printf(1, "uptime: %d\n",(uptime() - ut_start));
  printf(1, "Result of xMznMiMbd2ASBAopjUBD: %d\n",xMznMiMbd2ASBAopjUBD());

  ut_start = uptime();
  printf(1, "\nHashtable: one of the fast calls \n");
  for (i = 0; i < 1000000; i++)
  {
  	lcQQ6();	
  }
  printf(1, "uptime: %d\n",(uptime() - ut_start));
  printf(1, "Result of lcQQ6: %d\n",lcQQ6());


  ut_start = uptime();
  printf(1, "Hash Table: between fast and slow call of Linear search\n");
  for (i = 0; i < 1000000; i++)
  {
  	k_jNM();	
  }
  printf(1, "uptime: %d\n",(uptime() - ut_start));
  printf(1, "Result of k_jNM: %d\n",k_jNM());  

  struct rtcdate r;
  if(date(&r))
  {
  	printf(1,"\nDate system call result:  %d - %d -%d\n",r.month, r.day, r.year);
  }

  printf(1,"\nPassing bad address to 65:\n" );
  char* p = "badAddress65";
  int rv;
  asm volatile("movl %0, %%eax" : : "rm" (p));
  asm volatile("int $65" : :);
  asm volatile("movl %%eax, %0" : "=rm" (rv) : );
  printf(1,"Successfully passed bad address to 65\n" );

  printf(1,"Passing bad address to 66:\n" );
  char* q = "baddAddress66";
  asm volatile("movl %0, %%eax" : : "rm" (q));
  asm volatile("int $65" : :);
  asm volatile("movl %%eax, %0" : "=rm" (rv) : );
  printf(1,"Successfully passed bad address to 66\n" );

exit();
}

