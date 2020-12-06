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
