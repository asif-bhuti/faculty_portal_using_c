#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char glob_file[30]={'\0'},gcrs1[10]={'\0'},gcrs2[10]={'\0'},gcrs3[10]={'\0'},gcrs4[10]={'\0'};
int gk=0;

void sign_up()
{

   char user[30];
    printf("Enter user-name : ");
    gets(user);

    char pass[30],pas[30],ch;
    printf("Enter your password : \n\a\a");
    fflush(stdin);
    int i,j,k=0;

    PASS:
        if(k>0)
            printf("\nEnter your password again : \n\a\a");

    int flag1=0,flag2=0,flag3=0;
    for(i=0 ; i<2 ; i++)
    {
        if(i>0)
            printf("\nEnter your password again : \n\a\a");

        for( j=0 ; j<30 ; j++)
        {
            ch=getch();
            fflush(stdin);
            if(ch==8)  //ASCI value of BackSpace
        {
            printf("\b \b");
            if(i>0)
            {
                j--;
                pass[j]='\0';
                j--;
            }

            else
            {
                j--;
                pas[j]='\0';
                j--;
            }
        }



        else if(ch==13)
        {
            if(i>0)
                pass[j]='\0';
            else
                pas[j]='\0';
            break;
        }
        else
        {
            if(i>0)
                pass[j]=ch;
            else
                {
                pas[j]=ch;


        if(ch>64&&ch<91)
        {
            flag2++;
        }
        else if(ch>96&&ch<123)
        {
            flag3++;
        }
        else if(ch==32)
            flag1++;
                }

            printf("*");
            k++;
        }
        fflush(stdin);
        }
    }

    if(strcmp(pass,pas)!=0)
    {
        printf("\n\nUnmatched password. \nPress any key to try again.\n\a\a\a");
        getchar();
        goto PASS;
    }
    else
        {


        if(flag3==0 || flag2==0 || flag1>0 || strlen(pass)<10)
        {
             printf("\n\nWEAK PASSWORD\n\n\a");
            if(flag3==0)
               printf("Please, enter at least one lower case character. \nPress any key to try again.\n\a");
            if(flag2==0)
                printf("Please, enter at least one upper case character. \nPress any key to try again.\n\a");
            if(strlen(pass)<10)
                printf("Please enter minimum 10 character. \nPress any key to try again.\n\a");
            if(flag1>0)
                printf("Please do not enter any space. \nPress any key to try again.\n\a");
            getch();
            printf("\n");
            goto PASS;

        }

        }

        strcat(user,pass);

    FILE *fp=fopen("secret.txt","a");
    if(fp==NULL)
        printf("Error\a\a");
    else
    {
        fprintf(fp,"%s\n",user);
       printf("\nSign-up successful.\n");
       gk++;
    }
    fclose(fp);

    getch();
    color();
    system("cls");



  char fac[10],txt[10]=".txt";
 int ID;

 strcat(user,txt);
//input commands//
 printf("Enter your INITIALS : ");
 gets(fac);
 printf("Enter your ID : ");
 scanf("%d",&ID);
 fflush(stdin);

 FILE *fpt=fopen(user,"w");

 if(fpt==NULL)
    printf("\nError\a\a");

 else
    {
     fprintf(fpt,"%s\n",fac);
     fprintf(fpt,"%d\n",ID);
    }
 fclose(fpt);


 int a;
 for(i=0;i<20;i++) printf("%c",249);

 printf("Select your courses along with sections");

 for(i=0;i<20;i++) printf("%c",249);
 printf("\n\n");

 printf("#   Course    Section \n");
 for(i=0;i<22;i++) printf("%c",249);

 printf("\n01.  ENG103      01\n");
 printf("02.  ENG103      02\n");
 printf("03.  ENG103      03\n");
 printf("04.  CSE115      01\n");
 printf("05.  CSE115      02\n");
 printf("06.  CSE115      03\n");
 printf("07.  CSE115L     01\n");
 printf("08.  CSE115L     02\n");
 printf("09.  CSE115L     03\n");
 printf("10.  MAT116      01\n");
 printf("11.  MAT116      02\n");
 printf("12.  MAT116      03\n\n");

 int amount;
 printf("\nEnter the number of courses you want to take : ");
 scanf("%d",&amount);
 fflush(stdin);

for(i=1; i<=amount ; i++)
{
    printf("Enter choice %d : ",i);
    scanf("%d",&a);
     switch(a)
 {
 case 1:
    fpt=fopen(user,"a");
    if(fpt==NULL)
        printf("\nError");
    else
        fprintf(fpt,"ENG103.1\nRA-09:40AM\n");
        fclose(fpt);
    break;

 case 2:
    fpt=fopen(user,"a");
    if(fpt==NULL)
        printf("\nError\n");
    else
        fprintf(fpt,"ENG103.2\nRA-08:00AM\n");
        fclose(fpt);
        break;

 case 3:
      fpt=fopen(user,"a");
    if(fpt==NULL)
    printf("\nError");
    else
    fprintf(fpt,"ENG103.3\nRA-04:20PM\n");
    fclose(fpt);
    break;

 case 4:
      fpt=fopen(user,"a");
    if(fpt==NULL)
    printf("\nError");
    else
    fprintf(fpt,"CSE115.1\nST-09:40AM\n");
    fclose(fpt);
    break;

 case 5:
      fpt=fopen(user,"a");
    if(fpt==NULL)
    printf("\nError");
    else
    fprintf(fpt,"CSE115.2\nST-11:20AM\n");
    fclose(fpt);
    break;

 case 6:
      fpt=fopen(user,"a");
    if(fpt==NULL)
    printf("\nError");
    else
    fprintf(fpt,"CSE115.3\nST-02:40PM\n");
    fclose(fpt);
    break;

 case 7:
      fpt=fopen(user,"a");
    if(fpt==NULL)
    printf("\nError");
    else
    fprintf(fpt,"CSE115L.1\nMW-08:00AM\n");
    fclose(fpt);
    break;

 case 8:
      fpt=fopen(user,"a");
    if(fpt==NULL)
    printf("\nError");
    else
    fprintf(fpt,"CSE115L.2\nMW-09:40AM\n");
    fclose(fpt);
    break;

 case 9:
      fpt=fopen(user,"a");
    if(fpt==NULL)
    printf("\nError");
    else
    fprintf(fpt,"CSE115L.3\nMW-01:00PM\n");
    fclose(fpt);
    break;

 case 10:
      fpt=fopen(user,"a");
    if(fpt==NULL)
    printf("\nError");
    else
    fprintf(fpt,"MAT116.1\nMW-11:10AM\n");
    fclose(fpt);
    break;

 case 11:
      fpt=fopen(user,"a");
    if(fpt==NULL)
    printf("\nError");
    else
    fprintf(fpt,"MAT116.1\nMW-04:20PM\n");
    fclose(fpt);
    break;

 case 12:
      fpt=fopen(user,"a");
    if(fpt==NULL)
    printf("\nError");
    else
    fprintf(fpt,"MAT116.1\nMW-02:40PM\n");
    fclose(fpt);
    break;
 }
}
 printf("\n\n");
 for(i=0;i<22;i++) printf("%c",249);
 printf("\n");
 printf("0.Login\n");
 printf("1.Exit\n");
 printf("\nEnter your choice : ");
 scanf("%d",&a);
 switch(a)
 {
     case 0: log_in(); break;
//     case 1: log_out(); break;
 }

}

int log_in()
{
    char user[30],userr[30],pass[30],ch;
    int j=4,k=0;

    while(j>0)
    {
        int i=0;
            printf("Enter user name (Max attempts %d):",j);
    gets(user);
    printf("Enter your password :");

    for(i=0; i<30 ; i++)
    {
        ch=getch();
        if(ch==13)
        {
         pass[i]='\0';
         break;
        }
        else if(ch==8)
        {
            printf("\b \b");
            i--;
            pass[i]='\0';
            i--;
        }
        else
        {
            pass[i]=ch;
            printf("*");
        }
    }

    strcat(user,pass);

    FILE *fp=fopen("secret.txt","r");
    if(fp==NULL)
        printf("Error");
    else
    {
     while(fscanf(fp,"%s",userr)==1)
        {
            if(strcmp(userr,user)==0)
            {
                k++;
                break;

            }
            if(feof(fp)==1) break;
        }
    }
    fclose(fp);
    if(k==0)
            {
            printf("\nUSER DOES NOT EXIST.\n\n\a\a\a\a\a\a\a");
            j--;
            }
    else
    {
        break;
    }
}
if(j<1)
{
    printf("Too many attempts.\a\a\a\a\a\a\a\a");
    exit(1);
}
else
{
    if(gk==0)
      color();
    else printf("\n\nLogin Successfull.\n\n\n");
}

getch();
system("cls");

 char txt[10]=".txt",ini[10],crs1[20],crs2[20],crs3[20],crs4[20],time1[20],time2[20],time3[20],time4[20],sec1[10],sec2[10],sec3[10],sec4[10];
 int ID,i;
 strcat(user,txt);
 strcpy(glob_file,user); //saving the value in global variable to access it from anywhere

 FILE *fpt=fopen(user,"r");
 if(fpt==NULL)
    printf("\n\nError.No record exists.\n");
 else
 {
  fscanf(fpt,"%s%d%s%s%s%s%s%s%s%s",ini,&ID,crs1,time1,crs2,time2,crs3,time3,crs4,time4);

//prints arrows
for(i=0;i<45;i++) printf("%c",236);
      printf("      Initials : %s   ",ini);

//prints arrows
      for(i=0;i<45;i++) printf("%c",236); printf("\n");
//prints arrows
for(i=0;i<45;i++) printf("%c",236);

printf("      ID : %d         ",ID);
//prints arrows
for(i=0;i<45;i++) printf("%c",236); printf("\n");

//prints arrows
for(i=0;i<115;i++) printf("-"); printf("\n");
//prints arrows
for(i=0;i<45;i++) printf("%c",205);

printf("                         ");

//prints arrows
for(i=0;i<45;i++) printf("%c",205); printf("\n");

 }
fclose(fpt);

strcat(crs1,txt);
FILE *fcrs1=fopen(crs1,"r");
if(fcrs1==NULL)
    printf("\nNo data of first choice course\n");
else
 //   printf("\nFile exists");
fclose(fcrs1);


strcat(crs2,txt);
FILE *fcrs2=fopen(crs2,"r");
if(fcrs2==NULL)
    printf("\nNo data of second choice course\n");
else
  //  printf("\nFile exists");
fclose(fcrs2);


strcat(crs3,txt);
FILE *fcrs3=fopen(crs3,"r");
if(fcrs3==NULL)
    printf("\nNo data of third choice course\n");
else
//    printf("\nFile exists");
fclose(fcrs3);


strcat(crs4,txt);
FILE *fcrs4=fopen(crs4,"r");
if(fcrs4==NULL)
    printf("\nNo data of fourth choice course\n");
else
    //printf("\nFile exists");
fclose(fcrs4);

printf("\n\n");
   mainmenu();

}


void mainmenu()
{
    int i;
    printf("\n1.Schedule.");
    printf("\n2.View & Edit.");
    printf("\n3.Mark calculator.");
    printf("\n4.Log out.");

    printf("\n\nEnter your choice : ");
    scanf("%d",&i);

    system("cls");  //to clear the screen

    switch(i)
    {
    case 1:
        schedule();
        break;
    case 2:
        viewNedit();
        break;
    case 3:
        MarkCalc();
        break;
    case 4:
        log_out();
        break;
    }
}

void viewNedit()
{
    char ini[10],txt[10]=".txt",crs1[20],crs2[20],crs3[20],crs4[20],time1[20],time2[20],time3[20],time4[20],sec1[10],sec2[10],sec3[10],sec4[10];
 int ID,n,n1,n2,n3,n4,sn;


    FILE *fpt=fopen(glob_file,"r");
 if(fpt==NULL)
    printf("\n\nError.No record exists.\n");
 else
  fscanf(fpt,"%s%d%s%s%s%s%s%s%s%s",ini,&ID,crs1,time1,crs2,time2,crs3,time3,crs4,time4);


    printf("\n\n1.%s",crs1); n1=op(crs1);
    printf("\n\n2.%s",crs2); n2=op(crs2);
    printf("\n\n3.%s",crs3); n3=op(crs3);
    printf("\n\n4.%s",crs4); n4=op(crs4);

                //to open the files,had to declare

    strcat(crs1,txt);
    strcpy(gcrs1,crs1);
    strcat(crs2,txt);
    strcpy(gcrs2,crs1);
    strcat(crs3,txt);
    strcpy(gcrs3,crs1);
    strcat(crs4,txt);
    strcpy(gcrs4,crs1);

    printf("\n\nEnter your choice to view :");
    scanf("%d",&n);
    printf("\n\n");

    if(n==1) sn=n1;
    if(n==2) sn=n2;
    if(n==3) sn=n3;
    if(n==4) sn=n4;

}

void schedule()
{
 char ini[10],crs1[20],crs2[20],crs3[20],crs4[20],time1[20],time2[20],time3[20],time4[20],sec1[10],sec2[10],sec3[10],sec4[10];
 int ID;


    FILE *fpt=fopen(glob_file,"r");
 if(fpt==NULL)
    printf("\n\nError.No record exists.\n");
 else
  fscanf(fpt,"%s%d%s%s%s%s%s%s%s%s",ini,&ID,crs1,time1,crs2,time2,crs3,time3,crs4,time4);
  printf("\n-----------------------------------\n");
  printf("Course.Section\t|\tTime\n");
  printf("-----------------------------------\n");
  printf("%s\t|\t%s\n%s\t|\t%s\n%s\t|\t%s\n%s\t|\t%s\n\n",crs1,time1,crs2,time2,crs3,time3,crs4,time4);
  printf("PRESS '0' FOR MENU\n");
  printf("PRESS '1' TO LOG OUT\n");
  int a;
  scanf("%d",&a);
  switch(a)
  {
  case 0: system("cls"); mainmenu(); break;
  case 1: log_out(); break;
  }



}


void MarkCalc()
{
    int i;
    char c;
    printf("\t\t\t");
    for(i=0;i<44;i++) printf("%c",236); //for some style
    printf("(  Mark Calculator  )");
    for(i=0;i<44;i++) printf("%c",236);

    float cw[10],sumcw=0,p=0,att=0,cp=0,scp=0,q[10],sumq=0,mid[3],smid=0,fin=0,pro=0,tot=0;
    int n1,n2,n3;

    printf("\n\nTotal lectures => 25\n");
    printf("Enter student attendance : ");
    scanf("%f",&att);
    p = ((att/25)*5);   //hold the total value of attendance
    printf("\n\n");

    printf("Total marks for each assignment => 10\n ");
    printf("Enter the number of assignment : ");
    scanf("%d",&n1);
    for( i=0 ; i<n1 ; i++)
    {
        printf("\nEnter the marks of assignment no.%d :",i+1);
        scanf("%f",&cw[i]);
        sumcw+=cw[i];
    }
    sumcw = sumcw/n1;
    sumcw = ((sumcw/10)*10);  //holds the total value of assignment marks
    printf("\n\n");

    printf("Total marks for class performance => 10\n ");
    printf("Enter the marks for class performance : ");
    scanf("%f",&cp);
    scp = ((cp/10)*5);
    printf("\n\n");

    printf("Total marks for each quiz => 30\n");
    printf("Enter the number of Quizzes : ");
    scanf("%d",&n2);
    for(i=0; i<n2 ; i++)
    {
        printf("\nEnter the marks of quiz no.%d :",i+1);
        scanf("%f",&q[i]);
        sumq+=q[i];
    }
    sumq = (sumq/n2);
    sumq = ((sumq/30)*15);  //holds the value of total quiz marks
    printf("\n\n");

    printf("Total marks for each MID => 40\n");
    printf("Enter the number of Mid terms : ");
    scanf("%d",&n3);
    for(i=0; i<n3 ; i++)
    {
        printf("\nEnter the marks of MID no.%d :",i+1);
        scanf("%f",&mid[i]);
        smid+=mid[i];
    }
    smid = (smid/n3);
    smid = ((smid/40)*20);  //holds the value of total quiz marks
    printf("\n\n");

    printf("Total marks for FINAL is => 50\n");
    printf("Enter the marks of final exam : ");
    scanf("%f",&fin);
    fin = ((fin/50)*30);
    printf("\n\n");


    printf("Total marks for PROJECT is => 20\n");
    printf("Enter the marks of PROJECT : ");
    scanf("%f",&pro);
    pro = ((pro/20)*15);
    printf("\n\n");


    tot=sumcw+p+scp+sumq+smid+fin+pro;

    printf("Total marks :%.2f",tot);

  printf("\n\n\t\t\t");
  for(i=0;i<59;i++) printf("%c",236); for(i=0;i<50;i++) printf("%c",236); //for some style
    printf("\nPRESS '0' FOR MENU\n");
  printf("PRESS '1' TO LOG OUT\n");
  int a;
  scanf("%d",&a);
  switch(a)
  {
  case 0:
    mainmenu();
    break;

  case 1:
    log_out();
    break;

}
}
void log_out()
{
    printf("\n\nLOGGED OUT\n\a\a\a\a\a\a");
    exit(1);
}

int op(char crs[])
{
 int n;

 if(strcmp("ENG103.1",crs)==0) n=1;
 if(strcmp("ENG103.2",crs)==0) n=2;
 if(strcmp("ENG103.3",crs)==0) n=3;
 if(strcmp("CSE115.1",crs)==0) n=4;
 if(strcmp("CSE115.2",crs)==0) n=5;
 if(strcmp("CSE115.3",crs)==0) n=6;
 if(strcmp("CSE115.1L",crs)==0) n=7;
 if(strcmp("CSE115.2L",crs)==0) n=8;
 if(strcmp("MAT116.3L",crs)==0) n=9;
 if(strcmp("MAT116.1",crs)==0) n=10;
 if(strcmp("MAT116.2",crs)==0) n=11;
 if(strcmp("MAT116.3",crs)==0) n=12;

 return n;
}

void color()
{
    system("COLOR F0");
    system("cls");       //'0' for BG which turns the terminal into black & '2' for word which turns them into green color
    welcome();
}

void welcome()
{
    int r,c;
    char ch=254;

    printf("\n\n");

    for( r=1 ; r<=5 ; r++ )
    {
        for( c=0 ; c<=100 ; c++ )
        {
            if(/* PATTERN W */ (r==5 &&(c==2 || c==3 || c==5 || c==6))||(r<5&&(c==1 || c==4 || c==7))||
               /* PATTERN E */ c==9||((r==1 || r==3 || r==5)&&(c==10 || c==11))||
               /* PATTERN L */ c==13||(r==5&&(c==14 || c==15))||
               /* PATTERN C */ c==17&&(r>=2 && r<=4)||((c>17 && c<=20 )&&(r==1 || r==5))||
               /* PATTERN O */ c==22&&(r>=2 && r<=4)||((c>22 && c<=25 )&&(r==1 || r==5)||c==26&&(r>=2 && r<=4))||
               /* PATTERN M */ (c==28||c==32)||(r==2&&(c==29||c==31))||(r>2 && c==30)||
               /* PATTERN E */ c==34||((r==1 || r==3 || r==5)&&(c==35 || c==36))
               )

                printf("%c",ch);
            else
                printf(" ");
        }
        printf("\n");

    }


        getch();
        system("cls");

}

struct RCSE1151
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}RC1151[15];
struct SCSE1151
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}SC1151[15];
struct ACSE1151
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}AC1151[15];
struct DCSE1151
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DC1151[15];
struct DmodifiedCSE1151
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DmodC1151[15];
struct MCSE1151
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}MCSE1151[15];
struct XCSE1151
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}XC1151[15],TmodC1151;

void RCSE1151_read();
void SCSE1151_search();
void ACSE1151_add();
void DCSE1151_delete ();
void MCSE1151_marks();
void XCSE1151_sort();
void CSE1151();


void CSE1151()
{
    int i,j;

    for(j=0;j<40;j++) printf("%c",249); printf("CSE 115 Section:01"); for(j=0;j<40;j++) printf("%c",249); printf("\n");

    RCSE1151_read ();
    printf("\n\n");
    printf("1. Search.\n");
    printf("2. Sort list.\n");
    printf("3. Edit marks.\n");
    printf("4. Add student.\n");
    printf("5. Remove student.\n");
    printf("6. Go Back.\n");
    printf("7. Main Menu.\n");
    printf("8. Log-out.\n");

    printf("Enter your choice: ");
    scanf("%d",&i);
    switch (i)
    {
    case 1: SCSE1151_search(); break;
    case 2: XCSE1151_sort(); break;
    case 3: MCSE1151_marks(); break;
    case 4: ACSE1151_add(); break;
    case 5: DCSE1151_delete (); break;
    case 6: viewNedit(); break;
    case 7: mainmenu(); break;
    case 8: log_out(); break;
    }
}

void RCSE1151_read ()
{
    int i;

    FILE *fp;

    fp=fopen ("Cse115.1.txt","r");


    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&RC1151[i],sizeof(struct RCSE1151),1,fp);
        if (RC1151[i].roll!=0)
        printf("\n%3d|%30s|%7d|%10d|%10d",RC1151[i].roll,RC1151[i].name,RC1151[i].id,RC1151[i].attend,RC1151[i].marks);

    }

    fclose(fp);
}

void MCSE1151_marks()
{
    int i,search;
int roll;
    char name[30];
    int id;
    int attend;
    int marks;
    FILE *fp;
    printf("Enter roll number: ");
    scanf("%d",&search);

    fp=fopen ("Cse115.1.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&MCSE1151[i],sizeof(struct MCSE1151),1,fp);
    }
    fclose(fp);

    for (i=0;i<15;i++)
    {
        if (MCSE1151[i].roll==search)
        {
            printf("Enter new mark: ");
            scanf("%d",&MCSE1151[i].marks);
        }
    }

    fp=fopen("Cse115.1.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&MCSE1151[i],sizeof(struct MCSE1151),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed.");
    printf("\n");
    CSE1151();
}

void SCSE1151_search()
{
    int i,search;
    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Cse115.1.txt","r");

    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&SC1151[i],sizeof(struct SCSE1151),1,fp);
        if (search==SC1151[i].id)
        {
        printf("\n%3d|%30s|%7d|%10d|%10d",SC1151[i].roll,SC1151[i].name,SC1151[i].id,SC1151[i].attend,SC1151[i].marks);
        }

    }
    fclose(fp);
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1151();
}

void ACSE1151_add()
{
    int i,search,flag=0;

    FILE *fp;
    fp=fopen("Cse115.1.txt","r");
    for (i=0;i<15;i++)
    {
        fread(&AC1151[i],sizeof(struct ACSE1151),1,fp);
    }
    fclose(fp);
    fp=fopen ("Cse115.1.txt","w");

    for (i=0;i<15;i++)
    {
    if (AC1151[i].roll==0)
    {
        printf("Enter roll number: ");
        scanf("%d",&AC1151[i].roll);
        fflush(stdin);

        printf("Enter name: ");
        gets(AC1151[i].name);
        fflush(stdin);

        printf("Enter id: ");
        scanf("%d",&AC1151[i].id);
        fflush(stdin);

        printf("Enter attendence: ");
        scanf("%d",&AC1151[i].attend);
        fflush(stdin);

        printf("Enter marks: ");
        scanf("%d",&AC1151[i].marks);
        fflush(stdin);

        break;

    }


    }
    for (i=0;i<15;i++)
    fwrite(&AC1151[i],sizeof(struct ACSE1151),1,fp);

    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    getch();
    CSE1151();

}

void DCSE1151_delete ()
{
    int i,search,flag=0;

    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Cse115.1.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&DC1151[i],sizeof(struct DCSE1151),1,fp);
    }
    fclose(fp);
    fp=fopen("Cse115.1.txt","w");
    for (i=0;i<15;i++)
    {
        if (search==DC1151[i].id)
        {
            flag=1;
        }
        if (flag==0)
        {
            printf("-");
            DmodC1151[i].roll=DC1151[i].roll;
            strcpy(DmodC1151[i].name,DC1151[i].name);
            DmodC1151[i].id=DC1151[i].id;
            DmodC1151[i].attend=DC1151[i].attend;
            DmodC1151[i].marks=DC1151[i].marks;
            fwrite(&DmodC1151[i],sizeof(struct DmodifiedCSE1151),1,fp);
        }
        if (flag==1)
        {
            printf("+");
            DmodC1151[i].roll=DC1151[i+1].roll;
            strcpy(DmodC1151[i].name,DC1151[i+1].name);
            DmodC1151[i].id=DC1151[i+1].id;
            DmodC1151[i].attend=DC1151[i+1].attend;
            DmodC1151[i].marks=DC1151[i+1].marks;
            fwrite(&DmodC1151[i],sizeof(struct DmodifiedCSE1151),1,fp);
        }
    }
    fclose(fp);
    printf("Deleted Successfully");
    printf("\n");
    getch();
    CSE1151();
}

void XCSE1151_sort()
{
    int i,j,search;

    FILE *fp;

    fp=fopen ("Cse115.1.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&XC1151[i],sizeof(struct XCSE1151),1,fp);
    }
    fclose(fp);

    for (i=0;i<15-1;i++)
    {
        for(j=0;j<15-i-1;j++)
        {
            if (XC1151[j].roll>XC1151[j+1].roll )
            {
                printf(".");
                TmodC1151=XC1151[j];
                XC1151[j]=XC1151[j+1];
                XC1151[j+1]=TmodC1151;
            }
        }
    }
    fp=fopen("Cse115.1.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&XC1151[i],sizeof(struct XCSE1151),1,fp);
    }
    fclose(fp);
    printf("Sorted Successfully.");
    printf("\n");
    getch();
    CSE1151();
}

void main()
{
    int option;

    printf("\t|-------------------------------------------------------------------------------------------------|\n");
    printf("\t|\t\t\t\t\t\t\t\t\t\t\t\t  |\n");
    printf("\t|\t\t\t\t\t 1. Sign-up \t\t\t\t\t\t  |\n");
    printf("\t|\t\t\t\t\t\t\t\t\t\t\t\t  |\n");
    printf("\t|\t\t\t\t\t 2. Log-in \t\t\t\t\t\t  |\n");
    printf("\t|\t\t\t\t\t\t\t\t\t\t\t\t  |\n");
    printf("\t|----------------------------( Press 1 to Sign-up and 2 to Sign-in )------------------------------|\n");
    scanf("%d",&option);
    fflush(stdin);
    system("cls");

    switch(option)
        {
        case 1:
            sign_up();
            break;
        case 2:
            log_in();
            break;

        }

}
