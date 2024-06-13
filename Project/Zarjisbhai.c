#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define MAX_PLAYERS 100

struct Player
{
    char name[100];
    int age;
    char role[100];
    int matches;
    int totalRuns;
    int highestRun;
};

struct Player findMEP(struct Player players[], int n)
{
    // Find the Most Experienced Player
    struct Player mep = players[0];
    for (int i = 1; i < n; i++)
    {
        if (players[i].matches > mep.matches)
        {
            mep = players[i];
        }
    }

    return mep;
}

struct Player findNCP(struct Player players[], int n)
{
    // Find the New Comer Player (Youngest Player)
    struct Player ncp = players[0];

    for (int i = 1; i < n; i++)
    {
        if (players[i].age < ncp.age)
        {
            ncp = players[i];
        }
    }

    return ncp;
}

struct Player findTSP(struct Player players[], int n)
{
    // Find the Top Scorer Player
    struct Player tsp = players[0];

    for (int i = 1; i < n; i++)
    {
        if (players[i].totalRuns > tsp.totalRuns)
        {
            tsp = players[i];
        }
    }

    return tsp;
}



struct Player findHHP(struct Player players[], int n)
{
    // Find the Hard Hitter Player (Highest Average Run per Match)
    struct Player hhp = players[0];
    float maxAvg = hhp.totalRuns / hhp.matches;

    for (int i = 1; i < n; i++)
    {
        float avg =(players[i].totalRuns / players[i].matches);
        if (avg > maxAvg)
        {
            maxAvg = avg;
            hhp = players[i];
        }
    }

    return hhp;
}

struct Player findHRTP(struct Player players[], int n)
{
    // Find the Highest Run Taker Player
    struct Player hrtp = players[0];

    for (int i = 1; i < n; i++)
    {
        if (players[i].highestRun > hrtp.highestRun)
        {
            hrtp = players[i];
        }
    }

    return hrtp;
}

struct Player findMVP(struct Player players[], int n)
{
    // Find the Most Valuable Player (MVP) using the provided formula
    struct Player mvp = players[0];
    float maxMVPValue = mvp.age + mvp.matches + mvp.totalRuns + mvp.highestRun + ((float)mvp.totalRuns / mvp.matches) + ((float)mvp.highestRun / mvp.age) + (mvp.matches > 10 ? 50 : 0);

    for (int i = 1; i < n; i++)
    {
        float mvpValue = players[i].age + players[i].matches + players[i].totalRuns + players[i].highestRun + ((float)players[i].totalRuns / players[i].matches) + ((float)players[i].highestRun / players[i].age) + (players[i].matches > 10 ? 50 : 0);

        if (mvpValue > maxMVPValue)
        {
            maxMVPValue = mvpValue;
            mvp = players[i];
        }
    }

    return mvp;
}

int main()
{
    // char fileName[100];
    // printf("Enter the input file name: ");
    // scanf("%s", fileName);

    FILE *file = fopen("playerstats.txt","r");
    if (file == NULL)
    {
        printf("File not found!\n");
        return 1;
    }

    struct Player players[MAX_PLAYERS];
    int n;
    fscanf(file,"%d",&n);
    int numPlayers = 0;
    fgetc(file);
    fgetc(file);
    while (numPlayers < n && !feof(file))
    {
        fflush(stdin);
        fgets(players[numPlayers].name,50,file);
        fflush(stdin);
        fscanf(file,"%d",&players[numPlayers].age);
        fflush(stdin);
        fgetc(file);
        fflush(stdin);
        fgets(players[numPlayers].role,50,file);
        fflush(stdin);
        fscanf(file,"%d %d %d",&players[numPlayers].matches,&players[numPlayers].totalRuns,&players[numPlayers].highestRun);
        fflush(stdin);
        fgetc(file);
        fflush(stdin);
        fgetc(file);
        fflush(stdin);
        numPlayers++;
    }

    fclose(file);

    int choice;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Show All Players\n");
        printf("2. Show A Particular player information (Provide Player Name)\n");
        printf("3. Show the MOST Experienced Player (MEP)\n");
        printf("4. Show the New Comer Player (NCP)\n");
        printf("5. Show the Top Scorer Player (TSP)\n");
        printf("6. Show the Hard Hitter Player (HHP)\n");
        printf("7. Show the Highest Run Taker Player (HRTP)\n");
        printf("8. Show the MOST Valuable Player (MVP)\n");
        printf("9. Show the Allrounders\n");
        printf("10. Exit/Quit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // Code to display all players
            for (int i = 0; i < numPlayers; i++)
            {
                printf("%s %d %s %d %d %d\n",
                       players[i].name,
                       players[i].age,
                       players[i].role,
                       players[i].matches,
                       players[i].totalRuns,
                       players[i].highestRun);
            }
            break;
        case 2:
            // Code to find and display player information by name
            printf("Player Information:\n");
            char playerName[100];
            printf("Enter player name: ");
            scanf("%s", playerName);

            // Search for the player by name
            for (int i = 0; i < numPlayers; i++)
            {
                if (strcmp(players[i].name, playerName) == 0)
                {
                    printf("Player Information:\n");
                    printf("Name: %s\n", players[i].name);
                    printf("Age: %d\n", players[i].age);
                    printf("Role: %s\n", players[i].role);
                    printf("Matches: %d\n", players[i].matches);
                    printf("Total Runs: %d\n", players[i].totalRuns);
                    printf("Highest Run: %d\n", players[i].highestRun);
                    break;
                }
            }
            break;
        case 3:
            // Show the MOST Experienced Player (MEP)
             printf("MOST Experienced Player:\n");
            struct Player mep = findMEP(players, numPlayers);
            printf("MOST Experienced Player (MEP):\n");
            printf("Name: %s\n", mep.name);
            printf("Age: %d\n", mep.age);
            printf("Role: %s\n", mep.role);
            printf("Matches: %d\n", mep.matches);
            printf("Total Runs: %d\n", mep.totalRuns);
            printf("Highest Run: %d\n", mep.highestRun);
            break;
        case 4:
            // Show the New Comer Player (NCP)
             printf("New Comer Player:\n");
            struct Player ncp = findNCP(players, numPlayers);
            printf("New Comer Player (NCP):\n");
            printf("Name: %s\n", ncp.name);
            printf("Age: %d\n", ncp.age);
            printf("Role: %s\n", ncp.role);
            printf("Matches: %d\n", ncp.matches);
            printf("Total Runs: %d\n", ncp.totalRuns);
            printf("Highest Run: %d\n", ncp.highestRun);
            break;
        case 5:
            // Show the Top Scorer Player (TSP)
             printf("op Scorer Player:\n");
            struct Player tsp = findTSP(players, numPlayers);
            printf("Top Scorer Player (TSP):\n");
            printf("Name: %s\n", tsp.name);
            printf("Age: %d\n", tsp.age);
            printf("Role: %s\n", tsp.role);
            printf("Matches: %d\n", tsp.matches);
            printf("Total Runs: %d\n", tsp.totalRuns);
            printf("Highest Run: %d\n", tsp.highestRun);
            break;
        case 6:
            // Show the Hard Hitter Player (HHP)
             printf("ard Hitter Player:\n");
            struct Player hhp = findHHP(players, numPlayers);
            printf("Hard Hitter Player (HHP):\n");
            printf("Name: %s\n", hhp.name);
            printf("Age: %d\n", hhp.age);
            printf("Role: %s\n", hhp.role);
            printf("Matches: %d\n", hhp.matches);
            printf("Total Runs: %d\n", hhp.totalRuns);
            printf("Highest Run: %d\n", hhp.highestRun);
            break;
        case 7:
            // Show the Highest Run Taker Player (HRTP)
            printf("Highest Run Taker Player:\n");
            struct Player hrtp = findHRTP(players, numPlayers);
            printf("Highest Run Taker Player (HRTP):\n");
            printf("Name: %s\n", hrtp.name);
            printf("Age: %d\n", hrtp.age);
            printf("Role: %s\n", hrtp.role);
            printf("Matches: %d\n", hrtp.matches);
            printf("Total Runs: %d\n", hrtp.totalRuns);
            printf("Highest Run: %d\n", hrtp.highestRun);
            break;
        case 8:
            // Show the MOST Valuable Player (MVP)
            printf("MOST Valuable Player:\n");
            struct Player mvp = findMVP(players, numPlayers);
            printf("MOST Valuable Player (MVP):\n");
            printf("Name: %s\n", mvp.name);
            printf("Age: %d\n", mvp.age);
            printf("Role: %s\n", mvp.role);
            printf("Matches: %d\n", mvp.matches);
            printf("Total Runs: %d\n", mvp.totalRuns);
            printf("Highest Run: %d\n", mvp.highestRun);
            break;
        case 9:
            // Show the Allrounders
            printf("Allrounders:\n");
            for (int i = 0; i < numPlayers; i++)
            {
                float avgRunsPerMatch = (float)players[i].totalRuns / players[i].matches;
                float runsPerAge = (float)players[i].totalRuns / players[i].age;
                if (avgRunsPerMatch > 30 && runsPerAge > 10)
                {
                    printf("Name: %s\n", players[i].name);
                    printf("Age: %d\n", players[i].age);
                    printf("Role: %s\n", players[i].role);
                    printf("Matches: %d\n", players[i].matches);
                    printf("Total Runs: %d\n", players[i].totalRuns);
                    printf("Highest Run: %d\n", players[i].highestRun);
                }
            }
            break;
        case 10:
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}