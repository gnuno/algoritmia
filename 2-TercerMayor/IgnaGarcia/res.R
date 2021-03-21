find_3rd_max <- function(nums) {
  max <- c(-232, -232, -232)
  
  for(number in nums) {
    if(max[1] == number || max[3] == number || max[2] == number){
      cat("Numero ya ubicado en los 3 maxs\n")
    } else if(max[1] < number) {
      max[3] <- max[2]
      max[2] <- max[1]
      max[1] <- number
      
    } else if(max[2] < number) {
      max[3] <- max[2]
      max[2] <- number
      
    } else if(max[3] < number) {
      max[3] <- number
      
    }
  }
  
  if(max[3] == -232) {
    cat("No hay 3er maximo.\nEl maximo es: ", max[1], "\n")
    return(max[1])
    
  } else {
    cat("El 3er maximo es: ", max[3], "\n")
    return(max[3])
  }
}

# -------------------- TEST CASES

nums <- c(3,2,1) 
nums
find_3rd_max(nums) # 1

nums <- c(1,2) 
nums
find_3rd_max(nums) # 2

nums <- c(2,2,3,1) 
nums
find_3rd_max(nums) # 1

nums <- c(135, 88, -156)
nums
find_3rd_max(c(135, 88, -156)) # -156


# Random Case
nums <- sample(-231:231, sample(1:104, 1), replace=T)
nums
find_3rd_max(nums)

# Worst Random Case
nums <- sample(-231:231, 104, replace=F)
nums
system.time(find_3rd_max(nums)) # 0.01sec

# Super Worst Random Case
nums <- sample(-99999999:99999999, 999999, replace=F)
system.time(find_3rd_max(nums)) # 0.37sec

# Super Worst Random Case
nums <- sample(-99999999:99999999, 119999999, replace=T) # 500MB
system.time(find_3rd_max(nums)) # 42.66sec
