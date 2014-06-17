rm(list=ls())
pollutantmean<-function(directory,pollutant,id=1:332){
  my_mean <- function(x){
    mean(x,na.rm=T)
  }  
  setwd("d:/TP/Downloads/")
  setwd(directory)
  files <- list.files()[id]
  mylist <- list()
  vec <- NULL
  for(i in 1:length(id)){
    mylist[[i]]<-read.csv(files[i],header=T)
  }
  for(j in 1:length(id)){
    if(pollutant=="sulfate")
    {
      vec <- c(vec,mylist[[j]][,2])          
    }
    else-if(pollutant=="nitrate")                
    {
      vec <- c(vec,mylist[[j]][,3])                
    }
    else
    {
      stop("Pollutant not in the measured list")
    }
  }
  my_mean(vec)
}  