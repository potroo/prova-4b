#include <stdio.h>

struct Post{
    int coments;
    int likes;
};

int main(){
    
    struct Post insta[5];
    
    insta[0].coments=10;
    insta[0].likes=20;
    insta[1].coments=1;
    insta[1].likes=25;
    insta[2].coments=10;
    insta[2].likes=20;
    insta[3].coments=10;
    insta[3].likes=20;
    insta[4].coments=15;
    insta[4].likes=40;
    
    for(int i=0;i<5;i++){
        printf("sua foto teve %d caomentarios. \n", insta[i].coments);
        printf("sua foto teve %d curtidas.\n",insta[i].likes);
        printf("====================================\n");
    }
    
    return 0;
}