#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char data[128];
  char cmd[12];
  printf("input string\n");
  scanf("%s",data);

  while(1)
    {
      printf("print printf to print\n");
      printf("print strlen to cal length\n");
      printf("... ...\n");
      scanf("%s",cmd);
      if(strcmp(cmd,"printf") == 0)
	{
	  printf("%s\n",data);
	}
      else if(strcmp(cmd,"strlen") == 0)
	{
	  printf("length = %d\n",strlen(data));
	}
      else if(strcmp(cmd,"strcat") == 0)
	{
	  printf("input string");
	  char t[12];
	  scanf("%s",t);
	  strcat(data,t);
	  printf("after strcat: %s",data);
	}
      else if(strcmp(cmd,"strcpy") == 0)
	{
	  printf("input string");
	  char t[12];
	  scanf("%s",t);
	  strcpy(data,t);
	  printf("after strcpy: %s",data);
	}
      else if(strcmp(cmd,"strstr") == 0)
	{
	  printf("input string");
	  char t[12];
	  scanf("%s",t);
	  char * tt=strstr(data,t);
	  printf("after strstr : %s",tt);
	}
      else if(strcmp(cmd,"sprintf") == 0)
	{
	  printf("input string");
	  char t[12];
	  scanf("%s",t);
	  sprintf(data,"%s%s",t,t);
	  printf("after sprintf: %s",data);
	}
      else
	{
	  exit(0);
	}
    }
}


