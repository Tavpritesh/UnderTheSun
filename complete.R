
rm(list=ls())
complete <- function(directory,id){
setwd("d:/TP/Downloads")
setwd(directory)
files <- list.files()[id]
mylist <- list()
out <- matrix(0,ncol=2,nrow=length(id))
    for(i in 1:length(id))
    {
      mylist[[i]]<-read.csv(files[i],header=T)
      out[i,] <- c(id[i],nrow(na.omit(mylist[[i]])))  
    }
out<-data.frame(out)
names(out) <- c("id","nobs")
return(out)

}

