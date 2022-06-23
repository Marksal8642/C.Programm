#include<stdio.h>

#define CANDIDATE_COUNT

#define CANDIDATE1 "ABDUL B SESAY"
#define CANDIDATE2 "ELIJAH TAMBA KOMBA"
#define CANDIDATE3 "SORIE LAMA SESAY"
#define CANDIDATE4 "JIMMY S LAMIN"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;

void castVote(){
int choice;
printf("\n\n ### Please choose your Candidate ####\n\n");
printf("\n 1. %s", CANDIDATE1);
printf("\n 2. %s", CANDIDATE2);
printf("\n 3. %s", CANDIDATE3);
printf("\n 4. %s", CANDIDATE4);
printf("\n 5. %s", "None of These");

printf("\n\n Input your choice (1 - 4) : ");
scanf("%d",&choice);

switch(choice){
    case 1: votesCount1++; break;
    case 2: votesCount2++; break;
    case 3: votesCount3++; break;
    case 4: votesCount4++; break;
    case 5: spoiledtvotes++; break;
    default: printf("\n Error: Wrong Choice !! Please retry");
             //hold the screen
             getchar();
}
printf("\n thanks for vote !!");
}

void votesCount(){
printf("\n\n ##### Voting Statics ####");
printf("\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE2, votesCount2);
printf("\n %s - %d ", CANDIDATE3, votesCount3);
printf("\n %s - %d ", CANDIDATE4, votesCount4);
printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes);
}

void getLeadingCandidate(){
    printf("\n\n  #### Leading Candiate ####\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("[%s] \n",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("[%s] \n",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("[%s] \n",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("[%s] \n",CANDIDATE4);
    else
    printf("----- Warning !!! No-win situation----\n");
    printf("PLEASE NOTE THAT \n");
    printf("ONLY THE ADMINISTRATION HAVE THE RIGHT TO ANOUNCE THE WINNER");


}

int main()
{
int i;
int id;
int choice;


do{
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =              WELCOME TO THE ELECTRONIC    =");
    printf("\n\t\t\t        =                 VOTING  SYSTEM OF         =");
    printf("\n\t\t\t        =                CANNADIAN UNIVERSITY       =");
    printf("\n\t\t\t        =                  SUG   2023               =");
    printf("\n\t\t\t        =                   ELECTION                =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n\n");
        printf("\n\n Please enter your ID NUMBER : \n\n");
scanf("%d", &id);
if(id>=2019000 && id<=2022000)
{

printf("\n\n 1. Cast A Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: castVote();break;
case 2: votesCount();break;
case 3: getLeadingCandidate();break;
default: printf("\n Error: Invalid Choice");
}
}
else {
    printf("you are not allowed to vote");
}
}while(choice!=0);

//hold the screen
getchar();


return 0;
}
