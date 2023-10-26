#ifndef BigInteger_h
#define BigInteger_h


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    struct node *next;
};

struct BigInt
{
    struct node *head;
    int length;
    int sign;
};
struct node * reverse(struct node *);
struct node* newNode(int);
void insertAtBegin(struct node ** , int );
struct BigInt initialize(char *);
void printreverse(struct node *);
void display(struct BigInt);
int truncate(struct node *);
int compare(struct BigInt ,struct BigInt);
int count(struct node *);
int signcompare(struct BigInt,struct BigInt);
struct node * addd(struct node *,struct node *);
struct BigInt add(struct BigInt ,struct BigInt );
struct BigInt sub(struct BigInt,struct BigInt);
struct node *add_mul(struct node *, struct node *);
struct node * mull(struct node *,struct node *);
struct BigInt mul(struct BigInt,struct BigInt);
int compare_div(struct node *,struct node *);
struct node * divv(struct node *,struct node *);
struct BigInt div1(struct BigInt,struct BigInt);
struct BigInt mod(struct BigInt,struct BigInt);


#endif