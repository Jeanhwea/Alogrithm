-- filename: intro13-area-under-curves-and-volume-of-revolving-a-curv.hs
-- author: Jeanhwea

import Text.Printf (printf)

a = [1, 2, 3, 4, 5]  :: [Int]
b = [6, 7, 8, 9, 10] :: [Int]
l = 1 :: Int
r = 4 :: Int
-- area = 2435300.3
-- volume = 26172951168940.8

-- This function should return a list [area, volume].
solve :: Int -> Int -> [Int] -> [Int] -> [Double]
solve l r a b = [area, volume]
    where
        area = sum $ map (\y' -> y' * step) ylist
        volume = sum $ map (\y' -> pi * y' * y' * step) ylist

        step = 0.001

        f x = sum $ map (\(a', b') -> fromIntegral a' * x ** (fromIntegral b')) (zip a b)

        xlist = [fromIntegral l, fromIntegral l + step .. fromIntegral r]
        ylist = map f xlist



--Input/Output.
main :: IO ()
main = getContents >>= mapM_ (printf "%.1f\n"). (\[a, b, [l, r]] -> solve l r a b). map (map read. words). lines

