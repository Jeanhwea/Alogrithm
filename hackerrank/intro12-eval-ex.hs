-- filename: intro12-eval-ex.hs
-- author: Jeanhwea

-- Evaluating e^x = 1 + x + ... + x^n / n!

solve :: Double -> Double
solve x = sum $ scanl (\acc n -> acc*x / n) 1 [1..9]

main :: IO()
main = getContents >>= 
    mapM_ print . map solve . map (read::String->Double) . tail . words
