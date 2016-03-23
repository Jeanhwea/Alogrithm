-- filename: intro09-fp-sum-of-odd-elements.hs
-- author: Jeanhwea

f arr = sum [e| e <- arr, odd e]

-- This part handles the Input/Output and can be used as it is. Do not change or modify it.
main = do
   inputdata <- getContents
   putStrLn $ show $ f $ map (read :: String -> Int) $ lines inputdata

