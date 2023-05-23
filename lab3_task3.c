#include <stdio.h>
    int main() 
    {
        int EpisodeNumber;
        printf("Enter the \"Downton Abbey (Series 1)\" episode number: ");
        scanf("%d", &EpisodeNumber);
        switch (EpisodeNumber) {
            case 1:
                printf("Episode 1: \"Pilot\"\nOriginal air date: 26 September 2010");
                break;
            case 2:
                printf("Episode 2: \"Matthew's New Life in the Manor\"\nOriginal air date: 3 October 2010");
                break;
            case 3:
                printf("Episode 3: \"The Turkish Embassy\"\nOriginal air date: 10 October 2010");
                break;
            case 4:
                printf("Episode 4: \"There's a Thief in Tow\"\nOriginal air date: 17 October 2010");
                break;
            case 5:
                printf("Episode 5: \"Best Bloom Title\"\nOriginal air date: 24 October 2010");
                break;
            case 6:
                printf("Episode 6: \"The Wine Thief\"\nOriginal air date: 31 October 2010");
                break;
            case 7:
                printf("Episode 7: \"Cora's Replacement\"\nOriginal air date: 7 November 2010");
                break;
            case 53:
                printf("The fact TV Series had only 52 episodes lmfaoooooooo");
                break;
            case 69:
                printf(":D");
                break;
            default:
            if (EpisodeNumber<0) 
            {
                printf("Oh hey, you've entered a negative number!\nDid you know that episodes cannot have negative number count? :D");
                break; 
            }
            else if (EpisodeNumber>=54) 
            {
                printf("Slow down, buddy, where do ya' think ya' goin'???");
                break;
            }
            else 
            {
                printf("Oh, hey, you've entered a number that does not represent any kinda episode number of season one :D");
                break;
            }
        }
        return 0;
    }