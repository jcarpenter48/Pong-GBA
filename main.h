#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs


// For example, for a Pong game, one could be:

typedef struct {
   int xPos;
   int yPos;
   int col;
 } paddle;
extern paddle paddleA;
extern paddle paddleB;

typedef struct{
   int xPos;
   int yPos; //position on screen
   int dx;
   int dy; //movement vectors
   int collision;
 } pball;
extern pball pongball;
/* Example of a struct to hold state machine data:
*/
/*typedef struct {
   int currentState;
 }gameState;
extern gameState cState, pState;*/ //ultimately not necessary

int checkCollision(pball, paddle);
void moveBall(void);
void initializePlay(void);
void aiPaddle(void);
#endif
