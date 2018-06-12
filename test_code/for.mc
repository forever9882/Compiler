int main(){
    int i;
    for(i=0;i<20;i++){
        if((i%2)==0)
            continue;
		
        write(i);
		
        if(i==10)
            break;
    }
    return 0;
}