#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
  printf("saper\n");
  printf("\n");
  printf("\n");
 
 

 
 
  int plansza[12][12];
  int a,b;
 


 
 
  for(a=0;a<12;a++)
  {
                   for(b=0;b<12;b++)
                   {
                                    plansza[a][b]=0;
                                   /* printf("%i ",plansza[a][b]);   */
                    }
                  // printf("\n");   
                
   }
  printf("ustalenie wartosci pol na planszy\n");
  printf("0- puste/zakryte pole\n");
  
 printf("9 mina");
  printf("1-8 ilosc min wokol pola");
  
 


 
  int e,f,g;
  
  
  //miny
    srand(time(0));
  for(g=0;g<10;g++)
  {
  
   e= rand() % 10 + 1;
   f=rand() % 10 + 1;
   plansza[e][f]=9; 
   
  if(plansza[e+1][f]!=9)
      plansza[e+1][f]++;
      
      if(plansza[e-1][f-1]!=9)
      plansza[e-1][f-1]++;
      
      if(plansza[e+1][f+1]!=9)
       plansza[e+1][f+1]++;
       
       if(plansza[e][f-1]!=9)
         plansza[e][f-1]++;
         
         if(plansza[e][f+1]!=9)
          plansza[e][f+1]++;
          
          if(plansza[e+1][f-1]!=9)
          plansza[e+1][f-1]++;
          
          if(plansza[e-1][f+1]!=9)
           plansza[e-1][f+1]++;
           
           if(plansza[e-1][f]!=9)
            plansza[e-1][f]++;
   }
 /*  for(a=0;a<12;a++)
  {
                   for(b=0;b<12;b++)
                   {
                                    
                                    printf("%i ",plansza[a][b]);   
                    }
                   printf("\n");   
                
   }*/
   
   printf("\n");
 

    
int j,k;
int planszadwa[10][10];
   for(j=0;j<10;j++)
  {
                   for(k=0;k<10;k++)
                   {
                                    
                                   planszadwa[j][k]=0;
                                  
                                    printf("%i ",planszadwa[j][k]);
                                    
                    }
                    printf("\n");
                
   }
   int l;
   for(l=0;l<90;l++)
   {
   
  printf("podaj wspolrzedne pola\n");
  
   int h,i;
    scanf("%i",&h);
    scanf("%i",&i);
   
   for(j=0;j<10;j++)
  {
                   for(k=0;k<10;k++)
                   {
                                    
                                
                                   planszadwa[h][i]=plansza[h+1][i+1];
                                    printf("%i ",planszadwa[j][k]);
                                    
                    }
                    printf("\n");
                
   }
   if(planszadwa[h][i]==9)
   {printf("mina przegrales");
   l=101;}
   if(l==90)
printf("wygrales");
   
}

 
  system("PAUSE");   
  return 0;
}
