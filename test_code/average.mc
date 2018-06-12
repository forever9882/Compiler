int main(){
    
    int score = 0;
    int rating = 0;
    read(score);

    switch(score/10){
        case 10: 
            rating = 1;
            break;
        case 9: 
            rating = 2;
            break;
        case 8: 
            rating = 3; 
            break;
        case 7: 
            rating = 4; 
            break;
        default: 
            rating = 5;
            break;         
    }
    write(rating);
    return 0;
}