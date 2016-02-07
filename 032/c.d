import std.stdio;
import std.array;
import std.conv;
import std.math;
import std.numeric;
import std.algorithm;

void main() {
    int n, k;
    auto input = readln().split().to!(int[]);
    n = input[0];
    k = input[1];
    int[] ss = new int[n];
    foreach(int i; 0..n) {
        input = readln().split().to!(int[]);
        ss[i] = input[0];
        if(ss[i] == 0) {
            writeln(n);
            return;
        }
    }
    int ans = 0;
    long buf = 1;
    int begin = 0, end = 0;
    while(end < n) {
        if(buf * ss[end] <= k) {
            buf *= ss[end];
            end++;
            if(end - begin > ans) ans = end - begin;
        } else if(begin != end) {
            buf /= ss[begin];
            begin++;
        } else {
            begin++;
            end++;
        }
    }
    writeln(ans);
}
