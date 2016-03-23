-- filename: intro03-fp-hello-world-n-times.hs
-- author: Jeanhwea

-- output "Hello World" n times

-- hello_world 1 = putStrLn "Hello World"
-- hello_world n = do
--     hello_world (n-1)
--     putStrLn "Hello World"

hello_world n
    | n == 1 = putStrLn "Hello World"
    | otherwise = do
        putStrLn "Hello World"
        hello_world (n-1)


main = do
    n <- readLn :: IO Int
    hello_world n
