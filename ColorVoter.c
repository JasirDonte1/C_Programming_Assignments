//

//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int red = 0, blue = 0, brown = 0, green = 0, yellow = 0, purple = 0;
    int input;    //holds the input valuse from user
    while (input != 9){
         printf("(Press 9 to stop voting)\nThe Many Colors of M&M's Candy\n 1. red\n 2. blue\n 3. brown\n 4. yellow\n 5. green\n 6. purple\n");
        printf("Vote on your favorite color by pressing the number before it.\n");
        scanf("%d", &input);
        if (input > 0 ){
            if (input < 7){
                switch (input) {
                    case 1:
                        red++;
                        break;
                    case 2:
                        blue++;
                        break;
                    case 3:
                        brown++;
                        break;
                    case 4:
                        yellow++;
                    case 5:
                        green++;
                        break;
                    case 6:
                        purple++;
                        break;
                        
                    default:
                        printf("command not recodnized, try again");   //error message will print if user enter a number outside of the commands 
                        break;
                }
            }
        }
    }
    printf("Results:\n red: %d\n blue %d\n brown: %d\n yellow: %d\n green: %d\n purple: %d\n", red , blue, brown, yellow, green, purple);
    
    
    return 0;
}

