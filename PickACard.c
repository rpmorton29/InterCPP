/*
================================================================================
 * KEY for Project 1 PickACard.c
 * Author: RMorton
 * Version: Created on Sep 19, 2017, updates 9/24/17
 * Copyright: By Ryan Morton for use as an assignment
 * Description: This program will promt the user to select from a
 * predetermined number list to gues both the number value for a randomly
 * selected Suit and Card from a deck of cards
 . Written in C, Ansi-style.
================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main(void) {
    
    int x = 0;
    srand(time(NULL));
    int Cguess, Sguess,SecCard,Secsuit;
    int cards[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13}; //10,11,12,13= J,Q,K,A
    int suit[4] = {1,2,3,4};
    
    printf("PickACard by Ryan Morton. This program with randomly pick a suit\n");
    printf("and card, you are tasked to guess. If right move on if not\n");
    printf("Try Again!\n");
    Secsuit = rand()%4+1;
    
   // printf("Secret Suit #: %i\n",Secsuit); commented out was for debugging
    printf("Suits:Spades Hearts Clubs Diamonds\n");
    
    for(x = 0; x<4; x++){
        printf("\t\t%i" ,suit[x]);
    }
    
    
    
    printf("\nType the number for the suit you guess or Type 52 to quit.\n");
    scanf("%i",&Sguess);
    printf("You choose: %i\n",Sguess);
    
    if( Sguess != Secsuit || Sguess==52)
    {
        printf("Thanks for using my program Try Again!\n");
        return 0;
    }
    
    else{
        printf("That is the Correct Suit, Now try for the Card.\n");
    }
    
    
    
    SecCard = rand()%13+1;
    //printf("Secret Card #: %i\n",SecCard); commented out for debugging
    
    printf("Write 1-9 for Cards 2-10 and 10-13 for Jack,Queen,King,Ace.\n");
    for(x = 0; x<13; x++){
        printf("%i\t" ,cards[x]);
    }
    
    
    printf("\nType the number for the suit you guess or Type 52 to quit.\n");
    
    scanf("%i",&Cguess);
    printf("You choose: %i\n", Cguess);
    
    if(Cguess != SecCard || Cguess == 52){
        printf("Thanks for using my program!Try again to  guess it right!\n");
        
    }
    else{
        printf("Congrats you guessed the correct Suit and Card!\n");
    }
    
    
    return 0;
}




/*
PickACard by Ryan Morton. This program with randomly pick a suit
and card, you are tasked with guess. If right move on if not
Try Again!
Secret Suit #: 2
Suits:Spades Hearts Clubs Diamonds
1		2		3		4
Type the number for the suit you guess or Type 52 to quit.
2
You choose: 2
That is the Correct Suit, Now try for the Card.
Secret Card #: 9
Write 1-9 for Cards 2-10 and 10-13 for Jack,Queen,King,Ace.
1	2	3	4	5	6	7	8	9	10	11	12	13
Type the number for the suit you guess or Type 52 to quit.
4
You choose: 4
Thanks for using my program!Try again to  guess it right!
Program ended with exit code: 0
================================================================================
 PickACard by Ryan Morton. This program with randomly pick a suit
 and card, you are tasked to guess. If right move on if not
 Try Again!
 Secret Suit #: 1
 Suits:Spades Hearts Clubs Diamonds
 1		2		3		4
 Type the number for the suit you guess or Type 52 to quit.
 2
 You choose: 2
 Thanks for using my program Try Again!
 Program ended with exit code: 0
================================================================================
 PickACard by Ryan Morton. This program with randomly pick a suit
 and card, you are tasked to guess. If right move on if not
 Try Again!
 Secret Suit #: 4
 Suits:Spades Hearts Clubs Diamonds
 1		2		3		4
 Type the number for the suit you guess or Type 52 to quit.
 7777
 You choose: 7777
 Thanks for using my program Try Again!
 Program ended with exit code: 0
================================================================================
 PickACard by Ryan Morton. This program with randomly pick a suit
 and card, you are tasked to guess. If right move on if not
 Try Again!
 Secret Suit #: 3
 Suits:Spades Hearts Clubs Diamonds
 1		2		3		4
 Type the number for the suit you guess or Type 52 to quit.
 3
 You choose: 3
 That is the Correct Suit, Now try for the Card.
 Secret Card #: 10
 Write 1-9 for Cards 2-10 and 10-13 for Jack,Queen,King,Ace.
 1	2	3	4	5	6	7	8	9	10	11	12	13
 Type the number for the suit you guess or Type 52 to quit.
 10
 You choose: 10
 Congrats you guessed the correct Suit and Card!
 Program ended with exit code: 0
================================================================================
 PickACard by Ryan Morton. This program with randomly pick a suit
 and card, you are tasked to guess. If right move on if not
 Try Again!
 Secret Suit #: 2
 Suits:Spades Hearts Clubs Diamonds
 1		2		3		4
 Type the number for the suit you guess or Type 52 to quit.
 2
 You choose: 2
 That is the Correct Suit, Now try for the Card.
 Secret Card #: 3
 Write 1-9 for Cards 2-10 and 10-13 for Jack,Queen,King,Ace.
 1	2	3	4	5	6	7	8	9	10	11	12	13
 Type the number for the suit you guess or Type 52 to quit.
 0
 You choose: 0
 Thanks for using my program!Try again to  guess it right!
 Program ended with exit code: 0
================================================================================
 PickACard by Ryan Morton. This program with randomly pick a suit
 and card, you are tasked to guess. If right move on if not
 Try Again!
 Secret Suit #: 2
 Suits:Spades Hearts Clubs Diamonds
 1		2		3		4
 Type the number for the suit you guess or Type 52 to quit.
 2
 You choose: 2
 That is the Correct Suit, Now try for the Card.
 Secret Card #: 4
 Write 1-9 for Cards 2-10 and 10-13 for Jack,Queen,King,Ace.
 1	2	3	4	5	6	7	8	9	10	11	12	13
 Type the number for the suit you guess or Type 52 to quit.
 0000
 You choose: 0
 Thanks for using my program!Try again to  guess it right!
 Program ended with exit code: 0
 
================================================================================
 PickACard by Ryan Morton. This program with randomly pick a suit
 and card, you are tasked to guess. If right move on if not
 Try Again!
 Secret Suit #: 4
 Suits:Spades Hearts Clubs Diamonds
 1		2		3		4
 Type the number for the suit you guess or Type 52 to quit.
 4
 You choose: 4
 That is the Correct Suit, Now try for the Card.
 Secret Card #: 12
 Write 1-9 for Cards 2-10 and 10-13 for Jack,Queen,King,Ace.
 1	2	3	4	5	6	7	8	9	10	11	12	13
 Type the number for the suit you guess or Type 52 to quit.
 4
 You choose: 4
 Thanks for using my program!Try again to  guess it right!
 Program ended with exit code: 0
 
================================================================================
 PickACard by Ryan Morton. This program with randomly pick a suit
 and card, you are tasked to guess. If right move on if not
 Try Again!
 Secret Suit #: 1
 Suits:Spades Hearts Clubs Diamonds
 1		2		3		4
 Type the number for the suit you guess or Type 52 to quit.
 &
 You choose: 1
 That is the Correct Suit, Now try for the Card.
 Secret Card #: 13
 Write 1-9 for Cards 2-10 and 10-13 for Jack,Queen,King,Ace.
 1	2	3	4	5	6	7	8	9	10	11	12	13
 Type the number for the suit you guess or Type 52 to quit.
 You choose: 0
 Thanks for using my program!Try again to  guess it right!
 Program ended with exit code: 0
 
 ================================================================================
*/

