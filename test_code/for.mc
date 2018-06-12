//using for
//using continue
//using break

int main(){
    int i;
    for(i=0;i<30;i++){
        
        if(i==20)
            break;

        if((i%2)==0)
            continue;
        write(i);
        
    }
    return 0;
}