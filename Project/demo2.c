#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for a single question
struct Question {
    char question[100];
    char options[4][50];
    char correct_answer;
};
struct Question Qu[100];
int count=0;
// Function to load questions from a file
void loadQuestions() {
    FILE *file = fopen("Question.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    int i=0;
    while(!feof(file)){
        fgets(Qu[i].question,100,file);
        for(int j=0;j<4;j++){
            fgets(Qu[i].options[j],50,file);
        }
        Qu[i].correct_answer=fgetc(file);
        fgetc(file);
        fgetc(file);
        count++;
        i++;
    }

    fclose(file);
    return;
    // return num_questions;
}
int main()
{
    loadQuestions();
    for(int i=0;i<count;i++){
        puts(Qu[i].question);
        for(int j=0;j<4;j++){
            puts(Qu[i].options[j]);
        }
        printf("%c\n",Qu[i].correct_answer);
    }
    return 0;

}