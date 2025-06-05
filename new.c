#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n);
char** kth_sentence_in_mth_paragraph(char**** document, int k, int m);
char*** kth_paragraph(char**** document, int k);
char**** get_document(char* text);


char**** get_document(char* text) {
    char**** document = malloc(MAX_PARAGRAPHS * sizeof(char***));
    int paragraph_index = 0;

    char* paragraph_str = strtok(text, "\n");
    while (paragraph_str != NULL) {
        char*** paragraph = malloc(MAX_CHARACTERS * sizeof(char**));
        int sentence_index = 0;

        char* sentence_str = strtok(paragraph_str, ".");
        while (sentence_str != NULL) {
            char** sentence = malloc(MAX_CHARACTERS * sizeof(char*));
            int word_index = 0;

            char* word_str = strtok(sentence_str, " ");
            while (word_str != NULL) {
                sentence[word_index] = malloc(strlen(word_str) + 1);
                strcpy(sentence[word_index], word_str);
                word_index++;
                word_str = strtok(NULL, " ");
            }
            sentence[word_index] = NULL;

            paragraph[sentence_index] = sentence;
            sentence_index++;
            sentence_str = strtok(NULL, ".");
        }
        paragraph[sentence_index] = NULL;

        document[paragraph_index] = paragraph;
        paragraph_index++;
        paragraph_str = strtok(NULL, "\n");
    }
    document[paragraph_index] = NULL;
    return document;
}

char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n) {
    return document[n - 1][m - 1][k - 1];
}

char** kth_sentence_in_mth_paragraph(char**** document, int k, int m) {
    return document[m - 1][k - 1];
}

char*** kth_paragraph(char**** document, int k) {
    return document[k - 1];
}

char* get_input_text() {
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();

    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen(doc) + 1) * sizeof(char));
    strcpy(returnDoc, doc);
    return returnDoc;
}

void print_word(char* word) {
    printf("%s", word);
}

void print_sentence(char** sentence) {
    for (int i = 0; sentence[i] != NULL; i++) {
        printf("%s", sentence[i]);
        if (sentence[i + 1] != NULL)
            printf(" ");
    }
}

void print_paragraph(char*** paragraph) {
    for (int i = 0; paragraph[i] != NULL; i++) {
        print_sentence(paragraph[i]);
        printf(".");
    }
}

int main() {
    char* text = get_input_text();
    char**** document = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3) {
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            char* word = kth_word_in_mth_sentence_of_nth_paragraph(document, k, m, n);
            print_word(word);
        } else if (type == 2) {
            int k, m;
            scanf("%d %d", &k, &m);
            char** sentence = kth_sentence_in_mth_paragraph(document, k, m);
            print_sentence(sentence);
        } else if (type == 1) {
            int k;
            scanf("%d", &k);
            char*** paragraph = kth_paragraph(document, k);
            print_paragraph(paragraph);
        }
        printf("\n");
    }

    return 0;
}
