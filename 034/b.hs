import Data.Functor

str2int :: String -> Int
str2int str = read str :: Int

main :: IO ()
main = do
    n <- str2int <$> getLine
    print $ if even n then n - 1 else n + 1

