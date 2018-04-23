#find the input.txt file fist
setwd("/Users/SallyGwj./Desktop")
getwd

#read the input.txt file
input<-read.table("input.txt", header = TRUE)

#find the minimum, Q1, median, Q3, maximum
summary(input)

#histogram

hist(input$X1, breaks = 200, xlim = c(0,1000), 
     ylim = c(0,35), main = "Histogram of Input", xlab = "Number of Input")

