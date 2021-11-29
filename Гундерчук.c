    int Nneg=0,Npos=0;
    for (int i =0; i<dim; i++){
        if(A[i]<0){
            Nneg++;
        }
        if(A[i]>0){
            Npos++;
        }
    }
    //printf("Nneg = %i\n",Nneg);
    //printf("Npos = %i\n",Npos);
    if(Nneg==14){
        for (int i =0; i<dim; i++){
            A[i]=0;    
        }
    }
    else if(Npos==14){
        for (int i =0; i<14; i++){
            A[i]=1;    
        }    
    }    
    
    else {
        //заміна елементів масиву(за умовою)
     
     
    }    
