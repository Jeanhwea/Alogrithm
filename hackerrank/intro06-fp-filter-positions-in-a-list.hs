-- filename: intro06-fp-filter-positions-in-a-list.hs
-- author: Jeanhwea

-- Filter positions in a list

f :: [Int] -> [Int]
f lst = [ lst !! i | i <- [1,3..end]]
    where end = (length lst) - 1

-- This part deals with the Input and Output and can be used as it is. Do not modify it.
main = do
    inputdata <- getContents
    mapM_ (putStrLn. show). f. map read. lines $ inputdata
