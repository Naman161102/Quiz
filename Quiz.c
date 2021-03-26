#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void show_record();

void help();

void reset_score();

void edit_score(float, char[]);

int main() {
    int r, count, i, n;
    float score;
    char chosenoption;
    char playername[20];

mainmenu:
    system("cls");    //To clear the screen
    printf("                    WELCOME \n");
    printf("                      to   \n");
    printf("                   THE QUIZ GAME \n");
    printf("           BECOME A MILLIONAIRE!!!!!!!!!!!    \n");
    printf("          > Press S to start the game\n");
    printf("          > Press V to view the highest score  \n");
    printf("          > Press R to reset score\n");
    printf("          > press H for help            \n");
    printf("          > press Q to quit            \n ");

    chosenoption = toupper(getch());    //toupper remove the lowercase and uppercase problem
    if (chosenoption == 'V') {
        show_record();
        goto mainmenu;
    } else if (chosenoption == 'H') {
        help();
        getch();
        goto mainmenu;
    } else if (chosenoption == 'R') {
        reset_score();
        getch();
        goto mainmenu;
    } else if (chosenoption == 'Q')
        exit(1);
    else if (chosenoption == 'S') {
        system("cls");
    }

    printf("         Resister your name:");
    gets(playername);

    system("cls");
    printf(" ------------------  Welcome %s to Quiz Game --------------------------\n", playername);
    printf("           Some basic rules and tips of the quiz:\n\n");
    printf(" >> There is 1 round in this quiz game\n");
    printf(" >> In whic you will be asked a total of 10 questions to test your\n");
    printf("    general knowledge.Each right answer will be awarded $100,000!\n");
    printf("    By this way you can win upto ONE MILLION cash prize!!!!!..........\n");
    printf(" >> You will be given 4 options and you have to press A, B ,C or D for the\n");
    printf("    right option.\n");
    printf(" >> You will be asked questions continuously, till right answers are given\n");
    printf(" >> No negative marking for wrong answers!\n");
    printf("        !!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!\n\n\n");
    printf(" Press Y  to start the game!\n");
    printf(" Press any other key to return to the main menu!\n");

    if (toupper(getch()) == 'Y') {
        goto home;
    } else {
        goto mainmenu;
        system("cls");
    }

home:
    system("cls");
    count = 0;
    for (i = 1; i <= 10; i++) {
        system("cls");
        r = i;
        switch (r) {
            case 1:
                printf("\n\nWhat is the National Game of England?\n\n");
                printf("A.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
                if (toupper(getch()) == 'C') {
                    printf("\n\nCorrect!!!\n\nPress any key to continue...");
                    count++;
                    getch();
                    break;
                } else {
                    printf("\n\nWrong!!! The correct answer is C.Cricket");
                    getch();
                    goto score;
                    break;
                }

            case 2:
                printf("\n\n\nStudy of Earthquake is called............,");
                printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology\n");
                if (toupper(getch()) == 'A') {
                    printf("\n\nCorrect!!!\n\nPress any key to continue...");
                    count++;
                    getch();
                    break;
                } else {
                    printf("\n\nWrong!!! The correct answer is A.Seismology");
                    getch();
                    goto score;
                    break;
                }

            case 3:
                printf("\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ");
                printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9\n");
                if (toupper(getch()) == 'C') {
                    printf("\n\nCorrect!!!\n\nPress any key to continue...");
                    count++;
                    getch();
                    break;
                } else {
                    printf("\n\nWrong!!! The correct answer is C.8");
                    getch();
                    goto score;
                    break;
                }

            case 4:
                printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
                printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
                if (toupper(getch()) == 'A') {
                    printf("\n\nCorrect!!!\n\nPress any key to continue...");
                    count++;
                    getch();
                    break;
                } else {
                    printf("\n\nWrong!!! The correct answer is A.Faraday");
                    getch();
                    goto score;
                    break;
                }

            case 5:
                printf("\n\n\nIn what unit is electric power measured?");
                printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units");
                if (toupper(getch()) == 'B') {
                    printf("\n\nCorrect!!!\n\nPress any key to continue...");
                    count++;
                    getch();
                    break;
                } else {
                    printf("\n\nWrong!!! The correct answer is B.Power");
                    getch();
                    goto score;
                    break;
                }

            case 6:
                printf("\n\n\nWhich element is found in Vitamin B12?");
                printf("\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron");
                if (toupper(getch()) == 'B') {
                    printf("\n\nCorrect!!!\n\nPress any key to continue...");
                    count++;
                    getch();
                    break;
                } else {
                    printf("\n\nWrong!!! The correct answer is B.Cobalt");
                    goto score;
                    getch();
                    break;
                }

            case 7:
                printf("\n\n\nWhat is the National Name of Japan?");
                printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
                if (toupper(getch()) == 'D') {
                    printf("\n\nCorrect!!!\n\nPress any key to continue...");
                    count++;
                    getch();
                    break;
                } else {
                    printf("\n\nWrong!!! The correct answer is D.Nippon");
                    getch();
                    goto score;
                    break;
                }

            case 8:
                printf("\n\n\nHow many times a piece of paper can be folded at the most?");
                printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper");
                if (toupper(getch()) == 'B') {
                    printf("\n\nCorrect!!!\n\nPress any key to continue...");
                    count++;
                    getch();
                    break;
                } else {
                    printf("\n\nWrong!!! The correct answer is B.7");
                    getch();
                    goto score;
                    break;
                }

            case 9:
                printf("\n\n\nWhat is the capital of Denmark?");
                printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
                if (toupper(getch()) == 'A') {
                    printf("\n\nCorrect!!!\n\nPress any key to continue...");
                    count++;
                    getch();
                    break;
                } else {
                    printf("\n\nWrong!!! The correct answer is A.Copenhagen");
                    getch();
                    goto score;
                    break;
                }

            case 10:
                printf("\n\n\nWhich is the longest River in the world?");
                printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
                if (toupper(getch()) == 'A') {
                    printf("\n\nCorrect!!!\n\nPress any key to continue...");
                    count++;
                    getch();
                    break;
                } else {
                    printf("\n\nWrong!!! The correct answer is A.Nile");
                    getch();
                    break;
                    goto score;
                }
            score:
                system("cls");
                score = (1.0 * count) * 100000;
                if (score > 0.00 && score < 1000000) {
                    printf("\n\n			**************** CONGRATULATION *****************\n");
                    printf("		        You won $%.2f", score);
                    goto go;
                }

                else if (score == 1000000.00) {
                    printf("        **************** CONGRATULATION ****************\n\n\n");
                    printf("                 YOU ARE A MILLIONAIRE!!!!!!!!!\n");
                    printf("          You won $%.2f\n", score);
                    printf("                 Thank You!!\n\n ");
                } else {
                    printf("  ******** SORRY BETTER LUCK NEXT TIME ********\n");
                    printf("      Thanks for your participation");
                    printf("       TRY AGAIN\n");
                    goto go;
                }

            go:
                puts(" Press Y if you want to play next game\n\n");
                puts(" Press any key if you want to go main menu");
                if (toupper(getch()) == 'Y')
                    goto home;
                else {
                    edit_score(score, playername);
                    goto mainmenu;
                }
        }
    }
}

void show_record() {
    system("cls");
    char name[20];
    float scr;
    FILE *f;
    f = fopen("score.txt", "r");
    fscanf(f, "%s%f", &name, &scr);
    printf("		 %s has secured the Highest Score %0.2f\n\n", name, scr);
    fclose(f);
    getch();
}

void reset_score() {
    system("cls");
    float we;
    char cd[20];
    FILE *f;
    f = fopen("score.txt", "r+");
    fscanf(f, "%s%f", &cd, &we);
    we = 0;
    fprintf(f, "%s,%.2f", cd, we);
    fclose(f);
}

void help() {
    system("cls");
    printf("           Some basic rules and tips of the quiz:\n\n");
    printf(" >> There is 1 round in this quiz game\n");
    printf(" >> In whic you will be asked a total of 10 questions to test your\n");
    printf("    general knowledge.Each right answer will be awarded $100,000!\n");
    printf("    By this way you can win upto ONE MILLION cash prize!!!!!..........\n");
    printf(" >> You will be given 4 options and you have to press A, B ,C or D for the\n");
    printf("    right option.\n");
    printf(" >> You will be asked questions continuously, till right answers are given\n");
    printf(" >> No negative marking for wrong answers!\n");
    printf("        !!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!\n\n\n");
}

void edit_score(float score, char nm[20]) {
    system("cls");
    float we;
    char cd[20];
    FILE *f;
    f = fopen("score.txt", "r");
    fscanf(f, "%s%f", &cd, &we);
    if (score >= we) {
        we = score;
        fclose(f);
        f = fopen("score.txt", "w");
        fprintf(f, "%s\n%.2f", nm, we);
        fclose(f);
    }
}