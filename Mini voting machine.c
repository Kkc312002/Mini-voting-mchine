//this file is changed by krishna

#include<stdio.h>
#define KRISHNA
#define CANDIDATE_COUNT
#define CANDIDATE1 "YOGI AADITYANATH"
#define CANDIDATE2 "PRIYANKA GANDHI"
#define CANDIDATE3 "AKHILESH YADAV"
#define CANDIDATE4 "MAYAWATI"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, notavotes=0;

void castVote(){
int choice;    
printf("\n\n ### Please choose your Candidate ####\n\n");
printf("\n 1. %s", CANDIDATE1);
printf("\n 2. %s", CANDIDATE2);
printf("\n 3. %s", CANDIDATE3);
printf("\n 4. %s", CANDIDATE4);
printf("\n 5. %s", "Nota");

printf("\n\n Enter your choice (1 - 5) : ");
scanf("%d",&choice);

switch(choice)
{
    case 1: votesCount1++;
    break;
    case 2: votesCount2++;
    break;
    case 3: votesCount3++;
    break;
    case 4: votesCount4++;
    break;
    case 5: notavotes++;
    break;
    default: printf("\n Error: Wrong Choice !! Please renter");
             //hold the screen
             getchar();
}
printf("\n thanks for voting !!");
}

void votesCount(){
printf("\n\n ##### Voting Stats####");
printf("\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE1, votesCount2);
printf("\n %s - %d ", CANDIDATE1, votesCount3);
printf("\n %s - %d ", CANDIDATE1, votesCount4);
printf("\n %s - %d ", "NOTA VOTES", notavotes); 
}

void getLeadingCandidate()
{
    printf("\n\n  #### Leading Candiates ####\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("[%s]",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("[%s]",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("[%s]",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("[%s]",CANDIDATE4);
    else
    printf("  No-win ");    
    
    
    
}

int main()
{
int i;
int choice;

do{
printf("\n\n ###### Welcome to  Election 2022 #####");
printf("\n\n 1.cast your Vote");
printf("\n 2.vote count ");
printf("\n 3.leading Candidate");
printf("\n 0.Exit");

printf("\n\n Enter your choice : ");
scanf("%d",&choice);

switch(choice)
{
case 1: castVote();
break;
case 2: votesCount();
break;
case 3: getLeadingCandidate();
break;
default: printf("\n Error: Invalid ");
}
}
while(choice!=0);


getchar();


}