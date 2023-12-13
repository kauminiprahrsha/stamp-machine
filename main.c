#include <stdio.h>
#include <stdlib.h>


int main(){

    int c50=10,c25=10,c10=10,c5=10;
    int s25=10,s15=10,s10=10;
    int x;
    int y;
    char O,N;
    char t;

    do{

        printf("\nenter the price of stamp :");
        scanf("%d",&x);
        printf("enter the coin value :");
        scanf("%d",&y);
        if (x>y)
           { printf("insufficient amount tendere"); }
        else if (x!=25 && x!=15 && x!=10)
           { printf("input available stamp price:");
                if (y!=50 && y!=25 && y!=10 && y!=5)
                {printf ("input valid coin value");}
           }


    switch(x)
    {  case 25:
           y=x+y;
            switch (y)
            {              //y=50
                       case 75:
                          if (s25>0 && c25>0)
                            {printf("change is RS.25 coin");
                             printf("stamp is dispensed");
                             --s25;
                             --c25;
                             ++c50;}
                          else if (s25<=0)
                            {printf("no stamp available:");}
                          else
                            {printf("no change available");}
                       break;

                          //y=25
                       case 50:
                          if (s25>0)
                            {printf("\n change is 0");
                             printf("\n stamp is dispensed \n");
                             --s25;
                             ++c25;}
                          else
                            {printf("no stamp available:");}
                       break;
             }
             break;

          case 15:
            y=x+y;
             switch (y)
             {           //y=50
                       case 65:
                         if  (s15>0 && c25>0 && c10>0)
                             {printf("change is RS.25 + RS.10 coins");
                              printf("stamp is dispensed");
                              --s15;
                              --c25;
                              --c10;
                              ++c50;}
                         else if (s15=0)
                             {printf("no stamp available:");}
                         else{printf("no change available");}
                       break;

                          //y=25
                       case 40:
                         if  (s15>0 && c10>0)
                            {printf("change is RS.10 ");
                             printf("stamp is dispensed");
                             --s15;
                             --c10;
                             ++c25;}
                         else if (s15<=0)
                            {printf("no stamp available");}
                         else
                          {printf("no change available");}
                       break;
             }
             break;

           case 10:
             y=x+y;
              switch (y)  //y=50
              {         case 60:
                          if (c25>0 && c10>0 && c5>0)
                             {printf("change is RS.25 + RS.10 + RS.5");
                              printf("\n stamp is dispensed");
                              --c25;
                              --c10;
                              --c5;
                              ++c50;
                              --s10;}
                        break;
                           //y=25
                        case 35:
                          if (s10>0 && c10>0 && c5>0)
                             {printf("change is RS.10 + RS.5 ");
                              printf("\n stamp is dispensed");
                              --s10;
                              --c10;
                              --c5;
                              ++c25;}
                          else if(s10=0)
                             {printf("no stamp available");}
                          else
                             {printf("no change available");}
                         break;

                           //y=10
                         case 20:
                           if(s10>0 )
                             {printf("change is 0");
                              printf("\n stamp is dispensed");
                              ++c10;
                              --s10;}
                           else
                             {printf(" no stamp available");}
                         break;
              }
        break;
      }


     printf( "\n 50 coins amount: %d",c50);
     printf("\n 25 coins amount: %d",c25);
     printf("\n 10 coins amount: %d",c10);
     printf("\n 05 coins amount: %d",c5);
     printf("\n 25 stamps amount: %d",s25);
     printf("\n 15 stamps amount: %d",s15);
     printf("\n 10 stamps amount: %d",s10);




        printf("\n\n Do you want another stamp? (O/N)\n");
        scanf(" %c", &t);

    }
    while (t=='O'||t=='o');
    {printf("\n Thank you come again.\n");}



return 0;


}



