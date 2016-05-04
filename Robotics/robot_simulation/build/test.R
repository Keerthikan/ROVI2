library("utils")
library(heplots)
require(akima) ; require(rgl)

position <- read.csv(file = "position.csv", header = FALSE)
z_vec <- read.csv(file = "rotation.csv", header = FALSE)


base_1 = position[1,]
endposition_1 = base + z_vec[1,]
base_2 = position[2,]
endposition_2 = base + z_vec[2,]
base_3 = position[3,]
endposition_3 = base + z_vec[3,]
base_4 = position[4,]
endposition_4 = base + z_vec[4,]
base_5 = position[5,]
endposition_5 = base + z_vec[5,]
base_6 = position[6,]
endposition_6 = base + z_vec[6,]
base_7 = position[7,]
endposition_7 = base + z_vec[7,]
base_8 = position[8,]
endposition_8 = base + z_vec[8,]
base_9 = position[9,]
endposition_9 = base + z_vec[9,]

varrow3d <- Vectorize(arrow3d, c("p0","p1","p2","p3","p4","p5"))
plot3d(0,0,0, type="n", xlim=c(-3,3,0), ylim=c(-3,3), zlim=c(-3,3), xlab="x", ylab="y", zlab="z")
grid3d(c("x", "y", "z"))
invisible(
  varrow3d(list(c(base_1[[1]],base_1[[2]],base_1[[3]]), c(endposition_1[[1]],endposition_1[[2]],endposition_1[[3]]),
           list(c(base_2[[1]],base_2[[2]],base_2[[3]]), c(endposition_2[[1]],endposition_2[[2]],endposition_2[[3]])),
           list(c(base_3[[1]],base_3[[2]],base_3[[3]]), c(endposition_3[[1]],endposition_3[[2]],endposition_3[[3]])),
           list(c(base_4[[1]],base_4[[2]],base_4[[3]]), c(endposition_4[[1]],endposition_4[[2]],endposition_4[[3]])),
           list(c(base_5[[1]],base_5[[2]],base_5[[3]]), c(endposition_5[[1]],endposition_5[[2]],endposition_5[[3]])),
           list(c(base_6[[1]],base_6[[2]],base_6[[3]]), c(endposition_6[[1]],endposition_6[[2]],endposition_6[[3]])))
          )
)

