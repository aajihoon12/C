#include <stdio.h>

main(){
    int i,j;
    char * movies[5]={"Romeo And Juliet","Life Is Beautiful",
                        "Avengers","Spider Man","Titanic"};
    char * tempMovies="for change";
    int movieRatings[5]; //�ε��� �����ֱ�.
    int tempMovieRatings;
    int didSwap;

    printf("�ֿ�� ��ȭ �ĺ��� ��:\n");
    for(i=0;i<5;i++){
        printf("%s �����Է�:",movies[i]);
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
    printf("\n�򰡼���\n");
    for(i=0;i<5;i++){
        printf("%s ������:%d \n",movies[i],movieRatings[i]);
    }
    return 0;
}
