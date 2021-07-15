#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void func_entete()
{
printf("  \n");
printf("                    Bienvenue dans ce petit programme  \n");
printf("                        qui convertit les nombres      \n");
printf("                          d'une base a une autre \n");
printf("                   ___________________________________ \n");
printf("                   %c       Selectionnez un numero :  %c\n",179,179);
printf("                   %c   1-De puis la base binaire     %c\n",179,179);
printf("                   %c   2-De puis la base octal       %c\n",179,179);
printf("                   %c   3-De puis la bace decimal     %c\n",179,179);
printf("                   %c   4-De puis la base hexa_decimal%c\n",179,179);
printf("                   %c_________________________________%c\n",179,179);
printf("  \n");
}
void func_binaire();
void func_octal();
void func_decimal();
void func_hexa_decimal();
int func_reference(int mod);
//La fonction principale
int main()
{int select;
func_entete();
printf("\n\n                    j'ai choisi :");select = getche();
switch(select)
{
case '1':{func_binaire();}break;
case '2':func_octal();break;
case '3':func_decimal();break;
case '4':func_hexa_decimal();break;
default :printf("\nError\a\a\a");break;
}
}
void func_binaire()
{int x,mod,select,res=0,test;float nbr;
system("cls");
printf("                   ___________________________________ \n");
printf("                   %c       Selectionnez un numero :  %c\n",179,179);
printf("                   %c        1-Vers l'octal           %c\n",179,179);
printf("                   %c        2-Vers le decimal        %c\n",179,179);
printf("                   %c        3-Vers l'hexa_decimal    %c\n",179,179);
printf("                   %c_________________________________%c\n",179,179);
printf("\n                  De puis le binaire vers :");select=getch();
switch(select)
{
case '1':{system("cls\n");
         printf("Maintenant taper votre nbr  :");scanf("%f",&nbr);printf("%f",nbr);
         if(nbr<0)nbr=-nbr;test=nbr;while(test!=0){if((test%10)>1){printf("\nError\a\a\a");exit(1);}test=test/10;}
         printf("\n Votre nombre en octal est :%f",nbr);x=nbr;nbr=nbr-x;printf("\nici font nbr%f\n",nbr);
         while(x>0)
                  {mod=x%1000;
                   mod = func_reference(mod);
                   res=(res*10)+mod;
                   x=x/1000;
                  }
                //L'impression de resultat de traitement dans le sense contraire

         while(res!=0){printf("%d",res%10);res=res/10;}
         if(nbr!=0){printf(".");res=0;
                 //Pour la partie fractionnele Big Problem
                 while(nbr>0)
                    {nbr=nbr*1000;printf("ici nbr nv ent%f",nbr);mod=nbr;printf("ici mod ent%d",mod);nbr=nbr-mod;mod = func_reference(mod);printf("%d",mod);}
                 }
          }break;

case '2':func_octal();break;
case '3':func_decimal();break;
default :printf("\nError\a\a\a");break;
}
}
void func_octal()
{

}
void func_decimal()
{

}

void func_hexa_decimal()
{

}
int func_reference(int mod)
{switch(mod)
{case 0   :mod=0;break;
case 1    :mod =1;break;
case 10   :mod =2;break;
case 11   :mod =3;break;
case 100  :mod =4;break;
case 101  :mod =5;break;
case 110  :mod =6;break;
case 111  :mod =7;break;
case 1000 :mod =8;break;
case 1001 :mod =9;break;
case 1010 :mod ='A';break;
case 1011 :mod ='B';break;
case 1100 :mod ='C';break;
case 1101 :mod ='D';break;
case 1110 :mod ='E';break;
case 1111 :mod ='F';break;
default :printf("Error");
}
return mod;
}






