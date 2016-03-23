-- filename: intro04-fp-list-replication.hs
-- author: Jeanhwea

-- List Replication

f :: Int -> [Int] -> [Int]
f n arr = foldl (++) [] [replicate n x | x <- arr]

main :: IO()
main = getContents >>=
    mapM_ print. (\(n:arr) -> f n arr). map read. words

