rm testresult
gcc -o test test.c & ./test &> testresult
cat testresult
