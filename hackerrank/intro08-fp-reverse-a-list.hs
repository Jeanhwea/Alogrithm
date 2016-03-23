-- filename: intro08-fp-reverse-a-list.hs
-- author: Jeanhwea

rev l = foldl (\acc x -> x : acc) [] l
