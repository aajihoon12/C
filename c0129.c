#include <stdio.h>

main(){
    int i,j;
    char * movies[5]={"Romeo And Juliet","Life Is Beautiful",
                        "Avengers","Spider Man","Titanic"};
    char * tempMovies="for change";
    int movieRatings[5]; //인덱스 맞춰주기.
    int tempMovieRatings;
    int didSwap;

    printf("최우수 영화 후보작 평가:\n");
    for(i=0;i<5;i++){
        printf("%s 평점입력:",movies[i]);
        scanf(" %d",&movieRatings[i]);
    }

    for(i=0;i<5;i++){
        didSwap=0;
        for(j=0;j<4;j++){
            if(movieRatings[j]<movieRatings[j+1]){
                tempMovies=movies[j+1];
                movies[j+1]=movies[j];
                movies[j]=tempMovies;

                tempMovieRatings=movieRatings[j+1];
                movieRatings[j+1]=movieRatings[j];
                movieRatings[j]=tempMovieRatings;
                didSwap=1;
            }
        }
        if(didSwap==0){
            break;
        }
    }
    printf("\n평가순위\n");
    for(i=0;i<5;i++){
        printf("%s 평가점수:%d \n",movies[i],movieRatings[i]);
    }
    return 0;
}
