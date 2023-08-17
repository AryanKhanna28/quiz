#include <stdio.h>
#include <conio.h>

int main()
{
int score=0;
int answer;
int c,ch;

do
{
    printf("\t\t\t\t\t\tWELCOME TO THE QUIZ \n\t\t\t\t\t\tPLEASE CHOOSE THE SUBJECT \n\t1.FOR C PROGRAMMING\t2.FOR DATA STRUCTURE\t3.FOR COMPUTER ARCHITECHTURE\t4.FOR DISCRETE MATHEMATICS\n");
    scanf("%d",&ch);
    printf("\n");

switch(ch)

{

        case 1: printf("Welcome to the C quiz\nThe quiz has 5 very basic questions on the C Programming Language.You get +3 for each correct answer & -1 for each wrong/invalid answer.\n");


                printf("\nQ1) Why is it called 'C' & not 'D'?\n");

                printf("[1]C stands for code  \t[2]The inventor's name started with a C\n[3]It developed after a language called 'B' \t[4]Why should I care?\n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==3)
                {
                printf("That's Correct!\n");

                    score=score+3;
                }

                else

                {

                    score=score-1;

                    printf("Wrong Answer\n");
                }

                printf("\nQ) It was developed at?\n");

                printf("[1]IBMt [2]Bell Labsn\n[3]MIT \t[4]Microsoft(?)\n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==2)

                {


                printf("That's Correct!\n");

                    score=score+3;
                }

                else

                {
                score=score-1;

                printf("Wrong Answer\n");

                }

                printf("\nQ) Which of these is not a C keyword as per ANSI C ?\n");

                printf("[1]while \t[2]for\n[3]entert \t[4]break\n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==3)

                {

                printf("That's Correct!\n");

                score=score+3;
                }

                else
                {

                printf("Wrong Answer\n");

                score=score-1;

                }


                printf("\nQ) What is ANSI ?\n");

                printf("[1]Area of Natural and Scientific Interest \t[2]American National Standards Institute\n[3]American National Standardization Institute \t[4]American National Society Of Intellectuals\n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==2)

                {

                printf("\nThat's Correct!\n");

                score=score+3;

                }
                else

                {

                printf("Wrong Answer\n");

                score=score-1;

                }

                printf("\nQ)Which of these concepts is NOT supported by C ?\n");

                printf("[1]Pointers \t[2]Functions\n[3]Strings \t[4]Namespaces\n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==4)

                {
                printf("That's Correct!\n");

                score=score+3;

                }

                else

                {
                printf("Wrong Answer\n");

                score=score-1;
                }

                printf("\nThank You for taking the Quiz.\n Your Total Score is %d out of 15", score);
                score=0;
                break;


        case 2: printf("Welcome to the Data Structure quiz\nThe quiz has 5 very basic questions on the Data Structure.You get +3 for each correct answer & -1 for each wrong/invalid answer.\n");


                printf("\nQ1) Which one of the following is the process of inserting an element in the stack?\n");

                printf("[1]Insert \t[2]Add\n[3]Push \t[4]None of the above\n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==3)
                {
                printf("That's Correct!\n");

                    score=score+3;
                }

                else

                {

                    score=score-1;
                    printf("Wrong Answer\n");
                }

                printf("\nQ)How can we describe an array in the best possible way?\n");

                printf("[1]The Array shows a hierarchical structure. \t[2]Arrays are immutable.\n[3]Container that stores the elements of similar types \t[4]Container that stores the elements of similar types(?)\n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==3)

                {


                printf("That's Correct!\n");

                    score=score+3;
                }

                else

                {
                score=score-1;

                printf("Wrong Answer\n");

                }

                printf("\nQ) Which of the following Data Structure is of linear type ?\n");

                printf("[1]string \t[2]lists\n[3]stack \t[4]all of these \n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==4)

                {

                printf("That's Correct!\n");

                score=score+3;
                }

                else
                {

                printf("Wrong Answer\n");

                score=score-1;

                }


                printf("\nQ) The depth of complete binary tree is given by ?\n");

                printf("[1]Dn = nlog2n \t[2]Dn = nlog2n+1\n[3]Dn = log2n \t[4]Dn = log2n+1\n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==4)

                {

                printf("That's Correct!\n");

                score=score+3;

                }
                else

                {

                printf("Wrong Answer\n");

                score=score-1;

                }

                printf("\nQ)Which of the following statement is not true regarding the priority queue?\n");

                printf("[1]Processes with different priority can be easily handled \t[2]Easy to implement\n[3]Deletion is easier \t[4]None of the above\n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==3)

                {
                printf("That's Correct!\n");

                score=score+3;

                }

                else

                {
                printf("Wrong Answer\n");

                score=score-1;
                }

                printf("\nThank You for taking the Quiz.\n Your Total Score is %d out of 15", score);
                score=0;
                break;


        case 3: printf("Welcome to the COMPUTER ARCHITECHTURE quiz\nThe quiz has 5 very basic questions on the COMPUTER ARCHITECHTURE.You get +3 for each correct answer & -1 for each wrong/invalid answer.\n");


                printf("\nQ1) Who developed the basic architecture of computer?\n");

                printf("[1]Blaise Pascal \t[2]Charles Babbage\n[3]John Von Neumann \t[4]None of the above\n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==3)
                {
                printf("That's Correct!\n");

                    score=score+3;
                }

                else

                {

                    score=score-1;
                    printf("Wrong Answer\n");
                }

                printf("\nQ) Which of the following computer memory is fastest?\n");

                printf("[1]Register \t[2]Hard Disk\n[3]RAM \t[4]Nome of these(?)\n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==1)

                {


                printf("That's Correct!\n");

                    score=score+3;
                }

                else

                {
                score=score-1;

                printf("Wrong Answer\n");

                }

                printf("\nQ) Computer address bus is ?\n");

                printf("[1]Multidirectional \t[2]Bidirectional\n[3]Unidirectional \t[4]None of the above\n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==3)

                {

                printf("That's Correct!\n");

                score=score+3;
                }

                else
                {

                printf("Wrong Answer\n");

                score=score-1;

                }


                printf("\nQ) Subtraction in computers is carried out by ?\n");

                printf("[1]1's complement \t[2]2's complement\n[3]4's complement \t[4]9's complement\n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==2)

                {

                printf("That's Correct!\n");

                score=score+3;

                }
                else

                {

                printf("Wrong Answer\n");

                score=score-1;

                }

                printf("\nQ)Which of these concepts is NOT supported by C ?\n");

                printf("[1]Hexadecimal form \t[2]Octal form\n[3]Binary form \t[4]Decimal form\n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==3)

                {
                printf("That's Correct!\n");

                score=score+3;

                }

                else

                {
                printf("Wrong Answer\n");

                score=score-1;
                }

                printf("\nThank You for taking the Quiz.\n Your Total Score is %d out of 15", score);
                score=0;
                break;


        case 4: printf("Welcome to the DISCRETE MATHEMATICS quiz\nThe quiz has 5 very basic questions on the DISCRETE MATHEMATICS.You get +3 for each correct answer & -1 for each wrong/invalid answer.\n");


                printf("\nQ1) Discrete Mathematics is a branch of mathematics involving discrete elements that uses?\n");

                printf("[1]algebra \t[2]arithmetic\n[3]Both A and B \t[4]None of the above\n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==3)
                {
                printf("That's Correct!\n");

                    score=score+3;
                }

                else

                {

                    score=score-1;
                    printf("Wrong Answer\n");
                }

                printf("\nQ) The set of positive integers are?\n");

                printf("[1]Finite \t[2]Infinite\n[3]Subset \t[4]Empty\n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==2)

                {


                printf("That's Correct!\n");

                    score=score+3;
                }

                else

                {
                score=score-1;

                printf("Wrong Answer\n");

                }

                printf("\nQ) ______is an ordered collection of objects.\n");

                printf("[1]Set \t[2]Function\n[3]Relation \t[4]None of these\n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==1)

                {

                printf("That's Correct!\n");

                score=score+3;
                }

                else
                {

                printf("Wrong Answer\n");

                score=score-1;

                }


                printf("\nQ)Determinant of a matrix A is Zero then ?\n");

                printf("[1]A is a Singular matrix \t[2]A is a non-Singular matrix\n[3]Double Type matrix \t[4]None of the above\n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==1)

                {

                printf("That's Correct!\n");

                score=score+3;

                }
                else

                {

                printf("Wrong Answer\n");

                score=score-1;

                }

                printf("\nQ)Which among the following can be taken as the discrete object?\n");

                printf("[1]People \t[2]Rational numbers\n[3]Integers \t[4]All of the mentioned\n");

                printf("your answer : ");

                scanf("%d", &answer);

                if(answer==4)

                {
                printf("That's Correct!\n");

                score=score+3;

                }

                else

                {
                printf("Wrong Answer\n");

                score=score-1;
                }

                printf("\nThank You for taking the Quiz.\n Your Total Score is %d out of 15", score);
                score=0;
                break;

     default: printf("Sorry you choosed Wrong option");

}

printf("\n\nDo you want to play again?(1 for YES, 0 for NO)");
scanf("%d",&c);
printf("\n\n");

}

while(c==1);

getch();

return 0;

}


