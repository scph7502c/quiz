#ifndef QUESTIONS_H
#define QUESTIONS_H

typedef struct {
    char question[100];
    char answer[100];
} Questions;

extern Questions geography[];
extern Questions biology[];

extern int geography_size;
extern int biology_size;

#endif // QUESTIONS_H

