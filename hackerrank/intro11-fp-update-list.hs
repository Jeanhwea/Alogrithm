-- filename: intro11-fp-update-list.hs
-- Enter your code here. Read input from STDIN. Print output to STDOUT

f arr = [abs e| e<-arr]

-- This section handles the Input/Output and can be used as it is. Do not modify it.
main = do
   inputdata <- getContents
      mapM_ putStrLn $ map show $ f $ map (read :: String -> Int) $ lines inputdata

