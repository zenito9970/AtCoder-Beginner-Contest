import Data.Functor

str2int :: String -> Int
str2int str = read str :: Int

main :: IO ()
main = do
    a:b:_ <- (map str2int) . words <$> getLine
    putStrLn $ if a < b then "Better" else "Worse"
