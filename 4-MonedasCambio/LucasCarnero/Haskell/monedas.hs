import Data.List(foldl1')
import Data.Array

cambio :: [Int] -> Int -> Int
cambio cs v = cambio' v
    where
        ultimos = array(0, v) [(x, cambio'' x) | x <- [0..v]]
        cambio' v = ultimos ! v
        cambio'' 0 = 0
        cambio'' v = foldl1' min [cambio' $! (v-i) | i <- takeWhile (<=v) cs] + 1

{- 
 Calculo la cantidad de monedas de 1, 5 y 10 que necesito para representar
 el numero 13
-}
main = print $ cambio [1, 5, 10] 8