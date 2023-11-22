
void push(Stack *s,char data){
  
  if(isFull(*s)){
        return;
  }
   s -> top++;
   s -> arr[s -> top] = data;
   return ;
}


