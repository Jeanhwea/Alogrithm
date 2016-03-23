-- filename: intro07-fp-array-of-n-elements.hs
-- author: Jeanhwea

fn :: (Enum a, Num a) => a -> [a]
fn n = [1..n]

