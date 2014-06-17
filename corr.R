rm(list=ls())

corr <- function(directory,threshold=0){
    out <- c()
    setwd("d:/TP/Downloads")
    setwd(directory)
    files <- list.files()
    mylist <- list()
    for(i in 1:length(files))
      {
          mylist[[i]]<-read.csv(files[i],header=T)
          observed <- nrow(na.omit(mylist[[i]])) 
      
      
      if(observed>threshold){
        
          out[i] <- cor(na.omit(mylist[[i]])$sulfate,na.omit(mylist[[i]])$nitrate)
          #print(paste(i,observed,out[i]))
      }
      else{
       out[i] = NA
       #print(paste(i,out[i]))
       
      }
    }
    out <- as.numeric(na.omit(out))
#     if(out== NULL){
#       return(0)
#     }
#     else(return(out))

    
}

