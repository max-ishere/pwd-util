# pwd-util
I should point out that I AM NOT A CYBERSECURITY EXPERT !!! Use of this application is your responcibility and is given as is.

This is a work in progress project. Currently there is nothing except for a simple algorithm for generating random but meaningful strings. The plan is to make a utility for safe storage and generation of passwords.

# Word generating algorithm (Not secure enough for passwords)
The algorithm starts by picking a random number that doesn't exceed sum of all weights. Then, in alphabetical order, all weights of all characters are summed up untill the sum exceeds the random number. Assuming that rand() isnt biased to any value(s) we can controll the selection of a character by making it's weight larger compared to other weights.

You can imagine rand() choosing a random point on the line below and the probablity that point will belong to some character is defined by length of that character on the line:

```a--b----------c--d- - - - z--```

In this case the likelyhood of 'b' being chosen is far bigger then other characters. Here are a few raw examples:
```
  qbgkapo  rxgmclp  lbpqutk  nkyaaos  uoropyd
  zupbcfu  gpnypnz  ubjgufg  ganzyou  utzgqyl
  sccmayh  aqgwdyp  zctpppp  uzurtfy  mpqobdf
```

# How to build this app (Linux, make, g++)
First of all download all files and have make and g++ installed.
Then open forler with the files and type
```
$ make
```
```$``` indicates that you type it in terminal, no need to type that.
After make builds succesfully you wil see ```main``` file in your folder. Check by:
```
$ ls
```
```
**main** main.cpp (...other files)
```
# Usage
Run
```
$ ./main
```
The output can be controlled by
[str-len] - length of your string, (default 16)
[lines] - number of lines (1)
[cols] - number of cols if you want to compact the output (1)
```
$ ./main [str-len] [lines] [cols]
```
Here is an example:
```
$ ./main 7 3 5

  qbgkapo  rxgmclp  lbpqutk  nkyaaos  uoropyd
  zupbcfu  gpnypnz  ubjgufg  ganzyou  utzgqyl
  sccmayh  aqgwdyp  zctpppp  uzurtfy  mpqobdf
```
