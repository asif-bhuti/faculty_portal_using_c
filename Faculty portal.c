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
for(i=1; i<=4 ; i++)
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

    switch(sn)
    {
    case 1: ENG1031(); break;
    case 2: ENG1032(); break;
    case 3: ENG1033(); break;
    case 4: CSE1151(); break;
    case 5: CSE1152(); break;
    case 6: CSE1153(); break;
    case 7: CSE1151L(); break;
    case 8: CSE1152L(); break;
    case 9: CSE1153L(); break;
    case 10: MAT1161(); break;
    case 11: MAT1162(); break;
    case 12: MAT1163(); break;
    }
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
struct RCSE1151L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}RC1151L[15];
struct SCSE1151L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}SC1151L[15];
struct ACSE1151L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}AC1151L[15];
struct DCSE1151L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DC1151L[15];
struct DmodifiedCSE1151L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DmodC1151L[15];
struct MCSE1151L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}MCSE1151L[15];
struct XCSE1151L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}XC1151L[15],TmodC1151L;

void RCSE1151L_read();
void SCSE1151L_search();
void ACSE1151L_add();
void DCSE1151L_delete ();
void MCSE1151L_marks();
void XCSE1151L_sort();
void CSE1151L();


void CSE1151L()
{
    int i;
    int j;
    for(j=0;j<40;j++) printf("%c",249); printf("CSE 115L Section:01"); for(j=0;j<40;j++) printf("%c",249); printf("\n");
    RCSE1151L_read ();
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
    case 1: SCSE1151L_search(); break;
    case 2: XCSE1151L_sort(); break;
    case 3: MCSE1151L_marks(); break;
    case 4: ACSE1151L_add(); break;
    case 5: DCSE1151L_delete (); break;
     case 6: viewNedit(); break;
    case 7: mainmenu(); break;
    case 8: log_out(); break;

    }
}

void RCSE1151L_read ()
{
    int i;

    FILE *fp;

    fp=fopen ("Cse115L.1.txt","r");


    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&RC1151L[i],sizeof(struct RCSE1151L),1,fp);
        if (RC1151L[i].roll!=0)
        printf("\n%3d|%30s|%7d|%10d|%10d",RC1151L[i].roll,RC1151L[i].name,RC1151L[i].id,RC1151L[i].attend,RC1151L[i].marks);

    }
    printf("\n");

    fclose(fp);
}

void MCSE1151L_marks()
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

    fp=fopen ("Cse115L.1.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&MCSE1151L[i],sizeof(struct MCSE1151L),1,fp);
    }
    fclose(fp);

    for (i=0;i<15;i++)
    {
        if (MCSE1151L[i].roll==search)
        {
            printf("Enter new mark: ");
            scanf("%d",&MCSE1151L[i].marks);
        }
    }

    fp=fopen("Cse115L.1.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&MCSE1151L[i],sizeof(struct MCSE1151L),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed.");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1151L();
}

void SCSE1151L_search()
{
    int i,search;
    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Cse115L.1.txt","r");

    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&SC1151L[i],sizeof(struct SCSE1151L),1,fp);
        if (search==SC1151L[i].id)
        {
        printf("\n%3d|%30s|%7d|%10d|%10d",SC1151L[i].roll,SC1151L[i].name,SC1151L[i].id,SC1151L[i].attend,SC1151L[i].marks);
        }

    }
    fclose(fp);
    printf("\n\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1151L();
}

void ACSE1151L_add()
{
    int i,search,flag=0;

    FILE *fp;
    fp=fopen("Cse115L.1.txt","r");
    for (i=0;i<15;i++)
    {
        fread(&AC1151L[i],sizeof(struct ACSE1151L),1,fp);
    }
    fclose(fp);
    fp=fopen ("Cse115L.1.txt","w");

    for (i=0;i<15;i++)
    {
    if (AC1151L[i].roll==0)
    {
        printf("Enter roll number: ");
        scanf("%d",&AC1151L[i].roll);
        fflush(stdin);

        printf("Enter name: ");
        gets(AC1151L[i].name);
        fflush(stdin);

        printf("Enter id: ");
        scanf("%d",&AC1151L[i].id);
        fflush(stdin);

        printf("Enter attendence: ");
        scanf("%d",&AC1151L[i].attend);
        fflush(stdin);

        printf("Enter marks: ");
        scanf("%d",&AC1151L[i].marks);
        fflush(stdin);

        break;

    }


    }
    for (i=0;i<15;i++)
    fwrite(&AC1151L[i],sizeof(struct ACSE1151L),1,fp);

    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    getch();
    CSE1151L();

}

void DCSE1151L_delete ()
{
    int i,search,flag=0;

    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Cse115L.1.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&DC1151L[i],sizeof(struct DCSE1151L),1,fp);
    }
    fclose(fp);
    fp=fopen("Cse115L.1.txt","w");
    for (i=0;i<15;i++)
    {
        if (search==DC1151L[i].id)
        {
            flag=1;
        }
        if (flag==0)
        {
            printf("-");
            DmodC1151L[i].roll=DC1151L[i].roll;
            strcpy(DmodC1151L[i].name,DC1151L[i].name);
            DmodC1151L[i].id=DC1151L[i].id;
            DmodC1151L[i].attend=DC1151L[i].attend;
            DmodC1151L[i].marks=DC1151L[i].marks;
            fwrite(&DmodC1151L[i],sizeof(struct DmodifiedCSE1151L),1,fp);
        }
        if (flag==1)
        {
            printf("+");
            DmodC1151L[i].roll=DC1151L[i+1].roll;
            strcpy(DmodC1151L[i].name,DC1151L[i+1].name);
            DmodC1151L[i].id=DC1151L[i+1].id;
            DmodC1151L[i].attend=DC1151L[i+1].attend;
            DmodC1151L[i].marks=DC1151L[i+1].marks;
            fwrite(&DmodC1151L[i],sizeof(struct DmodifiedCSE1151L),1,fp);
        }
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1151L();
}

void XCSE1151L_sort()
{
    int i,j,search;

    FILE *fp;

    fp=fopen ("Cse115L.1.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&XC1151L[i],sizeof(struct XCSE1151L),1,fp);
    }
    fclose(fp);

    for (i=0;i<15-1;i++)
    {
        for(j=0;j<15-i-1;j++)
        {
            if (XC1151L[j].roll>XC1151L[j+1].roll )
            {
                printf(".");
                TmodC1151L=XC1151L[j];
                XC1151L[j]=XC1151L[j+1];
                XC1151L[j+1]=TmodC1151L;
            }
        }
    }
    fp=fopen("Cse115L.1.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&XC1151L[i],sizeof(struct XCSE1151L),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1151L();
}
struct RCSE1152
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}RC1152[15];
struct SCSE1152
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}SC1152[15];
struct ACSE1152
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}AC1152[15];
struct DCSE1152
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DC1152[15];
struct DmodifiedCSE1152
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DmodC1152[15];
struct MCSE1152
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}MCSE1152[15];
struct XCSE1152
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}XC1152[15],TmodC1152;

void RCSE1152_read();
void SCSE1152_search();
void ACSE1152_add();
void DCSE1152_delete ();
void MCSE1152_marks();
void XCSE1152_sort();
void CSE1152();

void CSE1152()
{
    int i;
    int j;
    for(j=0;j<40;j++) printf("%c",249); printf("CSE 115 Section:02"); for(j=0;j<40;j++) printf("%c",249); printf("\n");
    RCSE1152_read ();
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
    case 1: SCSE1152_search(); break;
    case 2: XCSE1152_sort(); break;
    case 3: MCSE1152_marks(); break;
    case 4: ACSE1152_add(); break;
    case 5: DCSE1152_delete (); break;
    case 6: viewNedit(); break;
    case 7: mainmenu(); break;
    case 8: log_out(); break;

    }
}

void RCSE1152_read ()
{
    int i;

    FILE *fp;

    fp=fopen ("Cse115.2.txt","r");


    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&RC1152[i],sizeof(struct RCSE1152),1,fp);
        if (RC1152[i].roll!=0)
        printf("\n%3d|%30s|%7d|%10d|%10d",RC1152[i].roll,RC1152[i].name,RC1152[i].id,RC1152[i].attend,RC1152[i].marks);

    }

    fclose(fp);
}

void MCSE1152_marks()
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

    fp=fopen ("Cse115.2.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&MCSE1152[i],sizeof(struct MCSE1152),1,fp);
    }
    fclose(fp);

    for (i=0;i<15;i++)
    {
        if (MCSE1152[i].roll==search)
        {
            printf("Enter new mark: ");
            scanf("%d",&MCSE1152[i].marks);
        }
    }

    fp=fopen("Cse115.2.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&MCSE1152[i],sizeof(struct MCSE1152),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed.");
    printf("\n");
    printf("\nPress any key to go back.\n");

    getch();
    system("cls");
    CSE1152();
}

void SCSE1152_search()
{
    int i,search;
    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Cse115.2.txt","r");

    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&SC1152[i],sizeof(struct SCSE1152),1,fp);
        if (search==SC1152[i].id)
        {
        printf("\n%3d|%30s|%7d|%10d|%10d",SC1152[i].roll,SC1152[i].name,SC1152[i].id,SC1152[i].attend,SC1152[i].marks);
        }

    }
    fclose(fp);
    printf("\n");
    getch();
    CSE1152();
}

void ACSE1152_add()
{
    int i,search,flag=0;

    FILE *fp;
    fp=fopen("Cse115.2.txt","r");
    for (i=0;i<15;i++)
    {
        fread(&AC1152[i],sizeof(struct ACSE1152),1,fp);
    }
    fclose(fp);
    fp=fopen ("Cse115.2.txt","w");

    for (i=0;i<15;i++)
    {
    if (AC1152[i].roll==0)
    {
        printf("Enter roll number: ");
        scanf("%d",&AC1152[i].roll);
        fflush(stdin);

        printf("Enter name: ");
        gets(AC1152[i].name);
        fflush(stdin);

        printf("Enter id: ");
        scanf("%d",&AC1152[i].id);
        fflush(stdin);

        printf("Enter attendence: ");
        scanf("%d",&AC1152[i].attend);
        fflush(stdin);

        printf("Enter marks: ");
        scanf("%d",&AC1152[i].marks);
        fflush(stdin);

        break;

    }


    }
    for (i=0;i<15;i++)
    fwrite(&AC1152[i],sizeof(struct ACSE1152),1,fp);

    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1152();

}

void DCSE1152_delete ()
{
    int i,search,flag=0;

    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Cse115.2.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&DC1152[i],sizeof(struct DCSE1152),1,fp);
    }
    fclose(fp);
    fp=fopen("Cse115.2.txt","w");
    for (i=0;i<15;i++)
    {
        if (search==DC1152[i].id)
        {
            flag=1;
        }
        if (flag==0)
        {
            printf("-");
            DmodC1152[i].roll=DC1152[i].roll;
            strcpy(DmodC1152[i].name,DC1152[i].name);
            DmodC1152[i].id=DC1152[i].id;
            DmodC1152[i].attend=DC1152[i].attend;
            DmodC1152[i].marks=DC1152[i].marks;
            fwrite(&DmodC1152[i],sizeof(struct DmodifiedCSE1152),1,fp);
        }
        if (flag==1)
        {
            printf("+");
            DmodC1152[i].roll=DC1152[i+1].roll;
            strcpy(DmodC1152[i].name,DC1152[i+1].name);
            DmodC1152[i].id=DC1152[i+1].id;
            DmodC1152[i].attend=DC1152[i+1].attend;
            DmodC1152[i].marks=DC1152[i+1].marks;
            fwrite(&DmodC1152[i],sizeof(struct DmodifiedCSE1152),1,fp);
        }
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1152();
}

void XCSE1152_sort()
{
    int i,j,search;

    FILE *fp;

    fp=fopen ("Cse115.2.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&XC1152[i],sizeof(struct XCSE1152),1,fp);
    }
    fclose(fp);

    for (i=0;i<15-1;i++)
    {
        for(j=0;j<15-i-1;j++)
        {
            if (XC1152[j].roll>XC1152[j+1].roll )
            {
                printf(".");
                TmodC1152=XC1152[j];
                XC1152[j]=XC1152[j+1];
                XC1152[j+1]=TmodC1152;
            }
        }
    }
    fp=fopen("Cse115.2.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&XC1152[i],sizeof(struct XCSE1152),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1152();
}
struct RCSE1152L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}RC1152L[15];
struct SCSE1152L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}SC1152L[15];
struct ACSE1152L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}AC1152L[15];
struct DCSE1152L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DC1152L[15];
struct DmodifiedCSE1152L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DmodC1152L[15];
struct MCSE1152L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}MCSE1152L[15];
struct XCSE1152L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}XC1152L[15],TmodC1152L;

void RCSE1152L_read();
void SCSE1152L_search();
void ACSE1152L_add();
void DCSE1152L_delete ();
void MCSE1152L_marks();
void XCSE1152L_sort();
void CSE1152L();


void CSE1152L()
{
    int i;
    int j;
    for(j=0;j<40;j++) printf("%c",249); printf("CSE 115L Section:02"); for(j=0;j<40;j++) printf("%c",249); printf("\n");
    RCSE1152L_read ();
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
    case 1: SCSE1152L_search(); break;
    case 2: XCSE1152L_sort(); break;
    case 3: MCSE1152L_marks(); break;
    case 4: ACSE1152L_add(); break;
    case 5: DCSE1152L_delete (); break;
    case 6: viewNedit(); break;
    case 7: mainmenu(); break;
    case 8: log_out(); break;

    }
}

void RCSE1152L_read ()
{
    int i;

    FILE *fp;

    fp=fopen ("Cse1152L.txt","r");


    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&RC1152L[i],sizeof(struct RCSE1152L),1,fp);
        if (RC1152L[i].roll!=0)
        printf("\n%3d|%30s|%7d|%10d|%10d",RC1152L[i].roll,RC1152L[i].name,RC1152L[i].id,RC1152L[i].attend,RC1152L[i].marks);

    }

    fclose(fp);
}

void MCSE1152L_marks()
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

    fp=fopen ("Cse1152L.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&MCSE1152L[i],sizeof(struct MCSE1152L),1,fp);
    }
    fclose(fp);

    for (i=0;i<15;i++)
    {
        if (MCSE1152L[i].roll==search)
        {
            printf("Enter new mark: ");
            scanf("%d",&MCSE1152L[i].marks);
        }
    }

    fp=fopen("Cse1152L.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&MCSE1152L[i],sizeof(struct MCSE1152L),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed.");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1152L();
}

void SCSE1152L_search()
{
    int i,search;
    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Cse1152L.txt","r");

    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&SC1152L[i],sizeof(struct SCSE1152L),1,fp);
        if (search==SC1152L[i].id)
        {
        printf("\n%3d|%30s|%7d|%10d|%10d",SC1152L[i].roll,SC1152L[i].name,SC1152L[i].id,SC1152L[i].attend,SC1152L[i].marks);
        }

    }
    fclose(fp);
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1152L();
}

void ACSE1152L_add()
{
    int i,search,flag=0;

    FILE *fp;
    fp=fopen("Cse1152L.txt","r");
    for (i=0;i<15;i++)
    {
        fread(&AC1152L[i],sizeof(struct ACSE1152L),1,fp);
    }
    fclose(fp);
    fp=fopen ("Cse1152L.txt","w");

    for (i=0;i<15;i++)
    {
    if (AC1152L[i].roll==0)
    {
        printf("Enter roll number: ");
        scanf("%d",&AC1152L[i].roll);
        fflush(stdin);

        printf("Enter name: ");
        gets(AC1152L[i].name);
        fflush(stdin);

        printf("Enter id: ");
        scanf("%d",&AC1152L[i].id);
        fflush(stdin);

        printf("Enter attendence: ");
        scanf("%d",&AC1152L[i].attend);
        fflush(stdin);

        printf("Enter marks: ");
        scanf("%d",&AC1152L[i].marks);
        fflush(stdin);

        break;

    }


    }
    for (i=0;i<15;i++)
    fwrite(&AC1152L[i],sizeof(struct ACSE1152L),1,fp);

    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1152L();

}

void DCSE1152L_delete ()
{
    int i,search,flag=0;

    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Cse1152L.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&DC1152L[i],sizeof(struct DCSE1152L),1,fp);
    }
    fclose(fp);
    fp=fopen("Cse1152L.txt","w");
    for (i=0;i<15;i++)
    {
        if (search==DC1152L[i].id)
        {
            flag=1;
        }
        if (flag==0)
        {
            printf("-");
            DmodC1152L[i].roll=DC1152L[i].roll;
            strcpy(DmodC1152L[i].name,DC1152L[i].name);
            DmodC1152L[i].id=DC1152L[i].id;
            DmodC1152L[i].attend=DC1152L[i].attend;
            DmodC1152L[i].marks=DC1152L[i].marks;
            fwrite(&DmodC1152L[i],sizeof(struct DmodifiedCSE1152L),1,fp);
        }
        if (flag==1)
        {
            printf("+");
            DmodC1152L[i].roll=DC1152L[i+1].roll;
            strcpy(DmodC1152L[i].name,DC1152L[i+1].name);
            DmodC1152L[i].id=DC1152L[i+1].id;
            DmodC1152L[i].attend=DC1152L[i+1].attend;
            DmodC1152L[i].marks=DC1152L[i+1].marks;
            fwrite(&DmodC1152L[i],sizeof(struct DmodifiedCSE1152L),1,fp);
        }
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1152L();
}

void XCSE1152L_sort()
{
    int i,j,search;

    FILE *fp;

    fp=fopen ("Cse1152L.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&XC1152L[i],sizeof(struct XCSE1152L),1,fp);
    }
    fclose(fp);

    for (i=0;i<15-1;i++)
    {
        for(j=0;j<15-i-1;j++)
        {
            if (XC1152L[j].roll>XC1152L[j+1].roll )
            {
                printf(".");
                TmodC1152L=XC1152L[j];
                XC1152L[j]=XC1152L[j+1];
                XC1152L[j+1]=TmodC1152L;
            }
        }
    }
    fp=fopen("Cse1152L.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&XC1152L[i],sizeof(struct XCSE1152L),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1152L();
}
struct RCSE1153
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}RC1153[15];
struct SCSE1153
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}SC1153[15];
struct ACSE1153
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}AC1153[15];
struct DCSE1153
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DC1153[15];
struct DmodifiedCSE1153
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DmodC1153[15];
struct MCSE1153
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}MCSE1153[15];
struct XCSE1153
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}XC1153[15],TmodC1153;

void RCSE1153_read();
void SCSE1153_search();
void ACSE1153_add();
void DCSE1153_delete ();
void MCSE1153_marks();
void XCSE1153_sort();
void CSE1153();



void CSE1153()
{
    int i;
    int j;
    for(j=0;j<40;j++) printf("%c",249); printf("CSE 115 Section:03"); for(j=0;j<40;j++) printf("%c",249); printf("\n");
    RCSE1153_read ();
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
    case 1: SCSE1153_search(); break;
    case 2: XCSE1153_sort(); break;
    case 3: MCSE1153_marks(); break;
    case 4: ACSE1153_add(); break;
    case 5: DCSE1153_delete (); break;
    case 6: viewNedit(); break;
    case 7: mainmenu(); break;
    case 8: log_out(); break;

    }
}

void RCSE1153_read ()
{
    int i;

    FILE *fp;

    fp=fopen ("Cse115.3.txt","r");


    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&RC1153[i],sizeof(struct RCSE1153),1,fp);
        if (RC1153[i].roll!=0)
        printf("\n%3d|%30s|%7d|%10d|%10d",RC1153[i].roll,RC1153[i].name,RC1153[i].id,RC1153[i].attend,RC1153[i].marks);

    }

    fclose(fp);
}

void MCSE1153_marks()
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

    fp=fopen ("Cse115.3.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&MCSE1153[i],sizeof(struct MCSE1153),1,fp);
    }
    fclose(fp);

    for (i=0;i<15;i++)
    {
        if (MCSE1153[i].roll==search)
        {
            printf("Enter new mark: ");
            scanf("%d",&MCSE1153[i].marks);
        }
    }

    fp=fopen("Cse115.3.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&MCSE1153[i],sizeof(struct MCSE1153),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed.");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1153();
}

void SCSE1153_search()
{
    int i,search;
    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Cse115.3.txt","r");

    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&SC1153[i],sizeof(struct SCSE1153),1,fp);
        if (search==SC1153[i].id)
        {
        printf("\n%3d|%30s|%7d|%10d|%10d",SC1153[i].roll,SC1153[i].name,SC1153[i].id,SC1153[i].attend,SC1153[i].marks);
        }

    }
    fclose(fp);
    printf("\n");
    getch();
    CSE1153();
}

void ACSE1153_add()
{
    int i,search,flag=0;

    FILE *fp;
    fp=fopen("Cse115.3.txt","r");
    for (i=0;i<15;i++)
    {
        fread(&AC1153[i],sizeof(struct ACSE1153),1,fp);
    }
    fclose(fp);
    fp=fopen ("Cse115.3.txt","w");

    for (i=0;i<15;i++)
    {
    if (AC1153[i].roll==0)
    {
        printf("Enter roll number: ");
        scanf("%d",&AC1153[i].roll);
        fflush(stdin);

        printf("Enter name: ");
        gets(AC1153[i].name);
        fflush(stdin);

        printf("Enter id: ");
        scanf("%d",&AC1153[i].id);
        fflush(stdin);

        printf("Enter attendence: ");
        scanf("%d",&AC1153[i].attend);
        fflush(stdin);

        printf("Enter marks: ");
        scanf("%d",&AC1153[i].marks);
        fflush(stdin);

        break;

    }


    }
    for (i=0;i<15;i++)
    fwrite(&AC1153[i],sizeof(struct ACSE1153),1,fp);

    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1153();

}

void DCSE1153_delete ()
{
    int i,search,flag=0;

    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Cse115.3.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&DC1153[i],sizeof(struct DCSE1153),1,fp);
    }
    fclose(fp);
    fp=fopen("Cse115.3.txt","w");
    for (i=0;i<15;i++)
    {
        if (search==DC1153[i].id)
        {
            flag=1;
        }
        if (flag==0)
        {
            printf("-");
            DmodC1153[i].roll=DC1153[i].roll;
            strcpy(DmodC1153[i].name,DC1153[i].name);
            DmodC1153[i].id=DC1153[i].id;
            DmodC1153[i].attend=DC1153[i].attend;
            DmodC1153[i].marks=DC1153[i].marks;
            fwrite(&DmodC1153[i],sizeof(struct DmodifiedCSE1153),1,fp);
        }
        if (flag==1)
        {
            printf("+");
            DmodC1153[i].roll=DC1153[i+1].roll;
            strcpy(DmodC1153[i].name,DC1153[i+1].name);
            DmodC1153[i].id=DC1153[i+1].id;
            DmodC1153[i].attend=DC1153[i+1].attend;
            DmodC1153[i].marks=DC1153[i+1].marks;
            fwrite(&DmodC1153[i],sizeof(struct DmodifiedCSE1153),1,fp);
        }
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1153();
}

void XCSE1153_sort()
{
    int i,j,search;

    FILE *fp;

    fp=fopen ("Cse115.3.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&XC1153[i],sizeof(struct XCSE1153),1,fp);
    }
    fclose(fp);

    for (i=0;i<15-1;i++)
    {
        for(j=0;j<15-i-1;j++)
        {
            if (XC1153[j].roll>XC1153[j+1].roll )
            {
                printf(".");
                TmodC1153=XC1153[j];
                XC1153[j]=XC1153[j+1];
                XC1153[j+1]=TmodC1153;
            }
        }
    }
    fp=fopen("Cse115.3.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&XC1153[i],sizeof(struct XCSE1153),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1153();
}
struct RCSE1153L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}RC1153L[15];
struct SCSE1153L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}SC1153L[15];
struct ACSE1153L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}AC1153L[15];
struct DCSE1153L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DC1153L[15];
struct DmodifiedCSE1153L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DmodC1153L[15];
struct MCSE1153L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}MCSE1153L[15];
struct XCSE1153L
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}XC1153L[15],TmodC1153L;

void RCSE1153L_read();
void SCSE1153L_search();
void ACSE1153L_add();
void DCSE1153L_delete ();
void MCSE1153L_marks();
void XCSE1153L_sort();
void CSE1153L();




void CSE1153L()
{
    int i;
    int j;
    for(j=0;j<40;j++) printf("%c",249); printf("CSE 115L Section:03"); for(j=0;j<40;j++) printf("%c",249); printf("\n");
    RCSE1153L_read ();
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
    case 1: SCSE1153L_search(); break;
    case 2: XCSE1153L_sort(); break;
    case 3: MCSE1153L_marks(); break;
    case 4: ACSE1153L_add(); break;
    case 5: DCSE1153L_delete (); break;
    case 6: viewNedit(); break;
    case 7: mainmenu(); break;
    case 8: log_out(); break;

    }
}

void RCSE1153L_read ()
{
    int i;

    FILE *fp;

    fp=fopen ("Cse115L.3.txt","r");


    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&RC1153L[i],sizeof(struct RCSE1153L),1,fp);
        if (RC1153L[i].roll!=0)
        printf("\n%3d|%30s|%7d|%10d|%10d",RC1153L[i].roll,RC1153L[i].name,RC1153L[i].id,RC1153L[i].attend,RC1153L[i].marks);

    }

    fclose(fp);
}

void MCSE1153L_marks()
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

    fp=fopen ("Cse115L.3.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&MCSE1153L[i],sizeof(struct MCSE1153L),1,fp);
    }
    fclose(fp);

    for (i=0;i<15;i++)
    {
        if (MCSE1153L[i].roll==search)
        {
            printf("Enter new mark: ");
            scanf("%d",&MCSE1153L[i].marks);
        }
    }

    fp=fopen("Cse115L.3.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&MCSE1153L[i],sizeof(struct MCSE1153L),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed.");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1153L();
}

void SCSE1153L_search()
{
    int i,search;
    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Cse115L.3.txt","r");

    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&SC1153L[i],sizeof(struct SCSE1153L),1,fp);
        if (search==SC1153L[i].id)
        {
        printf("\n%3d|%30s|%7d|%10d|%10d",SC1153L[i].roll,SC1153L[i].name,SC1153L[i].id,SC1153L[i].attend,SC1153L[i].marks);
        }

    }
    fclose(fp);
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1153L();
}

void ACSE1153L_add()
{
    int i,search,flag=0;

    FILE *fp;
    fp=fopen("Cse115L.3.txt","r");
    for (i=0;i<15;i++)
    {
        fread(&AC1153L[i],sizeof(struct ACSE1153L),1,fp);
    }
    fclose(fp);
    fp=fopen ("Cse115L.3.txt","w");

    for (i=0;i<15;i++)
    {
    if (AC1153L[i].roll==0)
    {
        printf("Enter roll number: ");
        scanf("%d",&AC1153L[i].roll);
        fflush(stdin);

        printf("Enter name: ");
        gets(AC1153L[i].name);
        fflush(stdin);

        printf("Enter id: ");
        scanf("%d",&AC1153L[i].id);
        fflush(stdin);

        printf("Enter attendence: ");
        scanf("%d",&AC1153L[i].attend);
        fflush(stdin);

        printf("Enter marks: ");
        scanf("%d",&AC1153L[i].marks);
        fflush(stdin);

        break;

    }


    }
    for (i=0;i<15;i++)
    fwrite(&AC1153L[i],sizeof(struct ACSE1153L),1,fp);

    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1153L();

}

void DCSE1153L_delete ()
{
    int i,search,flag=0;

    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Cse115L.3.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&DC1153L[i],sizeof(struct DCSE1153L),1,fp);
    }
    fclose(fp);
    fp=fopen("Cse115L.3.txt","w");
    for (i=0;i<15;i++)
    {
        if (search==DC1153L[i].id)
        {
            flag=1;
        }
        if (flag==0)
        {
            printf("-");
            DmodC1153L[i].roll=DC1153L[i].roll;
            strcpy(DmodC1153L[i].name,DC1153L[i].name);
            DmodC1153L[i].id=DC1153L[i].id;
            DmodC1153L[i].attend=DC1153L[i].attend;
            DmodC1153L[i].marks=DC1153L[i].marks;
            fwrite(&DmodC1153L[i],sizeof(struct DmodifiedCSE1153L),1,fp);
        }
        if (flag==1)
        {
            printf("+");
            DmodC1153L[i].roll=DC1153L[i+1].roll;
            strcpy(DmodC1153L[i].name,DC1153L[i+1].name);
            DmodC1153L[i].id=DC1153L[i+1].id;
            DmodC1153L[i].attend=DC1153L[i+1].attend;
            DmodC1153L[i].marks=DC1153L[i+1].marks;
            fwrite(&DmodC1153L[i],sizeof(struct DmodifiedCSE1153L),1,fp);
        }
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1153L();
}

void XCSE1153L_sort()
{
    int i,j,search;

    FILE *fp;

    fp=fopen ("Cse115L.3.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&XC1153L[i],sizeof(struct XCSE1153L),1,fp);
    }
    fclose(fp);

    for (i=0;i<15-1;i++)
    {
        for(j=0;j<15-i-1;j++)
        {
            if (XC1153L[j].roll>XC1153L[j+1].roll )
            {
                printf(".");
                TmodC1153L=XC1153L[j];
                XC1153L[j]=XC1153L[j+1];
                XC1153L[j+1]=TmodC1153L;
            }
        }
    }
    fp=fopen("Cse115L.3.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&XC1153L[i],sizeof(struct XCSE1153L),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    CSE1153L();
}
struct RENG1031
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}RE1031[15];
struct SENG1031
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}SE1031[15];
struct AENG1031
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}AE1031[15];
struct DENG1031
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DE1031[15];
struct DmodifiedENG1031
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DmodE1031[15];
struct MENG1031
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}MENG1031[15];
struct XENG1031
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}XE1031[15],TmodE1031;

void RENG1031_read();
void SENG1031_search();
void AENG1031_add();
void DENG1031_delete ();
void MENG1031_marks();
void XENG1031_sort();
void ENG1031();



void ENG1031()
{
    int i;
    int j;
    for(j=0;j<40;j++) printf("%c",249); printf("ENG 103 Section:01"); for(j=0;j<40;j++) printf("%c",249); printf("\n");
    RENG1031_read ();
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
    case 1: SENG1031_search(); break;
    case 2: XENG1031_sort(); break;
    case 3: MENG1031_marks(); break;
    case 4: AENG1031_add(); break;
    case 5: DENG1031_delete (); break;
    case 6: viewNedit(); break;
    case 7: mainmenu(); break;
    case 8: log_out(); break;

    }
}

void RENG1031_read ()
{
    int i;

    FILE *fp;

    fp=fopen ("Eng103.1.txt","r");


    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&RE1031[i],sizeof(struct RENG1031),1,fp);
        if (RE1031[i].roll!=0)
        printf("\n%3d|%30s|%7d|%10d|%10d",RE1031[i].roll,RE1031[i].name,RE1031[i].id,RE1031[i].attend,RE1031[i].marks);

    }

    fclose(fp);
}

void MENG1031_marks()
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

    fp=fopen ("Eng103.1.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&MENG1031[i],sizeof(struct MENG1031),1,fp);
    }
    fclose(fp);

    for (i=0;i<15;i++)
    {
        if (MENG1031[i].roll==search)
        {
            printf("Enter new mark: ");
            scanf("%d",&MENG1031[i].marks);
        }
    }

    fp=fopen("Eng103.1.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&MENG1031[i],sizeof(struct MENG1031),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed.");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    ENG1031();
}

void SENG1031_search()
{
    int i,search;
    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Eng103.1.txt","r");

    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&SE1031[i],sizeof(struct SENG1031),1,fp);
        if (search==SE1031[i].id)
        {
        printf("\n%3d|%30s|%7d|%10d|%10d",SE1031[i].roll,SE1031[i].name,SE1031[i].id,SE1031[i].attend,SE1031[i].marks);
        }

    }
    fclose(fp);
    printf("\n");
    getch();
    ENG1031();
}

void AENG1031_add()
{
    int i,search,flag=0;

    FILE *fp;
    fp=fopen("Eng103.1.txt","r");
    for (i=0;i<15;i++)
    {
        fread(&AE1031[i],sizeof(struct AENG1031),1,fp);
    }
    fclose(fp);
    fp=fopen ("Eng103.1.txt","w");

    for (i=0;i<15;i++)
    {
    if (AE1031[i].roll==0)
    {
        printf("Enter roll number: ");
        scanf("%d",&AE1031[i].roll);
        fflush(stdin);

        printf("Enter name: ");
        gets(AE1031[i].name);
        fflush(stdin);

        printf("Enter id: ");
        scanf("%d",&AE1031[i].id);
        fflush(stdin);

        printf("Enter attendence: ");
        scanf("%d",&AE1031[i].attend);
        fflush(stdin);

        printf("Enter marks: ");
        scanf("%d",&AE1031[i].marks);
        fflush(stdin);

        break;

    }


    }
    for (i=0;i<15;i++)
    fwrite(&AE1031[i],sizeof(struct AENG1031),1,fp);

    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    ENG1031();

}

void DENG1031_delete ()
{
    int i,search,flag=0;

    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Eng103.1.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&DE1031[i],sizeof(struct DENG1031),1,fp);
    }
    fclose(fp);
    fp=fopen("Eng103.1.txt","w");
    for (i=0;i<15;i++)
    {
        if (search==DE1031[i].id)
        {
            flag=1;
        }
        if (flag==0)
        {
            printf("-");
            DmodE1031[i].roll=DE1031[i].roll;
            strcpy(DmodE1031[i].name,DE1031[i].name);
            DmodE1031[i].id=DE1031[i].id;
            DmodE1031[i].attend=DE1031[i].attend;
            DmodE1031[i].marks=DE1031[i].marks;
            fwrite(&DmodE1031[i],sizeof(struct DmodifiedENG1031),1,fp);
        }
        if (flag==1)
        {
            printf("+");
            DmodE1031[i].roll=DE1031[i+1].roll;
            strcpy(DmodE1031[i].name,DE1031[i+1].name);
            DmodE1031[i].id=DE1031[i+1].id;
            DmodE1031[i].attend=DE1031[i+1].attend;
            DmodE1031[i].marks=DE1031[i+1].marks;
            fwrite(&DmodE1031[i],sizeof(struct DmodifiedENG1031),1,fp);
        }
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    ENG1031();
}

void XENG1031_sort()
{
    int i,j,search;

    FILE *fp;

    fp=fopen ("Eng103.1.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&XE1031[i],sizeof(struct XENG1031),1,fp);
    }
    fclose(fp);

    for (i=0;i<15-1;i++)
    {
        for(j=0;j<15-i-1;j++)
        {
            if (XE1031[j].roll>XE1031[j+1].roll )
            {
                printf(".");
                TmodE1031=XE1031[j];
                XE1031[j]=XE1031[j+1];
                XE1031[j+1]=TmodE1031;
            }
        }
    }
    fp=fopen("Eng103.1.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&XE1031[i],sizeof(struct XENG1031),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    ENG1031();
}
struct RENG1032
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}RE1032[15];
struct SENG1032
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}SE1032[15];
struct AENG1032
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}AE1032[15];
struct DENG1032
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DE1032[15];
struct DmodifiedENG1032
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DmodE1032[15];
struct MENG1032
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}MENG1032[15];
struct XENG1032
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}XE1032[15],TmodE1032;

void RENG1032_read();
void SENG1032_search();
void AENG1032_add();
void DENG1032_delete ();
void MENG1032_marks();
void XENG1032_sort();
void ENG1032();




void ENG1032()
{
    int i;
    int j;
    for(j=0;j<40;j++) printf("%c",249); printf("ENG 103 Section:02"); for(j=0;j<40;j++) printf("%c",249); printf("\n");
    RENG1032_read ();
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
    case 1: SENG1032_search(); break;
    case 2: XENG1032_sort(); break;
    case 3: MENG1032_marks(); break;
    case 4: AENG1032_add(); break;
    case 5: DENG1032_delete (); break;
    case 6: viewNedit(); break;
    case 7: mainmenu(); break;
    case 8: log_out(); break;

    }
}

void RENG1032_read ()
{
    int i;

    FILE *fp;

    fp=fopen ("Eng103.2.txt","r");


    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&RE1032[i],sizeof(struct RENG1032),1,fp);
        if (RE1032[i].roll!=0)
        printf("\n%3d|%30s|%7d|%10d|%10d",RE1032[i].roll,RE1032[i].name,RE1032[i].id,RE1032[i].attend,RE1032[i].marks);

    }

    fclose(fp);
}

void MENG1032_marks()
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

    fp=fopen ("Eng103.2.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&MENG1032[i],sizeof(struct MENG1032),1,fp);
    }
    fclose(fp);

    for (i=0;i<15;i++)
    {
        if (MENG1032[i].roll==search)
        {
            printf("Enter new mark: ");
            scanf("%d",&MENG1032[i].marks);
        }
    }

    fp=fopen("Eng103.2.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&MENG1032[i],sizeof(struct MENG1032),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed.");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();;
    system("cls");
    ENG1032();
}

void SENG1032_search()
{
    int i,search;
    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Eng103.2.txt","r");

    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&SE1032[i],sizeof(struct SENG1032),1,fp);
        if (search==SE1032[i].id)
        {
        printf("\n%3d|%30s|%7d|%10d|%10d",SE1032[i].roll,SE1032[i].name,SE1032[i].id,SE1032[i].attend,SE1032[i].marks);
        }

    }
    fclose(fp);
    printf("\n");
    getch();
    ENG1032();
}

void AENG1032_add()
{
    int i,search,flag=0;

    FILE *fp;
    fp=fopen("Eng103.2.txt","r");
    for (i=0;i<15;i++)
    {
        fread(&AE1032[i],sizeof(struct AENG1032),1,fp);
    }
    fclose(fp);
    fp=fopen ("Eng103.2.txt","w");

    for (i=0;i<15;i++)
    {
    if (AE1032[i].roll==0)
    {
        printf("Enter roll number: ");
        scanf("%d",&AE1032[i].roll);
        fflush(stdin);

        printf("Enter name: ");
        gets(AE1032[i].name);
        fflush(stdin);

        printf("Enter id: ");
        scanf("%d",&AE1032[i].id);
        fflush(stdin);

        printf("Enter attendence: ");
        scanf("%d",&AE1032[i].attend);
        fflush(stdin);

        printf("Enter marks: ");
        scanf("%d",&AE1032[i].marks);
        fflush(stdin);

        break;

    }


    }
    for (i=0;i<15;i++)
    fwrite(&AE1032[i],sizeof(struct AENG1032),1,fp);

    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    ENG1032();

}

void DENG1032_delete ()
{
    int i,search,flag=0;

    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Eng103.2.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&DE1032[i],sizeof(struct DENG1032),1,fp);
    }
    fclose(fp);
    fp=fopen("Eng103.2.txt","w");
    for (i=0;i<15;i++)
    {
        if (search==DE1032[i].id)
        {
            flag=1;
        }
        if (flag==0)
        {
            printf("-");
            DmodE1032[i].roll=DE1032[i].roll;
            strcpy(DmodE1032[i].name,DE1032[i].name);
            DmodE1032[i].id=DE1032[i].id;
            DmodE1032[i].attend=DE1032[i].attend;
            DmodE1032[i].marks=DE1032[i].marks;
            fwrite(&DmodE1032[i],sizeof(struct DmodifiedENG1032),1,fp);
        }
        if (flag==1)
        {
            printf("+");
            DmodE1032[i].roll=DE1032[i+1].roll;
            strcpy(DmodE1032[i].name,DE1032[i+1].name);
            DmodE1032[i].id=DE1032[i+1].id;
            DmodE1032[i].attend=DE1032[i+1].attend;
            DmodE1032[i].marks=DE1032[i+1].marks;
            fwrite(&DmodE1032[i],sizeof(struct DmodifiedENG1032),1,fp);
        }
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    ENG1032();
}

void XENG1032_sort()
{
    int i,j,search;

    FILE *fp;

    fp=fopen ("Eng103.2.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&XE1032[i],sizeof(struct XENG1032),1,fp);
    }
    fclose(fp);

    for (i=0;i<15-1;i++)
    {
        for(j=0;j<15-i-1;j++)
        {
            if (XE1032[j].roll>XE1032[j+1].roll )
            {
                printf(".");
                TmodE1032=XE1032[j];
                XE1032[j]=XE1032[j+1];
                XE1032[j+1]=TmodE1032;
            }
        }
    }
    fp=fopen("Eng103.2.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&XE1032[i],sizeof(struct XENG1032),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    ENG1032();
}
struct RENG1033
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}RE1033[15];
struct SENG1033
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}SE1033[15];
struct AENG1033
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}AE1033[15];
struct DENG1033
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DE1033[15];
struct DmodifiedENG1033
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DmodE1033[15];
struct MENG1033
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}MENG1033[15];
struct XENG1033
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}XE1033[15],TmodE1033;

void RENG1033_read();
void SENG1033_search();
void AENG1033_add();
void DENG1033_delete ();
void MENG1033_marks();
void XENG1033_sort();
void ENG1033();



void ENG1033()
{
    int i;
    int j;
    for(j=0;j<40;j++) printf("%c",249); printf("Eng 103 Section:03"); for(j=0;j<40;j++) printf("%c",249); printf("\n");
    RENG1033_read ();
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
    case 1: SENG1033_search(); break;
    case 2: XENG1033_sort(); break;
    case 3: MENG1033_marks(); break;
    case 4: AENG1033_add(); break;
    case 5: DENG1033_delete (); break;
    case 6: viewNedit(); break;
    case 7: mainmenu(); break;
    case 8: log_out(); break;

    }
}

void RENG1033_read ()
{
    int i;

    FILE *fp;

    fp=fopen ("Eng103.3.txt","r");


    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&RE1033[i],sizeof(struct RENG1033),1,fp);
        if (RE1033[i].roll!=0)
        printf("\n%3d|%30s|%7d|%10d|%10d",RE1033[i].roll,RE1033[i].name,RE1033[i].id,RE1033[i].attend,RE1033[i].marks);

    }

    fclose(fp);
}

void MENG1033_marks()
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

    fp=fopen ("Eng103.3.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&MENG1033[i],sizeof(struct MENG1033),1,fp);
    }
    fclose(fp);

    for (i=0;i<15;i++)
    {
        if (MENG1033[i].roll==search)
        {
            printf("Enter new mark: ");
            scanf("%d",&MENG1033[i].marks);
        }
    }

    fp=fopen("Eng103.3.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&MENG1033[i],sizeof(struct MENG1033),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed.");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    ENG1033();
}

void SENG1033_search()
{
    int i,search;
    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Eng103.3.txt","r");

    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&SE1033[i],sizeof(struct SENG1033),1,fp);
        if (search==SE1033[i].id)
        {
        printf("\n%3d|%30s|%7d|%10d|%10d",SE1033[i].roll,SE1033[i].name,SE1033[i].id,SE1033[i].attend,SE1033[i].marks);
        }

    }
    fclose(fp);
    printf("\n");
    getch();
    ENG1033();
}

void AENG1033_add()
{
    int i,search,flag=0;

    FILE *fp;
    fp=fopen("Eng103.3.txt","r");
    for (i=0;i<15;i++)
    {
        fread(&AE1033[i],sizeof(struct AENG1033),1,fp);
    }
    fclose(fp);
    fp=fopen ("Eng103.3.txt","w");

    for (i=0;i<15;i++)
    {
    if (AE1033[i].roll==0)
    {
        printf("Enter roll number: ");
        scanf("%d",&AE1033[i].roll);
        fflush(stdin);

        printf("Enter name: ");
        gets(AE1033[i].name);
        fflush(stdin);

        printf("Enter id: ");
        scanf("%d",&AE1033[i].id);
        fflush(stdin);

        printf("Enter attendence: ");
        scanf("%d",&AE1033[i].attend);
        fflush(stdin);

        printf("Enter marks: ");
        scanf("%d",&AE1033[i].marks);
        fflush(stdin);

        break;

    }


    }
    for (i=0;i<15;i++)
    fwrite(&AE1033[i],sizeof(struct AENG1033),1,fp);

    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    ENG1033();

}

void DENG1033_delete ()
{
    int i,search,flag=0;

    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Eng103.3.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&DE1033[i],sizeof(struct DENG1033),1,fp);
    }
    fclose(fp);
    fp=fopen("Eng103.3.txt","w");
    for (i=0;i<15;i++)
    {
        if (search==DE1033[i].id)
        {
            flag=1;
        }
        if (flag==0)
        {
            printf("-");
            DmodE1033[i].roll=DE1033[i].roll;
            strcpy(DmodE1033[i].name,DE1033[i].name);
            DmodE1033[i].id=DE1033[i].id;
            DmodE1033[i].attend=DE1033[i].attend;
            DmodE1033[i].marks=DE1033[i].marks;
            fwrite(&DmodE1033[i],sizeof(struct DmodifiedENG1033),1,fp);
        }
        if (flag==1)
        {
            printf("+");
            DmodE1033[i].roll=DE1033[i+1].roll;
            strcpy(DmodE1033[i].name,DE1033[i+1].name);
            DmodE1033[i].id=DE1033[i+1].id;
            DmodE1033[i].attend=DE1033[i+1].attend;
            DmodE1033[i].marks=DE1033[i+1].marks;
            fwrite(&DmodE1033[i],sizeof(struct DmodifiedENG1033),1,fp);
        }
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    ENG1033();
}

void XENG1033_sort()
{
    int i,j,search;

    FILE *fp;

    fp=fopen ("Eng103.3.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&XE1033[i],sizeof(struct XENG1033),1,fp);
    }
    fclose(fp);

    for (i=0;i<15-1;i++)
    {
        for(j=0;j<15-i-1;j++)
        {
            if (XE1033[j].roll>XE1033[j+1].roll )
            {
                printf(".");
                TmodE1033=XE1033[j];
                XE1033[j]=XE1033[j+1];
                XE1033[j+1]=TmodE1033;
            }
        }
    }
    fp=fopen("Eng103.3.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&XE1033[i],sizeof(struct XENG1033),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    ENG1033();
}
struct RMAT1161
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}RM1161[15];
struct SMAT1161
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}SM1161[15];
struct AMAT1161
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}AM1161[15];
struct DMAT1161
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DM1161[15];
struct DmodifiedMAT1161
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DmodM1161[15];
struct MMAT1161
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}MMAT1161[15];
struct XMAT1161
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}XM1161[15],TmodM1161;

void RMAT1161_read();
void SMAT1161_search();
void AMAT1161_add();
void DMAT1161_delete ();
void MMAT1161_marks();
void XMAT1161_sort();
void MAT1161();


void MAT1161()
{
    int i;
    int j;
    for(j=0;j<40;j++) printf("%c",249); printf("MAT116 Section:01"); for(j=0;j<40;j++) printf("%c",249); printf("\n");
    RMAT1161_read ();
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
    case 1: SMAT1161_search(); break;
    case 2: XMAT1161_sort(); break;
    case 3: MMAT1161_marks(); break;
    case 4: AMAT1161_add(); break;
    case 5: DMAT1161_delete (); break;
    case 6: viewNedit(); break;
    case 7: mainmenu(); break;
    case 8: log_out(); break;

    }
}

void RMAT1161_read ()
{
    int i;

    FILE *fp;

    fp=fopen ("Mat116.1.txt","r");


    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&RM1161[i],sizeof(struct RMAT1161),1,fp);
        if (RM1161[i].roll!=0)
        printf("\n%3d|%30s|%7d|%10d|%10d",RM1161[i].roll,RM1161[i].name,RM1161[i].id,RM1161[i].attend,RM1161[i].marks);

    }

    fclose(fp);
}

void MMAT1161_marks()
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

    fp=fopen ("Mat116.1.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&MMAT1161[i],sizeof(struct MMAT1161),1,fp);
    }
    fclose(fp);

    for (i=0;i<15;i++)
    {
        if (MMAT1161[i].roll==search)
        {
            printf("Enter new mark: ");
            scanf("%d",&MMAT1161[i].marks);
        }
    }

    fp=fopen("Mat116.1.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&MMAT1161[i],sizeof(struct MMAT1161),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed.");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    MAT1161();
}

void SMAT1161_search()
{
    int i,search;
    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Mat116.1.txt","r");

    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&SM1161[i],sizeof(struct SMAT1161),1,fp);
        if (search==SM1161[i].id)
        {
        printf("\n%3d|%30s|%7d|%10d|%10d",SM1161[i].roll,SM1161[i].name,SM1161[i].id,SM1161[i].attend,SM1161[i].marks);
        }

    }
    fclose(fp);
    printf("\n");
    getch();
    MAT1161();
}

void AMAT1161_add()
{
    int i,search,flag=0;

    FILE *fp;
    fp=fopen("Mat116.1.txt","r");
    for (i=0;i<15;i++)
    {
        fread(&AM1161[i],sizeof(struct AMAT1161),1,fp);
    }
    fclose(fp);
    fp=fopen ("Mat116.1.txt","w");

    for (i=0;i<15;i++)
    {
    if (AM1161[i].roll==0)
    {
        printf("Enter roll number: ");
        scanf("%d",&AM1161[i].roll);
        fflush(stdin);

        printf("Enter name: ");
        gets(AM1161[i].name);
        fflush(stdin);

        printf("Enter id: ");
        scanf("%d",&AM1161[i].id);
        fflush(stdin);

        printf("Enter attendence: ");
        scanf("%d",&AM1161[i].attend);
        fflush(stdin);

        printf("Enter marks: ");
        scanf("%d",&AM1161[i].marks);
        fflush(stdin);

        break;

    }


    }
    for (i=0;i<15;i++)
    fwrite(&AM1161[i],sizeof(struct AMAT1161),1,fp);

    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    MAT1161();

}

void DMAT1161_delete ()
{
    int i,search,flag=0;

    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Mat116.1.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&DM1161[i],sizeof(struct DMAT1161),1,fp);
    }
    fclose(fp);
    fp=fopen("Mat116.1.txt","w");
    for (i=0;i<15;i++)
    {
        if (search==DM1161[i].id)
        {
            flag=1;
        }
        if (flag==0)
        {
            printf("-");
            DmodM1161[i].roll=DM1161[i].roll;
            strcpy(DmodM1161[i].name,DM1161[i].name);
            DmodM1161[i].id=DM1161[i].id;
            DmodM1161[i].attend=DM1161[i].attend;
            DmodM1161[i].marks=DM1161[i].marks;
            fwrite(&DmodM1161[i],sizeof(struct DmodifiedMAT1161),1,fp);
        }
        if (flag==1)
        {
            printf("+");
            DmodM1161[i].roll=DM1161[i+1].roll;
            strcpy(DmodM1161[i].name,DM1161[i+1].name);
            DmodM1161[i].id=DM1161[i+1].id;
            DmodM1161[i].attend=DM1161[i+1].attend;
            DmodM1161[i].marks=DM1161[i+1].marks;
            fwrite(&DmodM1161[i],sizeof(struct DmodifiedMAT1161),1,fp);
        }
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    MAT1161();
}

void XMAT1161_sort()
{
    int i,j,search;

    FILE *fp;

    fp=fopen ("Mat116.1.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&XM1161[i],sizeof(struct XMAT1161),1,fp);
    }
    fclose(fp);

    for (i=0;i<15-1;i++)
    {
        for(j=0;j<15-i-1;j++)
        {
            if (XM1161[j].roll>XM1161[j+1].roll )
            {
                printf(".");
                TmodM1161=XM1161[j];
                XM1161[j]=XM1161[j+1];
                XM1161[j+1]=TmodM1161;
            }
        }
    }
    fp=fopen("Mat116.1.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&XM1161[i],sizeof(struct XMAT1161),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    MAT1161();
}
struct RMAT1162
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}RM1162[15];
struct SMAT1162
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}SM1162[15];
struct AMAT1162
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}AM1162[15];
struct DMAT1162
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DM1162[15];
struct DmodifiedMAT1162
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DmodM1162[15];
struct MMAT1162
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}MMAT1162[15];
struct XMAT1162
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}XM1162[15],TmodM1162;

void RMAT1162_read();
void SMAT1162_search();
void AMAT1162_add();
void DMAT1162_delete ();
void MMAT1162_marks();
void XMAT1162_sort();
void MAT1162();


void MAT1162()
{
    int i;
    int j;
    for(j=0;j<40;j++) printf("%c",249); printf("MAT 116 Section:02"); for(j=0;j<40;j++) printf("%c",249); printf("\n");
    RMAT1162_read ();
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
    case 1: SMAT1162_search(); break;
    case 2: XMAT1162_sort(); break;
    case 3: MMAT1162_marks(); break;
    case 4: AMAT1162_add(); break;
    case 5: DMAT1162_delete (); break;
    case 6: viewNedit(); break;
    case 7: mainmenu(); break;
    case 8: log_out(); break;

    }
}

void RMAT1162_read ()
{
    int i;

    FILE *fp;

    fp=fopen ("Mat116.2.txt","r");


    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&RM1162[i],sizeof(struct RMAT1162),1,fp);
        if (RM1162[i].roll!=0)
        printf("\n%3d|%30s|%7d|%10d|%10d",RM1162[i].roll,RM1162[i].name,RM1162[i].id,RM1162[i].attend,RM1162[i].marks);

    }

    fclose(fp);
}

void MMAT1162_marks()
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

    fp=fopen ("Mat116.2.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&MMAT1162[i],sizeof(struct MMAT1162),1,fp);
    }
    fclose(fp);

    for (i=0;i<15;i++)
    {
        if (MMAT1162[i].roll==search)
        {
            printf("Enter new mark: ");
            scanf("%d",&MMAT1162[i].marks);
        }
    }

    fp=fopen("Mat116.2.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&MMAT1162[i],sizeof(struct MMAT1162),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed.");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    MAT1162();
}

void SMAT1162_search()
{
    int i,search;
    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Mat116.2.txt","r");

    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&SM1162[i],sizeof(struct SMAT1162),1,fp);
        if (search==SM1162[i].id)
        {
        printf("\n%3d|%30s|%7d|%10d|%10d",SM1162[i].roll,SM1162[i].name,SM1162[i].id,SM1162[i].attend,SM1162[i].marks);
        }

    }
    fclose(fp);
    printf("\n");
    getch();
    MAT1162();
}

void AMAT1162_add()
{
    int i,search,flag=0;

    FILE *fp;
    fp=fopen("Mat116.2.txt","r");
    for (i=0;i<15;i++)
    {
        fread(&AM1162[i],sizeof(struct AMAT1162),1,fp);
    }
    fclose(fp);
    fp=fopen ("Mat116.2.txt","w");

    for (i=0;i<15;i++)
    {
    if (AM1162[i].roll==0)
    {
        printf("Enter roll number: ");
        scanf("%d",&AM1162[i].roll);
        fflush(stdin);

        printf("Enter name: ");
        gets(AM1162[i].name);
        fflush(stdin);

        printf("Enter id: ");
        scanf("%d",&AM1162[i].id);
        fflush(stdin);

        printf("Enter attendence: ");
        scanf("%d",&AM1162[i].attend);
        fflush(stdin);

        printf("Enter marks: ");
        scanf("%d",&AM1162[i].marks);
        fflush(stdin);

        break;

    }


    }
    for (i=0;i<15;i++)
    fwrite(&AM1162[i],sizeof(struct AMAT1162),1,fp);

    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    MAT1162();

}

void DMAT1162_delete ()
{
    int i,search,flag=0;

    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Mat116.2.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&DM1162[i],sizeof(struct DMAT1162),1,fp);
    }
    fclose(fp);
    fp=fopen("Mat116.2.txt","w");
    for (i=0;i<15;i++)
    {
        if (search==DM1162[i].id)
        {
            flag=1;
        }
        if (flag==0)
        {
            printf("-");
            DmodM1162[i].roll=DM1162[i].roll;
            strcpy(DmodM1162[i].name,DM1162[i].name);
            DmodM1162[i].id=DM1162[i].id;
            DmodM1162[i].attend=DM1162[i].attend;
            DmodM1162[i].marks=DM1162[i].marks;
            fwrite(&DmodM1162[i],sizeof(struct DmodifiedMAT1162),1,fp);
        }
        if (flag==1)
        {
            printf("+");
            DmodM1162[i].roll=DM1162[i+1].roll;
            strcpy(DmodM1162[i].name,DM1162[i+1].name);
            DmodM1162[i].id=DM1162[i+1].id;
            DmodM1162[i].attend=DM1162[i+1].attend;
            DmodM1162[i].marks=DM1162[i+1].marks;
            fwrite(&DmodM1162[i],sizeof(struct DmodifiedMAT1162),1,fp);
        }
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    MAT1162();
}

void XMAT1162_sort()
{
    int i,j,search;

    FILE *fp;

    fp=fopen ("Mat116.2.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&XM1162[i],sizeof(struct XMAT1162),1,fp);
    }
    fclose(fp);

    for (i=0;i<15-1;i++)
    {
        for(j=0;j<15-i-1;j++)
        {
            if (XM1162[j].roll>XM1162[j+1].roll )
            {
                printf(".");
                TmodM1162=XM1162[j];
                XM1162[j]=XM1162[j+1];
                XM1162[j+1]=TmodM1162;
            }
        }
    }
    fp=fopen("Mat116.2.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&XM1162[i],sizeof(struct XMAT1162),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    MAT1162();
}
struct RMAT1163
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}RM1163[15];
struct SMAT1163
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}SM1163[15];
struct AMAT1163
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}AM1163[15];
struct DMAT1163
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DM1163[15];
struct DmodifiedMAT1163
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}DmodM1163[15];
struct MMAT1163
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}MMAT1163[15];
struct XMAT1163
{
    int roll;
    char name[30];
    int id;
    int attend;
    int marks;
}XM1163[15],TmodM1163;

void RMAT1163_read();
void SMAT1163_search();
void AMAT1163_add();
void DMAT1163_delete ();
void MMAT1163_marks();
void XMAT1163_sort();
void MAT1163();



void MAT1163()
{
    int i;
    int j;
    for(j=0;j<40;j++) printf("%c",249); printf("MAT 116 Section:03"); for(j=0;j<40;j++) printf("%c",249); printf("\n");
    RMAT1163_read ();
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
    case 1: SMAT1163_search(); break;
    case 2: XMAT1163_sort(); break;
    case 3: MMAT1163_marks(); break;
    case 4: AMAT1163_add(); break;
    case 5: DMAT1163_delete (); break;
    case 6: viewNedit(); break;
    case 7: mainmenu(); break;
    case 8: log_out(); break;

    }
}

void RMAT1163_read ()
{
    int i;

    FILE *fp;

    fp=fopen ("Mat116.3.txt","r");


    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&RM1163[i],sizeof(struct RMAT1163),1,fp);
        if (RM1163[i].roll!=0)
        printf("\n%3d|%30s|%7d|%10d|%10d",RM1163[i].roll,RM1163[i].name,RM1163[i].id,RM1163[i].attend,RM1163[i].marks);

    }

    fclose(fp);
}

void MMAT1163_marks()
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

    fp=fopen ("Mat116.3.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&MMAT1163[i],sizeof(struct MMAT1163),1,fp);
    }
    fclose(fp);

    for (i=0;i<15;i++)
    {
        if (MMAT1163[i].roll==search)
        {
            printf("Enter new mark: ");
            scanf("%d",&MMAT1163[i].marks);
        }
    }

    fp=fopen("Mat116.3.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&MMAT1163[i],sizeof(struct MMAT1163),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed.");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");

    MAT1163();
}

void SMAT1163_search()
{
    int i,search;
    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Mat116.3.txt","r");

    printf("Roll--------------------------Name-----Id-----Attendence-----Marks");

    for (i=0;i<15;i++)
    {
        fread(&SM1163[i],sizeof(struct SMAT1163),1,fp);
        if (search==SM1163[i].id)
        {
        printf("\n%3d|%30s|%7d|%10d|%10d",SM1163[i].roll,SM1163[i].name,SM1163[i].id,SM1163[i].attend,SM1163[i].marks);
        }

    }
    fclose(fp);
    printf("\n");
    getch();
    MAT1163();
}

void AMAT1163_add()
{
    int i,search,flag=0;

    FILE *fp;
    fp=fopen("Mat116.3.txt","r");
    for (i=0;i<15;i++)
    {
        fread(&AM1163[i],sizeof(struct AMAT1163),1,fp);
    }
    fclose(fp);
    fp=fopen ("Mat116.3.txt","w");

    for (i=0;i<15;i++)
    {
    if (AM1163[i].roll==0)
    {
        printf("Enter roll number: ");
        scanf("%d",&AM1163[i].roll);
        fflush(stdin);

        printf("Enter name: ");
        gets(AM1163[i].name);
        fflush(stdin);

        printf("Enter id: ");
        scanf("%d",&AM1163[i].id);
        fflush(stdin);

        printf("Enter attendence: ");
        scanf("%d",&AM1163[i].attend);
        fflush(stdin);

        printf("Enter marks: ");
        scanf("%d",&AM1163[i].marks);
        fflush(stdin);

        break;

    }


    }
    for (i=0;i<15;i++)
    fwrite(&AM1163[i],sizeof(struct AMAT1163),1,fp);

    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    MAT1163();

}

void DMAT1163_delete ()
{
    int i,search,flag=0;

    printf("Enter ID: ");
    scanf("%d",&search);

    FILE *fp;

    fp=fopen ("Mat116.3.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&DM1163[i],sizeof(struct DMAT1163),1,fp);
    }
    fclose(fp);
    fp=fopen("Mat116.3.txt","w");
    for (i=0;i<15;i++)
    {
        if (search==DM1163[i].id)
        {
            flag=1;
        }
        if (flag==0)
        {
            printf("-");
            DmodM1163[i].roll=DM1163[i].roll;
            strcpy(DmodM1163[i].name,DM1163[i].name);
            DmodM1163[i].id=DM1163[i].id;
            DmodM1163[i].attend=DM1163[i].attend;
            DmodM1163[i].marks=DM1163[i].marks;
            fwrite(&DmodM1163[i],sizeof(struct DmodifiedMAT1163),1,fp);
        }
        if (flag==1)
        {
            printf("+");
            DmodM1163[i].roll=DM1163[i+1].roll;
            strcpy(DmodM1163[i].name,DM1163[i+1].name);
            DmodM1163[i].id=DM1163[i+1].id;
            DmodM1163[i].attend=DM1163[i+1].attend;
            DmodM1163[i].marks=DM1163[i+1].marks;
            fwrite(&DmodM1163[i],sizeof(struct DmodifiedMAT1163),1,fp);
        }
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    MAT1163();
}

void XMAT1163_sort()
{
    int i,j,search;

    FILE *fp;

    fp=fopen ("Mat116.3.txt","r");

    for (i=0;i<15;i++)
    {
        fread(&XM1163[i],sizeof(struct XMAT1163),1,fp);
    }
    fclose(fp);

    for (i=0;i<15-1;i++)
    {
        for(j=0;j<15-i-1;j++)
        {
            if (XM1163[j].roll>XM1163[j+1].roll )
            {
                printf(".");
                TmodM1163=XM1163[j];
                XM1163[j]=XM1163[j+1];
                XM1163[j+1]=TmodM1163;
            }
        }
    }
    fp=fopen("Mat116.3.txt","w");
    for (i=0;i<15;i++)
    {
        fwrite(&XM1163[i],sizeof(struct XMAT1163),1,fp);
    }
    fclose(fp);
    printf("Update Successfully Completed");
    printf("\n");
    printf("\nPress any key to go back.\n");
    getch();
    system("cls");
    MAT1163();
}

int main()
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

        return 0;
}
