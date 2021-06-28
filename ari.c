#include <ctype.h>
#include <math.h>
#include <cs50.h>
#include <string.h>
string ari(string a)
{
  int ch=0,
      wo=0,
      sen=0;
  for (int  i=0;i<strlen(a);i++)
  {
  if (isalnum(a[i]))
  {
  ch++;
  }
  else if (a[i]==' ')
  {
  wo++;
  }
  else if (a[i]=='.'||a[i]=='!'||a[i]=='?')
  {
  sen++;
  }
  }
  
  int index=ceil((4.71*((float)ch/(float)wo))+(0.5*((float)wo/(float)(sen))-21.43));
  if(index==1)
  {
  return "Kindergarten";
  }
  else if(index==2)
  {
  return "First/Second Grade";
  }
  else if(index==3)
  {
  return "Third Grade";
  }
  else if(index==4)
  {
  return "Fourth Grade";
  }
  else if(index==5)
  {
  return "Fifth Grade";
  }
  else if(index==6)
  {
  return "Sixth Grade";
  }
  else if(index==7)
  {
  return "Seventh Grade";
  }
  else if(index==8)
  {
  return "Eight Grade";
  }
  else if(index==9)
  {
  return "Ninth Grade";
  }
  else if(index==10)
  {
  return "Tenth Grade";
  }
  else if(index==11)
  {
  return "Eleventh Grade";
  }
  else if(index==12)
  {
  return "Twelfth grade";
  }
  else if(index==13)
  {
  return "College student";
  }
  else if(index==14)
  {
  return "Professor";
  }
 return "NADA"
}
